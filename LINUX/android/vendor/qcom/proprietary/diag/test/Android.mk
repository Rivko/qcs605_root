LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

libdiag_includes:= \
        $(LOCAL_PATH)/../include \
	$(LOCAL_PATH)/../src \

LOCAL_C_INCLUDES:= $(libdiag_includes)
LOCAL_C_INCLUDES += $(TARGET_OUT_HEADERS)/common/inc

LOCAL_SRC_FILES:= \
	test_diag.c \

commonSharedLibraries :=libdiag \
	
LOCAL_MODULE:= test_diag
LOCAL_MODULE_TAGS := optional debug
LOCAL_SHARED_LIBRARIES := $(commonSharedLibraries)

LOCAL_MODULE_OWNER := qti
LOCAL_PROPRIETARY_MODULE := true
include $(BUILD_EXECUTABLE)

