/******************************************************************************
#  Copyright (c) 2013, 2017 Qualcomm Technologies, Inc.
#  All Rights Reserved.
#  Confidential and Proprietary - Qualcomm Technologies, Inc.
#******************************************************************************/
/***************************************************************************************************
    @file
    cri_core.h

    @brief
    Supports utility functions for dealing with control events trigerred by HLOS interface or
    CRI.

***************************************************************************************************/

#ifndef CONTROL_CORE
#define CONTROL_CORE

#include "utils_common.h"

typedef struct control_core_control_event_data_type
{
    unsigned long event_id;
    void *data;
    size_t data_len;
}control_core_control_event_data_type;


#endif
