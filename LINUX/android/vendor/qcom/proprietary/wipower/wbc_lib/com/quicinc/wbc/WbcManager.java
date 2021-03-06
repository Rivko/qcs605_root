/*=========================================================================
  WbcManager.java
  DESCRIPTION
  WiPower Battery Control Interface

  Copyright (c) 2014 Qualcomm Technologies, Inc.  All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.
  =========================================================================*/

package com.quicinc.wbc;

import java.util.HashSet;
import java.util.Set;

import android.os.RemoteException;
import android.os.Binder;
import android.os.Handler;
import android.os.Message;

import android.os.IBinder;
import android.os.ServiceManager;
import android.util.Log;

/**
 * WbcManager is used for communicating with
 * Wipower Battery Control Service (WBC) and HAL.
 * Provides API for getting status from WBC and receiving callback events.
 *
 */
public class WbcManager {
    private final IWbcService mWbcService;
    private static final String TAG = "Wbc-Mgr";

    private final static String WBC_SERVICE_NAME = "wbc_service";

    public interface WbcEventListener {

        /**
         * Callback invoked when there is an event ready from
         * Wipower Batter Control service (WBC).
         *
         * @param what type of WBC event received, e.g., WBC_EVENT_TYPE_CHARGING_REQUIRED_STATUS
         * @param arg1 status associated with the event e.g., WBC_BATTERY_STATUS_CHARGING_REQUIRED
         * @param arg2 unused
         * @see WbcTypes
         */
        void onWbcEventUpdate(int what, int arg1, int arg2);
    }

    private final Set<WbcEventListener> mClientListeners = new HashSet<WbcEventListener>();

    private WbcManager() {
        this.mWbcService = IWbcService.Stub.asInterface(ServiceManager.getService(WBC_SERVICE_NAME));

        if (this.mWbcService == null) {
            Log.w(TAG, "wbc_service not found in ServiceManager!!");
            return;
        }

        try {
            this.mWbcService.register(mListener);
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "Error in registering listener. RemoteException: " + e.getLocalizedMessage());
        }
    }

    /**
     * Provides WbcManager instance for accessing API.
     *
     * @return instance of WbcManager
     */
    public static WbcManager getInstance() {
        return new WbcManager();
    }

    private final IWbcEventListener mListener = new IWbcEventListener.Stub() {
        public void onWbcEventUpdate(int what, int arg1, int arg2) {
            Message msg = mHandler.obtainMessage();
            msg.what = what;
            msg.arg1 = arg1;
            msg.arg2 = arg2;
            mHandler.sendMessage(msg);
        }
    };

    private final Handler mHandler = new Handler() {
        @Override
        public void handleMessage(Message msg) {
            synchronized(mClientListeners) {
                for (WbcEventListener listener : mClientListeners) {
                    listener.onWbcEventUpdate(msg.what, msg.arg1, msg.arg2);
                }
            }
        }
    };

    /**
     * Register WbcEventListener for receiving events
     *
     * @param listener listener to register
     */
    public void register(WbcEventListener listener) {
        if (listener != null) {
            synchronized (mClientListeners) {
                mClientListeners.add(listener);
            }
        }
    }

    /**
     * Unregister a previously registered listener
     *
     * @param listener registered listener
     */
    public void unregister(WbcEventListener listener) {
        if (listener != null) {
            synchronized (mClientListeners) {
                mClientListeners.remove(listener);
            }
        }
    }

    /**
     * {@hide}
     */
    public void echo(int val) {
        if (mWbcService == null) {
            Log.w(TAG, "echo: wbc_service not accessible!");
            return;
        }

        try {
            mWbcService.echo(val);
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "echo error. RemoteException: " + e.getLocalizedMessage());
        }
    }

    /**
     * {@hide}
     */
    public int getWipowerCapable() {
        int ret = -1;

        if (mWbcService == null) {
            Log.w(TAG, "getWipowerCapable: wbc_service not accessible!");
            return ret;
        }

        try {
            ret = mWbcService.getWipowerCapable();
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "getWipowerCapable error. RemoteException: " + e.getLocalizedMessage());
        }

        return ret;
    }

    /**
     * {@hide}
     */
    public int getPtuPresence() {
        int ret = -1;

        if (mWbcService == null) {
            Log.w(TAG, "getPtuPresence: wbc_service not accessible!");
            return ret;
        }

        try {
            ret = mWbcService.getPtuPresence();
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "getPtuPresence error. RemoteException: " + e.getLocalizedMessage());
        }

        return ret;
    }

    /**
     * {@hide}
     */
    public int getWipowerCharging() {
        int ret = -1;

        if (mWbcService == null) {
            Log.w(TAG, "getWipowerCharging: wbc_service not accessible!");
            return ret;
        }

        try {
            ret = mWbcService.getWipowerCharging();
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "getWipowerCharging error. RemoteException: " + e.getLocalizedMessage());
        }

        return ret;
    }


    /**
     * Get the status of whether the Battery has completed charging or not
     *
     * @return status if charge complete or not
     * @see WbcTypes
     */
    public int getChargeComplete() {
        int ret = -1;

        if (mWbcService == null) {
            Log.w(TAG, "getChargeComplete: wbc_service not accessible!");
            return ret;
        }

        try {
            ret = mWbcService.getChargeComplete();
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "getChargeComplete failed. RemoteException: " + e.getLocalizedMessage());
        }

        return ret;
    }

    /**
     * Get the status whether USB charging is occuring or not.
     *
     * @return status if USB charging is occuring or not.
     * @see WbcTypes
     */ 
    public int getUSBChargingPresent() {
        int ret = -1;

        if (mWbcService == null) {
            Log.w(TAG, "getUSBChargingPresent: wbc_service not accessible!");
            return ret;
        }

        try {
            ret = mWbcService.getUSBChargingPresent();
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "getUSBChargingPresent failed. RemoteException: " + e.getLocalizedMessage());
        }

        return ret;
    }

    /**
     * Get the status whether the Battery is over-heating.
     *
     * @return status if battery is over-heating or not.
     * @see WbcTypes
     */
    public int getBatteryOverheat() {
        int ret = -1;

        if (mWbcService == null) {
            Log.w(TAG, "getBatteryOverheat: wbc_service not accessible!");
            return ret;
        }

        try {
            ret = mWbcService.getBatteryOverheat();
        } catch (android.os.RemoteException e) {
            Log.w(TAG, "getBatteryOverheat failed. RemoteException: " + e.getLocalizedMessage());
        }

        return ret;
    }
}
