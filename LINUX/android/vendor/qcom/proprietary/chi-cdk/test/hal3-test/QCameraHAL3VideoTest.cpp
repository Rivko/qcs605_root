////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2018 Qualcomm Technologies, Inc.
// All Rights Reserved.
// Confidential and Proprietary - Qualcomm Technologies, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*Copyright (c) 2016, The Linux Foundation. All rights reserved.*/


#include "QCameraHAL3VideoTest.h"
#include "QCameraHAL3MainTestContext.h"

namespace qcamera {

extern hal3_camera_lib_test *CamObj_handle;
buffer_thread_t Video_thread;
int video_req_sent;
extern pthread_cond_t mRequestAppCond;

extern int test_case_end;
extern bool thread_exit;
extern std::list<uint32_t> VideoQueue;
int video_buffer_allocated;
extern pthread_mutex_t TestAppLock, mCaptureRequestLock;
extern int snapshot_buffer;

#define QCAMERA3_BINNING_CORRECTION_MODE 1


QCameraHAL3VideoTest::QCameraHAL3VideoTest(int camid) :
    QCameraHAL3Test(0),
    mVideoHandle(NULL),
    mCaptureHandle(NULL),
    mVideoStream(NULL),
    mCameraId(camid),
    binning_mode(0)
{

}

void QCameraHAL3VideoTest::initTest(hal3_camera_lib_test *handle,
        int testcase, int camid, int w, int h)
{
    int i;
    CamObj_handle = handle; thread_exit = 0;
    test_case_end = 0;
    LOGD("\n buffer thread created for testcase %d  %d and %d ",testcase, w, h);
    configureVideoStream(&(handle->test_obj), camid, w, h);
    LOGD("\n video stream configured");
    constructDefaultRequest(&(handle->test_obj), camid);
    LOGD("pipeline_depth is %d", mPipelineDepthVideo);
    mVideoHandle = new native_handle_t *[mPipelineDepthVideo];
    for (i = 0; i < mPipelineDepthVideo; i++) {
        mVideoHandle[i] = new native_handle_t;
    }

    for (i = 0, video_req_sent = 1; i < mPipelineDepthVideo; i++, video_req_sent++) {
        vidoeAllocateBuffers(width, height, i);
        VideoQueue.push_back(i);
    }
    LOGD(" Request Number is : %d ",mRequest.frame_number);
    mRequest.frame_number = 0;
    videoProcessThreadCreate(handle);
}


void QCameraHAL3VideoTest::snapshotCaptureRequest(hal3_camera_lib_test *handle,
        int testcase, int camid, int w, int h)
{
    LOGD("Requested Capture Sizes for testcase:%d are :%d  X %d",testcase, w, h);
    captureRequestRepeat(handle, camid, MENU_START_CAPTURE);
    pthread_mutex_unlock(&mCaptureRequestLock);
}


void QCameraHAL3VideoTest::configureVideoStream(hal3_camera_test_obj_t *my_test_obj,
        int camid, int w, int h)
{
    camera3_device_t *device_handle = my_test_obj->device;
    mVideoStream = new camera3_stream_t;
    memset(mVideoStream, 0, sizeof(camera3_stream_t));
    mVideoStream = initStream(CAMERA3_STREAM_OUTPUT, camid, w, h, FLAGS_VIDEO_ENCODER,
            HAL_PIXEL_FORMAT_IMPLEMENTATION_DEFINED, HAL3_DATASPACE_UNKNOWN);
    mVideoConfig = configureStream(CAMERA3_STREAM_CONFIGURATION_NORMAL_MODE, 1);
    mVideoConfig.streams[0] = mVideoStream;

    device_handle->ops->configure_streams(my_test_obj->device, &(mVideoConfig));
    mPipelineDepthVideo = mVideoConfig.streams[0]->max_buffers;
    video_buffer_allocated = mPipelineDepthVideo;
}

void QCameraHAL3VideoTest::constructDefaultRequest(
        hal3_camera_test_obj_t *my_test_obj, int camid)
{
    camera3_device_t *device_handle = my_test_obj->device;
    LOGD("Camera ID : %d",camid);
    mMetaDataPtr[0] = device_handle->ops->construct_default_request_settings(
            my_test_obj->device, CAMERA3_TEMPLATE_VIDEO_RECORD);
    mMetaDataPtr[1] = device_handle->ops->construct_default_request_settings(my_test_obj->device,
            CAMERA3_TEMPLATE_STILL_CAPTURE);
}



void QCameraHAL3VideoTest::captureRequestRepeat(
        hal3_camera_lib_test *my_hal3test_obj, int camid, int testcase)
{
    int num1, num2;
    int binning_mode_changed;
    hal3_camera_test_obj_t *my_test_obj = &(my_hal3test_obj->test_obj);
    camera3_device_t *device_handle = my_test_obj->device;
    if (testcase == MENU_START_VIDEO) {
        if (VideoQueue.empty()) {
            LOGE("no Video buffer for CamID : %d", camid);
        }
        else {
            if (test_case_end == 0) {
                LOGD(" Request Number is : %d ", mRequest.frame_number);
                pthread_mutex_lock(&mCaptureRequestLock);
                num2 = VideoQueue.front();
                VideoQueue.pop_front();
                num1 = mRequest.frame_number;
                binning_mode_changed = get_binning_mode(binning_mode);
                if (num1 < 1) {
                    (mRequest).settings = mMetaDataPtr[0];
                }
                else if(binning_mode_changed == 1) {
                    hal3app_video_settings = mMetaDataPtr[0];
                    hal3app_video_settings.update(QCAMERA3_BINNING_CORRECTION_MODE,
                            &binning_mode, 1);
                    (mRequest).settings = hal3app_video_settings.release();
                }
                else {
                    (mRequest).settings = NULL;
                }
                (mRequest).input_buffer = NULL;
                (mRequest).num_output_buffers = 1;
                mVideoStreamBuffs.stream = mVideoStream;
                mVideoStreamBuffs.status = 0;
                mVideoStreamBuffs.buffer =
                        (const native_handle_t**)&mVideoHandle[num2];
                mVideoStreamBuffs.release_fence = -1;
                mVideoStreamBuffs.acquire_fence = -1;
                (mRequest).output_buffers = &(mVideoStreamBuffs);
                LOGD("Calling HAL3APP repeat capture request %d and %d and free buffer :%d "
                        , num1, num2, VideoQueue.size());
                device_handle->ops->process_capture_request(my_test_obj->device, &(mRequest));
                        (mRequest.frame_number)++;
                pthread_mutex_unlock(&mCaptureRequestLock);
            }
        }
    }
    else {
        snapshot_buffer = mRequest.frame_number;
        (mRequest).settings = mMetaDataPtr[1];
        mSnapshotStreamBuffs = hal3appGetStreamBuffs(mSnapshotStream);
        mSnapshotStreamBuffs.buffer = (const native_handle_t**)&mCaptureHandle;
        mRequest = hal3appGetRequestSettings(&mSnapshotStreamBuffs, 1);
        LOGD("Calling snap HAL3APP repeat capture request repeat %d  ", snapshot_buffer);
        device_handle->ops->process_capture_request(my_test_obj->device, &(mRequest));
        (mRequest.frame_number)++;
    }
}

void QCameraHAL3VideoTest::videoTestEnd(
                    hal3_camera_lib_test *my_hal3test_obj, int camid)
{
    test_case_end = 1;
    hal3_camera_test_obj_t *my_test_obj = &(my_hal3test_obj->test_obj);
    camera3_device_t *device_handle = my_test_obj->device;
    device_handle->ops->flush(my_test_obj->device);
    LOGD("%s Closing Camera %d", __func__, camid);
    ioctl(mVideoMeminfo.ion_fd, ION_IOC_FREE, &mVideoMeminfo.ion_handle);
    close(mVideoMeminfo.ion_fd);
    mVideoMeminfo.ion_fd = -1;
    LOGD("%s Closing thread", __func__);
    thread_exit = 1;
}

void QCameraHAL3VideoTest::vidoeAllocateBuffers(int height, int width, int num)
{
    mVideoHandle[num] = allocateBuffers(width, height, &mVideoMeminfo);
}

void QCameraHAL3VideoTest::snapshotAllocateBuffers(int width, int height)
{
    mCaptureHandle = allocateBuffers(width, height, &mCaptureMemInfo);
}

int QCameraHAL3VideoTest::get_binning_mode(int32_t binning_mode)
{
    static int prev_binning;
    if(binning_mode == prev_binning)
        return 0;
    else {
        ALOGE("setting binning mode in video:%d", binning_mode);
        prev_binning = binning_mode;
        return 1;
    }
}

bool QCameraHAL3VideoTest::videoProcessThreadCreate(
                    hal3_camera_lib_test *handle) {
    if(handle == NULL) {
        LOGD("Camera Hanle is NULL");
    }
    processThreadCreate(this, MENU_START_VIDEO, handle);
    return 1;
}

QCameraHAL3VideoTest::~QCameraHAL3VideoTest()
{

}

}
