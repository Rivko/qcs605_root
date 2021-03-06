#pragma once
// AUTOGENERATED FILE: DO NOT EDIT

#include <stdint.h>
#include "object.h"

// Copyright (c) 2017 Qualcomm Technologies, Inc.  All Rights Reserved.

// Qualcomm Technologies Proprietary and Confidential.

/**
 * @brief
 * Interface to update Output Protection Service with the revoked receiver IDs
 * list retrieved from a signed SRM file
 */

#define IHdcpSrm_OP_updateRevokedIds 0

static inline int32_t
IHdcpSrm_release(Object self)
{
  return Object_invoke(self, Object_OP_release, 0, 0);
}

static inline int32_t
IHdcpSrm_retain(Object self)
{
  return Object_invoke(self, Object_OP_retain, 0, 0);
}

static inline int32_t
IHdcpSrm_updateRevokedIds(Object self, uint16_t version_val, const uint8_t *receiverIdList_ptr, size_t receiverIdList_len)
{
  ObjectArg a[2];
  a[0].b = (ObjectBuf) { &version_val, sizeof(uint16_t) };
  a[1].bi = (ObjectBufIn) { receiverIdList_ptr, receiverIdList_len * sizeof(uint8_t) };

  return Object_invoke(self, IHdcpSrm_OP_updateRevokedIds, a, ObjectCounts_pack(2, 0, 0, 0));
}



