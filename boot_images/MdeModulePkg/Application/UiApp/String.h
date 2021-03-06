/** @file
  String support

Copyright (c) 2004 - 2015, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef _STRING_H_
#define _STRING_H_

extern EFI_HII_HANDLE gStringPackHandle;

//
// This is the VFR compiler generated header file which defines the
// string identifiers.
//

extern UINT8  BdsDxeStrings[];

//
// String Definition Guid for BDS Platform
//
#define EFI_BDS_PLATFORM_GUID \
  { \
    0x7777E939, 0xD57E, 0x4DCB, 0xA0, 0x8E, 0x64, 0xD7, 0x98, 0x57, 0x1E, 0x0F \
  }

/**
  Get string by string id from HII Interface


  @param Id              String ID.

  @retval  CHAR16 *  String from ID.
  @retval  NULL      If error occurs.

**/
CHAR16 *
GetStringById (
  IN  EFI_STRING_ID   Id
  );

/**
  Initialize HII global accessor for string support.

**/
VOID
InitializeStringSupport (
  VOID
  );

/**
  Remove the string package.

**/
VOID
UninitializeStringSupport (
  VOID
  );

#endif // _STRING_H_
