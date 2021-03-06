/*--------------------------------------------------------------------------
Copyright (c) 2010-2014, 2016 Qualcomm Technologies, Inc.
All Rights Reserved.
Confidential and Proprietary - Qualcomm Technologies, Inc.
--------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <adec_svr.h>
#include <string.h>
#include <errno.h>

/**
@brief This function starts command server

@param cb pointer to callback function from the client
@param client_data reference client wants to get back
through callback
@return handle to msging thread
*/
struct g711_ipc_info *omx_g711_thread_create(
message_func cb,
void* client_data,
char* th_name)
{
    int r;
    int fds[2];
    struct g711_ipc_info *g711_info;

    g711_info = calloc(1, sizeof(struct g711_ipc_info));
    if (!g711_info) return 0;

    g711_info->client_data = client_data;
    g711_info->process_msg_cb = cb;
    strlcpy(g711_info->thread_name,th_name, sizeof (g711_info->thread_name));

    if (pipe(fds)) {
        DEBUG_PRINT_ERROR("\n%s: pipe creation failed\n", __FUNCTION__);
        goto fail_pipe;
    }

    g711_info->pipe_in = fds[0];
    g711_info->pipe_out = fds[1];


    r = pthread_create(&g711_info->thr, 0, omx_g711_msg, g711_info);
    if (r < 0) goto fail_thread;

    DEBUG_DETAIL("Created thread for %s \n", g711_info->thread_name);
    return g711_info;


    fail_thread:
    close(g711_info->pipe_in);
    close(g711_info->pipe_out);

    fail_pipe:
    free(g711_info);

    return 0;
}

/**
@brief This function starts the event thread

@param cb pointer to callback function from the client
@param client_data reference client wants to get back
through callback
@return handle to msging thread
*/
struct g711_ipc_info *omx_g711_event_thread_create(
message_func cb,
void* client_data,
char* th_name)
{
    int r;
    int fds[2];
    struct g711_ipc_info *g711_info;

    g711_info = calloc(1, sizeof(struct g711_ipc_info));
    if (!g711_info) return 0;

    g711_info->client_data = client_data;
    g711_info->process_msg_cb = cb;
    strlcpy(g711_info->thread_name,th_name, sizeof (g711_info->thread_name));

    if (pipe(fds)) {
        DEBUG_PRINT_ERROR("\n%s: pipe creation failed\n", __FUNCTION__);
        goto fail_pipe;
    }

    g711_info->pipe_in = fds[0];
    g711_info->pipe_out = fds[1];


    r = pthread_create(&g711_info->thr, 0, omx_g711_events, g711_info);
    if (r < 0) goto fail_thread;

    DEBUG_DETAIL("Created thread for %s \n", g711_info->thread_name);
    return g711_info;


    fail_thread:
    close(g711_info->pipe_in);
    close(g711_info->pipe_out);

    fail_pipe:
    free(g711_info);

    return 0;
}

/**
@brief This function processes posted messages

Once thread is being spawned, this function is run to
start processing commands posted by client

@param info pointer to context

*/
void *omx_g711_msg(void *info)
{
    struct g711_ipc_info *g711_info = (struct g711_ipc_info*)info;
    unsigned char id;
    ssize_t n;

    DEBUG_DETAIL("\n%s: message thread start\n", __FUNCTION__);
    while (!g711_info->dead) {
        n = read(g711_info->pipe_in, &id, 1);
        if (n == 0)
        {
	   DEBUG_PRINT("%s: message pipe read zero\n", __FUNCTION__);
           break;
        }
        if (n == 1) {
            DEBUG_DETAIL("\n%s-->pipe_in=%d pipe_out=%d\n",
            g711_info->thread_name,
            g711_info->pipe_in,
            g711_info->pipe_out);

            g711_info->process_msg_cb(g711_info->client_data, id);

        }
        if ((n < 0) && (errno != EINTR))
        {
            DEBUG_PRINT_ERROR("%s:message pipe read n=%lu err=0x%8x\n",g711_info->thread_name,n,errno);
            break;
        }
    }
    DEBUG_DETAIL("%s: message thread stop\n", g711_info->thread_name);

    return 0;
}

void *omx_g711_events(void *info)
{
    struct g711_ipc_info *g711_info = (struct g711_ipc_info*)info;
    unsigned char id = 0;

    DEBUG_DETAIL("%s: message thread start\n", g711_info->thread_name);
    g711_info->process_msg_cb(g711_info->client_data, id);
    DEBUG_PRINT("%s: message thread stop\n", g711_info->thread_name);
    return 0;
}


void omx_g711_thread_stop(struct g711_ipc_info *g711_info)
{
    int rc = 0;
    DEBUG_DETAIL("%s: message thread close\n", g711_info->thread_name);
    close(g711_info->pipe_in);
    close(g711_info->pipe_out);
    rc = pthread_join(g711_info->thr,NULL);
    g711_info->pipe_out = -1;
    g711_info->pipe_in = -1;
    free(g711_info);
}

void omx_g711_post_msg(struct g711_ipc_info *g711_info, unsigned int id) {
    DEBUG_DETAIL("\n%s id=%d\n", __FUNCTION__,id);
    write(g711_info->pipe_out, &id, 1);
}
