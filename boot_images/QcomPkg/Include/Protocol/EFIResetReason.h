/**
  @file  EFIResetReason.h
  @brief ResetReason EFI protocol interface.
*/
/*=============================================================================
  Copyright (c) 2016 Qualcomm Technologies, Incorporated.
  All rights reserved.
  Qualcomm Technologies, Confidential and Proprietary.
=============================================================================*/

#ifndef __EFIRESETREASON_H__
#define __EFIRESETREASON_H__

/** @cond */
typedef struct _EFI_RESETREASON_PROTOCOL EFI_RESETREASON_PROTOCOL;
/** @endcond */

/** @addtogroup efi_resetReason_constants
@{ */
/**
  Protocol version.
*/
#define EFI_RESETREASON_PROTOCOL_REVISION 0x0000000000010002
/** @} */ /* end_addtogroup efi_resetReason_constants */

/*  Protocol GUID definition */
/** @ingroup efi_resetReason_protocol */
#define EFI_RESETREASON_PROTOCOL_GUID \
   { 0xA022155A, 0x4828, 0x4535, { 0xA4, 0x99, {0x11, 0xF1, 0x52, 0x40, 0xB9, 0x1B} } }

  
#define STR_RESET_PARAM              L"RESET_PARAM"
#define STR_RESET_UNKNOWN            L"UNKNOWN"
#define STR_RESET_PLAT_SPECIFIC_EDL  L"EDL"

/*
 *  Sample call to ResetSystem and the ResetReasonData returned using this protocol
 *
 *  gRT->ResetSystem ([EfiResetCold|EfiResetWarm|EfiResetShutdown],
 *                    [EFI_NO_MAPPING|EFI_INVALID_PARAMETER],
 *                    DataSize,  // total bytes of ResetData ResetReasonString + ResetReasonData
 *                    ResetData  // NULL terminated CHAR16 String ResetReasonString + 1 Byte ResetReasonData 
 *                   )
 */

/** @cond */
/**
  External reference to the RESETREASON Protocol GUID defined
  in the .dec file.
*/
extern EFI_GUID gEfiResetReasonProtocolGuid;
/** @endcond */

/** @} */ /* end_addtogroup efi_resetReason_data_types */

/*==============================================================================

                             API IMPLEMENTATION

==============================================================================*/
/* ============================================================================
**  Function : EFI_ResetReason_GetResetReason
** ============================================================================
*/
/** @ingroup efi_resetReason_getResetReason
  @par Summary
  Gets the reset reason

  @param[in]   This                  Pointer to the EFI_RESETREASON_PROTOCOL instance.
  @param[in out]  ResetReason        Pointer to a UINT32 passed by the caller that
                                     will be populated by the driver.
  @param[in out]  ResetReasonString  Pointer to a CHAR16 buffer, populated by driver
  @param[in out]  ResetReasonStrLen  Pointer to a UINT32 passed by the caller that
                                     will be populated by the driver with length of reset
                                     reason string.

  @return
  EFI_SUCCESS           -- Function completed successfully. \n
  EFI_INVALID_PARAMETER -- Input parameter is INVALID. \n
  EFI_BUFFER_TOO_SMALL  -- Input ResetReasonString buffer is not long enough,
                           Length will be returned in ResetReasonStrLen
*/
typedef
EFI_STATUS
(EFIAPI *EFI_RESETREASON_GETRESETREASON)(
   IN EFI_RESETREASON_PROTOCOL *This,
   IN OUT UINT32               *ResetReason,
   IN OUT CHAR16               *ResetReasonString  OPTIONAL,
   IN OUT UINT32               *ResetReasonStrLen  OPTIONAL
   );

/* ============================================================================
**  Function : EFI_ResetReason_ClearResetReason
** ============================================================================
*/
/** @ingroup efi_resetReason_clearResetReason
  @par Summary
  Clears the reset reason

  @param[in]   This                  Pointer to the EFI_RESETREASON_PROTOCOL instance.

  @return
  EFI_SUCCESS           -- Function completed successfully. \n
  EFI_INVALID_PARAMETER -- Input parameter is INVALID. \n
  EFI_DEVICE_ERROR      -- Unable to store reset reason \n
*/
typedef
EFI_STATUS
(EFIAPI *EFI_RESETREASON_CLEARRESETREASON)(
   IN EFI_RESETREASON_PROTOCOL *This
   );

/*===========================================================================
  PROTOCOL INTERFACE
===========================================================================*/
/** @ingroup efi_resetReason_protocol
  @par Summary
  Reset Reason Information Protocol interface.

  @par Parameters
*/
struct _EFI_RESETREASON_PROTOCOL {
   UINT64                                  Revision;
   EFI_RESETREASON_GETRESETREASON          GetResetReason;
   EFI_RESETREASON_CLEARRESETREASON        ClearResetReason;
};

#endif /* __EFIRESETREASON_H__ */

