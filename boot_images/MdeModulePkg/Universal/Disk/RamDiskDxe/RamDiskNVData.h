/** @file
  Header file for NV data structure definition.

  Copyright (c) 2016, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef _RAM_DISK_NVDATA_H_
#define _RAM_DISK_NVDATA_H_

#include <Guid/HiiPlatformSetupFormset.h>
#include <Guid/RamDiskHii.h>

#define RAM_DISK_CONFIGURATION_VARSTORE_ID  0x0001

#define MAIN_FORM_ID                        0x1000
#define MAIN_GOTO_FILE_EXPLORER_ID          0x1001
#define MAIN_REMOVE_RD_QUESTION_ID          0x1002
#define MAIN_CHECKBOX_QUESTION_ID_START     0x1003
#define MAIN_LABEL_LIST_START               0x1004
#define MAIN_LABEL_LIST_END                 0x1005

#define CREATE_RAW_RAM_DISK_FORM_ID         0x2000
#define CREATE_RAW_SIZE_QUESTION_ID         0x2001
#define CREATE_RAW_SUBMIT_QUESTION_ID       0x2002
#define CREATE_RAW_DISCARD_QUESTION_ID      0x2003

typedef struct {
  UINT64                          Size;
  //
  // CheckBox status for created RAM disks
  //
  UINT8                           RamDiskList[0];
} RAM_DISK_CONFIGURATION;

#endif
