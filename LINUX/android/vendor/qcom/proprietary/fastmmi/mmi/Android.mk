LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= mmi
LOCAL_SRC_FILES:= mmi.cpp \
                  mmi_handle.cpp \
                  module.cpp \
                  module_local.cpp \
                  input.cpp \
                  draw.cpp \
                  config.cpp \
                  func_map.cpp \
                  input_listener.cpp \
                  input_listener_touch.cpp \
                  input_listener_key.cpp \
                  controller.cpp \
                  mmi_cfg.cpp

LOCAL_C_INCLUDES += external/libcxx/include \
                    $(TARGET_OUT_HEADERS)/common/inc \
                    $(QC_PROP_ROOT)/fastmmi/libmmi \
                    external/libxml2/include \
                    external/icu/icu4c/source/common \
                    external/freetype/include \
                    external/skia/include/core \
                    frameworks/native/include \
                    frameworks/base/libs/androidfw/include \
                    frameworks/native/libs/nativewindow/include \
                    $(QC_PROP_ROOT)/diag/include

LOCAL_CFLAGS := -Wall -Wno-unused-parameter

LOCAL_SHARED_LIBRARIES := libc libcutils libutils liblog libmmi libxml2 libft2 libicuuc libui libbinder libgui libskia libc++ libc_malloc_debug

LOCAL_C_INCLUDES += $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr/include
ifeq ($(TARGET_COMPILE_WITH_MSM_KERNEL),true)
LOCAL_ADDITIONAL_DEPENDENCIES := $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr
endif

include $(BUILD_EXECUTABLE)

#include $(CLEAR_VARS)

#LOCAL_MODULE:= mmi_agent
#LOCAL_MULTILIB := both
#LOCAL_MODULE_STEM_32 := mmi_agent32
#LOCAL_MODULE_STEM_64 := mmi_agent64

#LOCAL_SRC_FILES:= agent_main.cpp \
#                  agent_handle.cpp

#LOCAL_C_INCLUDES += external/libcxx/include \
#                    $(QC_PROP_ROOT)/fastmmi/libmmi
#LOCAL_CFLAGS := -Wall -Wno-unused-parameter

#LOCAL_SHARED_LIBRARIES := libdl libcutils liblog libmmi libc++ libc_malloc_debug

#LOCAL_C_INCLUDES += $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr/include
#ifeq ($(TARGET_COMPILE_WITH_MSM_KERNEL),true)
#LOCAL_ADDITIONAL_DEPENDENCIES := $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr
#endif
#include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)

LOCAL_MODULE:= mmi_diag
LOCAL_SRC_FILES:= diag_main.cpp \
                  diag_handle.cpp

LOCAL_C_INCLUDES += $(QC_PROP_ROOT)/fastmmi/libmmi \
                    external/libcxx/include \
                    $(QC_PROP_ROOT)/diag/include \
                    $(QC_PROP_ROOT)/diag/src/ \
                    $(TARGET_OUT_HEADERS)/common/inc

LOCAL_CFLAGS := -Wall -Wno-unused-parameter

LOCAL_SHARED_LIBRARIES := libcutils liblog libmmi libdiag libc++ libc_malloc_debug

LOCAL_C_INCLUDES += $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr/include
ifeq ($(TARGET_COMPILE_WITH_MSM_KERNEL),true)
LOCAL_ADDITIONAL_DEPENDENCIES := $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr
endif

include $(BUILD_EXECUTABLE)

#include $(CLEAR_VARS)
#LOCAL_MODULE:= mmi_debug
#LOCAL_SRC_FILES:= debug_main.cpp

#LOCAL_C_INCLUDES += external/libcxx/include \
#                    $(QC_PROP_ROOT)/fastmmi/libmmi

#LOCAL_CFLAGS := -Wall -Wno-unused-parameter

#LOCAL_SHARED_LIBRARIES := libdl libcutils liblog libmmi libc++

#LOCAL_C_INCLUDES += $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr/include
#ifeq ($(TARGET_COMPILE_WITH_MSM_KERNEL),true)
#LOCAL_ADDITIONAL_DEPENDENCIES := $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr
#endif

#include $(BUILD_EXECUTABLE)
