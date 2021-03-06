LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := port_bridge.c

LOCAL_MODULE:= port-bridge
LOCAL_MODULE_TAGS := optional

LOCAL_SHARED_LIBRARIES := libutils
LOCAL_SHARED_LIBRARIES += libcutils
LOCAL_SHARED_LIBRARIES += libdsutils

LOCAL_C_INCLUDES := $(TARGET_OUT_HEADERS)/common/inc/
LOCAL_C_INCLUDES += $(TARGET_OUT_HEADERS)/data/inc/

LOCAL_CFLAGS += -DFEATURE_PB_LINUX_ANDROID
#LOCAL_CFLAGS += -DPORT_BRIDGE_TEST

LOCAL_MODULE_OWNER := qti
LOCAL_PROPRIETARY_MODULE := true

include $(BUILD_EXECUTABLE)
