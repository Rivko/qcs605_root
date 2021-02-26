/*=============================================================================
  @file sns_suid_util.c

  Goals for this utility:
  - Simple for Sensor developers to use
  - Handle all typical and expected use cases
  - Minimize wasted heap memory usage

  As this process will generally only be performed once at boot-up, processing
  efficiency, while not completely neglected, was deprioritized during the
  implementation.

  Copyright (c) 2017 - 2018 Qualcomm Technologies, Inc.
  All Rights Reserved.
  Confidential and Proprietary - Qualcomm Technologies, Inc.
  ===========================================================================*/

/*=============================================================================
  Include Files
  ===========================================================================*/

#include "sns_island.h"
#include "sns_pb_util.h"
#include "sns_printf.h"
#include "sns_sensor.h"
#include "sns_sensor_event.h"
#include "sns_sensor_util.h"
#include "sns_service_manager.h"
#include "sns_stream_service.h"
#include "sns_suid.pb.h"
#include "sns_suid_util.h"
#include "sns_types.h"

#define SNS_SECTION(name) __attribute__((section(name)))

/*=============================================================================
  Type Definitions
  ===========================================================================*/

/**
 * Structure matches that generated by SNS_SUID_LOOKUP_DATA.
 */
typedef struct sns_suid_lookup_data
{
  /* Length of the variable length 'sensors' array */
  uint16_t sensors_cnt;
  /* Index into a SUID lookup event;
   * when iterating through multiple SUIDs of a single data type */
  uint16_t suid_idx;
  /* Optional callback function to choose between multiple SUIDs */
  sns_suid_lookup_cb suid_cb;
  /* Data Stream on which all SUID lookup requests will be sent */
  sns_data_stream *suid_stream;
  /* Attribute requests; will be opened/closed sequentially per SUID */
  sns_data_stream *attr_stream;
  struct
  {
    /* Data type to search for */
    char *data_type;
    /* SUID found; defaults to {0} */
    sns_sensor_uid suid;
  } sensors[];
} sns_suid_lookup_data;

/*=============================================================================
  Static Function Definitions
  ===========================================================================*/

/**
 * Decode a single SUID within a SUID Lookup Event.
 *
 * uid_lookup->buf_len is used as a decrementing counter, to determine which
 * SUID (if multiple) to decode and return.
 */
static bool
decode_suid_event(pb_istream_t *stream, const pb_field_t *field, void **arg)
{
  UNUSED_VAR(field);
  pb_buffer_arg *uid_lookup = (pb_buffer_arg*)*arg;

  if(0 == uid_lookup->buf_len)
  {
    if(!pb_decode(stream, sns_std_suid_fields, (void*)uid_lookup->buf))
      return false;
  }
  else
  {
    /*Skip the current SUID field, and proceed to the next*/
    pb_read(stream, (pb_type_t*)NULL, stream->bytes_left);
  }

  uid_lookup->buf_len--;
  return true;
}

/**
 * Send an attribute request to the specified Sensor.
 *
 * @param[i] sensor Sensor which created the lookup request
 * @param[i] data Data created by SNS_SUID_LOOKUP_DATA
 * @param[i] suid Destination of the attribute request
 */
static void
send_attr_req(struct sns_sensor *sensor, sns_suid_lookup_data *data,
    sns_sensor_uid const *suid)
{
  sns_service_manager *svc_mgr = sensor->cb->get_service_manager(sensor);
  sns_stream_service *stream_service = (sns_stream_service*)
    svc_mgr->get_service(svc_mgr, SNS_STREAM_SERVICE);
  size_t encoded_len;
  uint8_t buffer[sns_std_attr_req_size];
  sns_std_attr_req attr_req = sns_std_attr_req_init_default;

  stream_service->api->create_sensor_stream(stream_service,
      sensor, *suid, &data->attr_stream);

  encoded_len = pb_encode_request(buffer, sizeof(buffer), &attr_req,
      sns_std_attr_req_fields, NULL);
  if(encoded_len > 0)
  {
    sns_request request = (sns_request){
      .message_id = SNS_STD_MSGID_SNS_STD_ATTR_REQ,
      .request_len = encoded_len, .request = buffer };

    data->attr_stream->api->send_request(data->attr_stream, &request);
  }
}

/**
 * Get the data type of the SUID event we are presently processing.
 */
static char const*
get_curr_data_type(sns_suid_lookup_data *data)
{
  sns_sensor_event *event =
      data->suid_stream->api->peek_input(data->suid_stream);

  if(NULL != event)
  {
    pb_istream_t stream =
      pb_istream_from_buffer((void*)event->event, event->event_len);
    sns_suid_event suid_event = sns_suid_event_init_default;
    pb_buffer_arg data_type = { .buf = NULL, .buf_len = 0 };

    suid_event.data_type.funcs.decode = &pb_decode_string_cb;
    suid_event.data_type.arg = &data_type;
    if(pb_decode(&stream, sns_suid_event_fields, &suid_event))
      return data_type.buf;
  }
  return NULL;
}

/**
 * Handle all events incoming to the Attribute Data Stream.
 */
static void
process_attr_stream(sns_sensor *sensor, sns_suid_lookup_data *data)
{
  sns_sensor_event *event =
    data->attr_stream->api->peek_input(data->attr_stream);

  while(NULL != event)
  {
    if(SNS_STD_MSGID_SNS_STD_ATTR_EVENT == event->message_id)
    {
      char const *data_type = get_curr_data_type(data);
      if(data->suid_cb(sensor, data_type, event))
      {
        data->suid_idx = 0;
        data->suid_stream->api->get_next_input(data->suid_stream);
      }
      sns_sensor_util_remove_sensor_stream(sensor, &data->attr_stream);
      break;
    }
    event = data->attr_stream->api->get_next_input(data->attr_stream);
  }
}

/**
 * Handle all events incoming to the SUID Data Stream.
 */
static void
process_suid_stream(sns_sensor *sensor, sns_suid_lookup_data *data)
{
  sns_sensor_event *event =
    data->suid_stream->api->peek_input(data->suid_stream);

  while(NULL != event)
  {
    bool pend_attr = false;

    if(SNS_SUID_MSGID_SNS_SUID_EVENT == event->message_id)
    {
      sns_sensor_uid empty_suid = (sns_sensor_uid){ .sensor_uid = { 0 } };
      pb_istream_t stream =
        pb_istream_from_buffer((void*)event->event, event->event_len);
      sns_suid_event suid_event = sns_suid_event_init_default;
      sns_sensor_uid uid = empty_suid;
      pb_buffer_arg data_type = { .buf = NULL, .buf_len = 0 };
      pb_buffer_arg uid_lookup;

      uid_lookup.buf = &uid;
      /*SUID field is fixed length, use buf_len to indicate which SUID field to skip*/
      uid_lookup.buf_len = data->suid_idx;
      suid_event.data_type.funcs.decode = &pb_decode_string_cb;
      suid_event.data_type.arg = &data_type;
      suid_event.suid.funcs.decode = &decode_suid_event;
      suid_event.suid.arg = &uid_lookup;
      
      if(pb_decode(&stream, sns_suid_event_fields, &suid_event))
      {
        for(int i = 0; i < data->sensors_cnt; i++)
        {
          if(NULL != data->sensors[i].data_type &&
             0 == strcmp(data_type.buf, data->sensors[i].data_type))
          {
            data->sensors[i].suid = uid;

            if(NULL != data->suid_cb &&
               !sns_sensor_uid_compare(&data->sensors[i].suid, &empty_suid))
            {
              data->suid_idx++;
              pend_attr = true;
              send_attr_req(sensor, data, &uid);
            }

            break;
          }
        }
      }
      else
      {
        SNS_PRINTF(ERROR,sensor, "decode error!");
      }
    }
    else
    {
      SNS_PRINTF(HIGH, sensor, "Received unknown event");
    }

    if(pend_attr)
      break;

    data->suid_idx = 0;
    event = data->suid_stream->api->get_next_input(data->suid_stream);
  }
}

/*=============================================================================
  Public Function Definitions
  ===========================================================================*/

SNS_SECTION(".text.sns") void
sns_suid_lookup_add(struct sns_sensor *sensor, void *suid_lookup_data,
    char *data_type)
{
  sns_suid_lookup_data *data = (sns_suid_lookup_data*)suid_lookup_data;
  bool slot_found = false;

  SNS_ISLAND_EXIT();

  for(int i = 0; i < data->sensors_cnt; i++)
  {
    if(NULL == data->sensors[i].data_type)
    {
      data->sensors[i].data_type = data_type;
      slot_found = true;
      break;
    }
  }

  if(slot_found)
  {
    if(NULL == data->suid_stream)
    {
      sns_service_manager *manager = sensor->cb->get_service_manager(sensor);
      sns_stream_service *stream_service = (sns_stream_service*)
        manager->get_service(manager, SNS_STREAM_SERVICE);

      stream_service->api->create_sensor_stream(stream_service,
          sensor, sns_get_suid_lookup(), &data->suid_stream);
    }

    if(NULL != data->suid_stream)
    {
      uint8_t encoded_msg[100]; // PEND: Optimize buffer length
      sns_suid_req suid_req = sns_suid_req_init_default;
      pb_buffer_arg buffer_arg = (pb_buffer_arg)
        { .buf = data_type, .buf_len = strlen(data_type) + 1 };
      sns_request request;

      suid_req.has_register_updates = true;
      suid_req.register_updates = true;
      suid_req.data_type.funcs.encode = &pb_encode_string_cb;
      suid_req.data_type.arg = &buffer_arg;
      suid_req.has_default_only = true;
      if(NULL == data->suid_cb)
      {
        suid_req.default_only = true;
      }
      else
      {
        suid_req.default_only = false;
      }

      request.request = encoded_msg;
      request.message_id = SNS_SUID_MSGID_SNS_SUID_REQ;

      request.request_len = pb_encode_request(encoded_msg,
          sizeof(encoded_msg), &suid_req, sns_suid_req_fields, NULL);
      if(0 < request.request_len)
      {
        data->suid_stream->api->send_request(data->suid_stream, &request);
      }
    }
  }
}

#include "sns_printf_int.h"
SNS_SECTION(".text.sns") bool
sns_suid_lookup_get(void *suid_lookup_data, char *data_type,
    sns_sensor_uid *suid)
{
  sns_suid_lookup_data *data = (sns_suid_lookup_data*)suid_lookup_data;
  sns_sensor_uid empty_suid = (sns_sensor_uid){ .sensor_uid = { 0 } };

  SNS_ISLAND_EXIT();

  for(int i = 0; i < data->sensors_cnt; i++)
  {
    if(NULL != data->sensors[i].data_type &&
       0 == strcmp(data->sensors[i].data_type, data_type))
    {
      if(!sns_sensor_uid_compare(&data->sensors[i].suid, &empty_suid))
      {
        if(NULL != suid)
          *suid = data->sensors[i].suid;
        return true;
      }
      break;
    }
  }

  return false;
}

SNS_SECTION(".text.sns") bool
sns_suid_lookup_complete(void *suid_lookup_data)
{
  sns_suid_lookup_data *data = (sns_suid_lookup_data*)suid_lookup_data;
  sns_sensor_uid empty_suid = (sns_sensor_uid){ .sensor_uid = { 0 } };

  if(NULL != data->attr_stream)
    return false;

  for(int i = 0; i < data->sensors_cnt; i++)
  {
    if(NULL != data->sensors[i].data_type &&
       sns_sensor_uid_compare(&data->sensors[i].suid, &empty_suid))
      return false;
  }

  return true;
}

SNS_SECTION(".text.sns") void
sns_suid_lookup_handle(sns_sensor *sensor, void *suid_lookup_data)
{
  UNUSED_VAR(sensor);
  sns_suid_lookup_data *data = (sns_suid_lookup_data*)suid_lookup_data;

  SNS_ISLAND_EXIT();

  if(NULL != data->suid_stream)
  {
    if(NULL != data->attr_stream)
      process_attr_stream(sensor, data);

    if(NULL == data->attr_stream)
      process_suid_stream(sensor, data);
  }
}

SNS_SECTION(".text.sns") void
sns_suid_lookup_deinit(sns_sensor *sensor, void *suid_lookup_data)
{
  sns_suid_lookup_data *data = (sns_suid_lookup_data*)suid_lookup_data;

  SNS_ISLAND_EXIT();

  sns_sensor_util_remove_sensor_stream(sensor, &data->suid_stream);
  sns_sensor_util_remove_sensor_stream(sensor, &data->attr_stream);
}
