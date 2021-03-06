/*=========================================================================
  wbc_jni.cpp
  DESCRIPTION
  JNI library for interfacing with WBC HAL

  Copyright (c) 2014 Qualcomm Technologies, Inc.  All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.
  =========================================================================*/

/*=========================================================================
  INCLUDES
  =========================================================================*/
#include <stdlib.h>
#include <jni.h>
#include <pthread.h>
#include <unistd.h>
#include <dlfcn.h>
#include <cutils/properties.h>
#include <wbc_hal_interface.h>

/*=========================================================================
  DECLARATIONS AND DEFINITIONS
  =========================================================================*/
#define LOG_TAG "wbc_jni"
#include <cutils/log.h>

static const char * g_className = "com/quicinc/wbcservice/WipowerBatteryControl";

static JavaVM* g_javaVM;
static jclass  g_classWbc;
static jobject g_objectWbc;
static jmethodID g_methodSendEventFromNative;
static wbc_lib_interface_t * g_wbcModule = NULL;
static bool g_dbg = false;

/*=========================================================================
  FUNCTION DEFINTIONS
  =========================================================================*/
static void getCallbackArgsFromEvent(wbc_event_t *pEvent, int *pWhat, int *pArg1, int *pArg2) {
    if (pEvent == NULL) {
        return;
    }

    *pWhat = pEvent->event_type;

    switch (pEvent->event_type) {
    case WBC_EVENT_TYPE_WIPOWER_CAPABLE_STATUS:
        *pArg1 = pEvent->u.wipower_capable;
        break;
    case WBC_EVENT_TYPE_PTU_PRESENCE_STATUS:
        *pArg1 = pEvent->u.ptu_presence;
        break;
    case WBC_EVENT_TYPE_WIPOWER_CHARGING_ACTIVE_STATUS:
        *pArg1 = pEvent->u.wipower_charging;
        break;
    case WBC_EVENT_TYPE_CHARGE_COMPLETE:
        *pArg1 = pEvent->u.chg_complete;
        break;
    case WBC_EVENT_TYPE_USB_CHARGING_PRESENT:
        *pArg1 = pEvent->u.usb_charging_present;
        break;
    case WBC_EVENT_TYPE_BATTERY_OVERHEAT:
        *pArg1 = pEvent->u.battery_overheat;
        break;
    default:
        ALOGW("Unknown wipower callback event: %d rcvd", pEvent->event_type);
        *pArg1 = 0;
        break;
    }

    *pArg2 = 0;
}

static void wbcHalCallbackFunc(wbc_event_t * pEvent)  {
    if (g_dbg) ALOGD("wbcHallCallbackFunc called ...");

    if (pEvent == NULL) {
        ALOGE("NULL wipower event ptr!!");
        return;
    }

    //attach thread
    JNIEnv* jniEnv = NULL;
    bool isAttached = false;
    jint ret = g_javaVM->GetEnv((void**) &jniEnv, JNI_VERSION_1_6);
    if (ret == JNI_EDETACHED) {
        ret = g_javaVM->AttachCurrentThread(&jniEnv, NULL);
        if (ret < 0) {
            ALOGE( "Thread Attach failed!");
            return;
        }
        isAttached = true;
    }

    //find and invoke java method
    //  g_methodSendEventFromNative = jniEnv->GetStaticMethodID(g_classWbc, "sendEventFromNative", "(II)V");
    g_methodSendEventFromNative = jniEnv->GetMethodID(g_classWbc, "sendEventFromNative", "(III)V");
    if (g_methodSendEventFromNative == NULL) {
        ALOGE( "GetMethod failed");
        return;
    }

    //jniEnv->CallStaticVoidMethod(g_classWbc, g_methodSendEventFromNative, 100 + i, 1000 + i);
    int what = 0;
    int arg1 = 0;
    int arg2 = 0;
    getCallbackArgsFromEvent(pEvent, &what, &arg1, &arg2);

    jniEnv->CallVoidMethod(g_objectWbc, g_methodSendEventFromNative, what, arg1, arg2);

    //detach thread
    if (isAttached) {
        g_javaVM->DetachCurrentThread();
    }

    return;
}


static void nativeInit(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "nativeInit called\n");

    void* wbc_lib_handler = dlopen("wbc_hal.default.so", RTLD_NOW);
    if (!wbc_lib_handler) {
        ALOGE( "Error open wbc_hal\n");
        return;
    }

    g_wbcModule = (wbc_lib_interface_t *)dlsym(wbc_lib_handler, "WBC_LIB_INTERFACE");
    if (!g_wbcModule) {
        ALOGE( "Failed obtain the address of wbc_hal\n");
        return;
    }

    g_wbcModule->wbc_init(wbcHalCallbackFunc);

    g_objectWbc = env->NewGlobalRef(object);
    if (g_objectWbc == NULL) {
        ALOGE( "Global object reference failed");
    }
}

static void nativeFinish(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "nativeFinish called\n");

    // todo: delete global obj ref and cleanup

    if (g_wbcModule != NULL) {
        g_wbcModule->wbc_finish();
    }
}

static jint getWipowerCapable(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "getWipowerCapable called\n");

    if (g_wbcModule != NULL) {
        return g_wbcModule->wbc_get_wipower_capable();
    }

    return -1;
}

static jint getPtuPresence(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "getPtuPresence called\n");

    if (g_wbcModule != NULL) {
        return g_wbcModule->wbc_get_ptu_presence();
    }

    return -1;
}

static jint getWipowerCharging(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "getWipowerCharging called\n");

    if (g_wbcModule != NULL) {
        return g_wbcModule->wbc_get_wipower_charging();
    }

    return -1;
}

static jint getChargeComplete(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "getChargeComplete called\n");

    if (g_wbcModule != NULL) {
        return g_wbcModule->wbc_get_chg_complete();
    }

    return -1;
}

static jint getUSBChargingPresent(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "get_usb_charging_present called\n");

    if (g_wbcModule != NULL) {
        return g_wbcModule->wbc_get_usb_charging_present();
    }

    return -1;
}

static jint getBatteryOverheat(JNIEnv *env, jobject object) {
    if (g_dbg) ALOGD( "get_battery_overheat\n");

    if (g_wbcModule != NULL) {
        return g_wbcModule->wbc_get_battery_overheat();
    }

    return -1;
}

extern "C" void wbc_hal_echo(int value);
static void native_echo(JNIEnv *env, jobject object, jint value) {
    if (g_dbg) ALOGD( "echo called, value: %d\n", value);

    if (g_wbcModule != NULL) {
        return g_wbcModule->wbc_hal_echo(value);
    }
}

static JNINativeMethod g_methodTable[] = {
    { "echo", "(I)V", (void *) native_echo },
    { "init", "()V", (void *) nativeInit },
    { "finish", "()V", (void *) nativeFinish },
    { "getWipowerCapable", "()I", (void *) getWipowerCapable },
    { "getPtuPresence", "()I", (void *) getPtuPresence },
    { "getWipowerCharging", "()I", (void *) getWipowerCharging },
    { "getChargeComplete", "()I", (void *) getChargeComplete },
    { "getUSBChargingPresent", "()I", (void *) getUSBChargingPresent },
    { "getBatteryOverheat", "()I", (void *) getBatteryOverheat },
};

static const int g_methodTableSize = sizeof(g_methodTable)/sizeof(g_methodTable[0]);

extern "C" jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = NULL;
    char logLevel[PROPERTY_VALUE_MAX] = "";

    g_javaVM = vm;

    if (property_get("persist.wbc.log_level", logLevel, "0")) {
        g_dbg = atoi(logLevel);
    }

    if (vm->GetEnv((void **) &env, JNI_VERSION_1_6) == JNI_OK) {
        jclass clazz = env->FindClass(g_className);
        if (clazz) {
            if (g_dbg) ALOGD( "register natives...\n");
            jint ret = env->RegisterNatives(clazz, g_methodTable, g_methodTableSize);

            g_classWbc = (jclass) env->NewGlobalRef(clazz);

            env->DeleteLocalRef(clazz);
            return ret == 0 ? JNI_VERSION_1_6 : JNI_ERR;
        }
    }

    return JNI_ERR;
}

/*=========================================================================
  END OF FILE
  =========================================================================*/
