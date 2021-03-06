/******************************************************************************
#  Copyright (c) 2013, 2017 Qualcomm Technologies, Inc.
#  All Rights Reserved.
#  Confidential and Proprietary - Qualcomm Technologies, Inc.
#******************************************************************************/
/***************************************************************************************************
    @file
    utils_standard.h

    @brief
    Exports standard utilities.

***************************************************************************************************/

#ifndef UTILS_STANDARD
#define UTILS_STANDARD

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <errno.h>
#include <sys/time.h>
#include <unistd.h>
#include <fcntl.h>


#define ESUCCESS 0
#define NIL 0
#define FALSE 0
#define TRUE 1
#define UTIL_ARR_SIZE( arr ) ( sizeof( ( arr ) ) / sizeof( ( arr[ 0 ] ) ) )

#endif

