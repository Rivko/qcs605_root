#ifndef __ABTIMEOUT_HWIO_H__
#define __ABTIMEOUT_HWIO_H__
/*
===========================================================================
*/
/**
  @file ABTimeout_HWIO.h
  @brief Auto-generated HWIO interface include file.

  Reference chip release:
    SDM670 (Warlock) [napaliq_v1.1_p3q2r110_MTO]
 
  This file contains HWIO register definitions for the following modules:
    LPASS_AHBI_TIME
    LPASS_AHBL_TIME
    TCSR_TCSR_REGS
    LPASS_CSR

  'Include' filters applied: TIMEBASE_CTL[LPASS_CSR] 

  Generation parameters: 
  { u'filename': u'ABTimeout_HWIO.h',
    u'header': u'#include "msmhwiobase.h"',
    u'module-filter-exclude': { },
    u'module-filter-include': { u'LPASS_CSR': [u'TIMEBASE_CTL']},
    u'modules': [ u'LPASS_AHBI_TIME',
                  u'LPASS_AHBL_TIME',
                  u'TCSR_TCSR_REGS',
                  u'LPASS_CSR']}
*/
/*
  ===========================================================================

  Copyright (c) 2018 Qualcomm Technologies, Inc.
  All Rights Reserved.
  Confidential and Proprietary - Qualcomm Technologies, Inc.

  Export of this technology or software is regulated by the U.S. Government.
  Diversion contrary to U.S. law prohibited.

  All ideas, data and information contained in or disclosed by
  this document are confidential and proprietary information of
  Qualcomm Technologies, Inc. and all rights therein are expressly reserved.
  By accepting this material the recipient agrees that this material
  and the information contained therein are held in confidence and in
  trust and will not be used, copied, reproduced in whole or in part,
  nor its contents revealed in any manner to others without the express
  written permission of Qualcomm Technologies, Inc.

  ===========================================================================

  $Header: //components/rel/core.qdsp6/2.1/settings/systemdrivers/icb/config/adsp/sdm670/ABTimeout_HWIO.h#2 $
  $DateTime: 2018/04/06 00:39:57 $
  $Author: pwbldsvc $

  ===========================================================================
*/

#include "msmhwiobase.h"

/*----------------------------------------------------------------------------
 * MODULE: LPASS_AHBI_TIME
 *--------------------------------------------------------------------------*/

#define LPASS_AHBI_TIME_REG_BASE                                 (LPASS_BASE      + 0x00cf6000)

#define HWIO_LPASS_AHBI_ABT_HW_VERSION_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x00000000)
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_RMSK                      0xffffffff
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_HW_VERSION_ADDR, HWIO_LPASS_AHBI_ABT_HW_VERSION_RMSK)
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_HW_VERSION_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_MAJOR_BMSK                0xf0000000
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_MAJOR_SHFT                      0x1c
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_MINOR_BMSK                 0xfff0000
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_MINOR_SHFT                      0x10
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_STEP_BMSK                     0xffff
#define HWIO_LPASS_AHBI_ABT_HW_VERSION_STEP_SHFT                        0x0

#define HWIO_LPASS_AHBI_ABT_INST_ID_ADDR                         (LPASS_AHBI_TIME_REG_BASE      + 0x00000004)
#define HWIO_LPASS_AHBI_ABT_INST_ID_RMSK                         0xffffffff
#define HWIO_LPASS_AHBI_ABT_INST_ID_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_INST_ID_ADDR, HWIO_LPASS_AHBI_ABT_INST_ID_RMSK)
#define HWIO_LPASS_AHBI_ABT_INST_ID_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_INST_ID_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_INST_ID_OUT(v)      \
        out_dword(HWIO_LPASS_AHBI_ABT_INST_ID_ADDR,v)
#define HWIO_LPASS_AHBI_ABT_INST_ID_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBI_ABT_INST_ID_ADDR,m,v,HWIO_LPASS_AHBI_ABT_INST_ID_IN)
#define HWIO_LPASS_AHBI_ABT_INST_ID_INSTID_BMSK                  0xffffffff
#define HWIO_LPASS_AHBI_ABT_INST_ID_INSTID_SHFT                         0x0

#define HWIO_LPASS_AHBI_ABT_NUM_SLAVES_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x00000008)
#define HWIO_LPASS_AHBI_ABT_NUM_SLAVES_RMSK                            0x3f
#define HWIO_LPASS_AHBI_ABT_NUM_SLAVES_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_NUM_SLAVES_ADDR, HWIO_LPASS_AHBI_ABT_NUM_SLAVES_RMSK)
#define HWIO_LPASS_AHBI_ABT_NUM_SLAVES_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_NUM_SLAVES_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_NUM_SLAVES_NUMSLAVES_BMSK                  0x3f
#define HWIO_LPASS_AHBI_ABT_NUM_SLAVES_NUMSLAVES_SHFT                   0x0

#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_ADDR                   (LPASS_AHBI_TIME_REG_BASE      + 0x0000000c)
#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_RMSK                         0xff
#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_ADDR, HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_RMSK)
#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_OUT(v)      \
        out_dword(HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_ADDR,v)
#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_ADDR,m,v,HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_IN)
#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_LOADVAL_BMSK                 0xff
#define HWIO_LPASS_AHBI_ABT_TIMER_LOADVAL_LOADVAL_SHFT                  0x0

#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x00000010)
#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_RMSK                             0x1
#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_TIMER_MODE_ADDR, HWIO_LPASS_AHBI_ABT_TIMER_MODE_RMSK)
#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_TIMER_MODE_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_OUT(v)      \
        out_dword(HWIO_LPASS_AHBI_ABT_TIMER_MODE_ADDR,v)
#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBI_ABT_TIMER_MODE_ADDR,m,v,HWIO_LPASS_AHBI_ABT_TIMER_MODE_IN)
#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_MODE_BMSK                        0x1
#define HWIO_LPASS_AHBI_ABT_TIMER_MODE_MODE_SHFT                        0x0

#define HWIO_LPASS_AHBI_ABT_INTR_STATUS_ADDR                     (LPASS_AHBI_TIME_REG_BASE      + 0x00000014)
#define HWIO_LPASS_AHBI_ABT_INTR_STATUS_RMSK                            0x1
#define HWIO_LPASS_AHBI_ABT_INTR_STATUS_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_INTR_STATUS_ADDR, HWIO_LPASS_AHBI_ABT_INTR_STATUS_RMSK)
#define HWIO_LPASS_AHBI_ABT_INTR_STATUS_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_INTR_STATUS_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_INTR_STATUS_INTRSTATUS_BMSK                 0x1
#define HWIO_LPASS_AHBI_ABT_INTR_STATUS_INTRSTATUS_SHFT                 0x0

#define HWIO_LPASS_AHBI_ABT_INTR_CLEAR_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x00000018)
#define HWIO_LPASS_AHBI_ABT_INTR_CLEAR_RMSK                             0x1
#define HWIO_LPASS_AHBI_ABT_INTR_CLEAR_OUT(v)      \
        out_dword(HWIO_LPASS_AHBI_ABT_INTR_CLEAR_ADDR,v)
#define HWIO_LPASS_AHBI_ABT_INTR_CLEAR_INTRCLEAR_BMSK                   0x1
#define HWIO_LPASS_AHBI_ABT_INTR_CLEAR_INTRCLEAR_SHFT                   0x0

#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_ADDR                     (LPASS_AHBI_TIME_REG_BASE      + 0x0000001c)
#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_RMSK                            0x1
#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_INTR_ENABLE_ADDR, HWIO_LPASS_AHBI_ABT_INTR_ENABLE_RMSK)
#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_INTR_ENABLE_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_LPASS_AHBI_ABT_INTR_ENABLE_ADDR,v)
#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBI_ABT_INTR_ENABLE_ADDR,m,v,HWIO_LPASS_AHBI_ABT_INTR_ENABLE_IN)
#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_INTRENABLE_BMSK                 0x1
#define HWIO_LPASS_AHBI_ABT_INTR_ENABLE_INTRENABLE_SHFT                 0x0

#define HWIO_LPASS_AHBI_ABT_SYND_VALID_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x00000020)
#define HWIO_LPASS_AHBI_ABT_SYND_VALID_RMSK                             0x1
#define HWIO_LPASS_AHBI_ABT_SYND_VALID_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_VALID_ADDR, HWIO_LPASS_AHBI_ABT_SYND_VALID_RMSK)
#define HWIO_LPASS_AHBI_ABT_SYND_VALID_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_VALID_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_SYND_VALID_SYNDVALID_BMSK                   0x1
#define HWIO_LPASS_AHBI_ABT_SYND_VALID_SYNDVALID_SHFT                   0x0

#define HWIO_LPASS_AHBI_ABT_SYND_CLEAR_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x00000024)
#define HWIO_LPASS_AHBI_ABT_SYND_CLEAR_RMSK                             0x1
#define HWIO_LPASS_AHBI_ABT_SYND_CLEAR_OUT(v)      \
        out_dword(HWIO_LPASS_AHBI_ABT_SYND_CLEAR_ADDR,v)
#define HWIO_LPASS_AHBI_ABT_SYND_CLEAR_SYNDCLEAR_BMSK                   0x1
#define HWIO_LPASS_AHBI_ABT_SYND_CLEAR_SYNDCLEAR_SHFT                   0x0

#define HWIO_LPASS_AHBI_ABT_SYND_ID_ADDR                         (LPASS_AHBI_TIME_REG_BASE      + 0x00000028)
#define HWIO_LPASS_AHBI_ABT_SYND_ID_RMSK                             0xffff
#define HWIO_LPASS_AHBI_ABT_SYND_ID_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_ID_ADDR, HWIO_LPASS_AHBI_ABT_SYND_ID_RMSK)
#define HWIO_LPASS_AHBI_ABT_SYND_ID_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_ID_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_SYND_ID_BID_BMSK                         0xe000
#define HWIO_LPASS_AHBI_ABT_SYND_ID_BID_SHFT                            0xd
#define HWIO_LPASS_AHBI_ABT_SYND_ID_PID_BMSK                         0x1f00
#define HWIO_LPASS_AHBI_ABT_SYND_ID_PID_SHFT                            0x8
#define HWIO_LPASS_AHBI_ABT_SYND_ID_MID_BMSK                           0xff
#define HWIO_LPASS_AHBI_ABT_SYND_ID_MID_SHFT                            0x0

#define HWIO_LPASS_AHBI_ABT_SYND_ADDR0_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x0000002c)
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR0_RMSK                      0xffffffff
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR0_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_ADDR0_ADDR, HWIO_LPASS_AHBI_ABT_SYND_ADDR0_RMSK)
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR0_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_ADDR0_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR0_SYNDADDR0_BMSK            0xffffffff
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR0_SYNDADDR0_SHFT                   0x0

#define HWIO_LPASS_AHBI_ABT_SYND_ADDR1_ADDR                      (LPASS_AHBI_TIME_REG_BASE      + 0x00000030)
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR1_RMSK                      0xffffffff
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR1_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_ADDR1_ADDR, HWIO_LPASS_AHBI_ABT_SYND_ADDR1_RMSK)
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR1_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_ADDR1_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR1_SYNDADDR1_BMSK            0xffffffff
#define HWIO_LPASS_AHBI_ABT_SYND_ADDR1_SYNDADDR1_SHFT                   0x0

#define HWIO_LPASS_AHBI_ABT_SYND_HREADY_ADDR                     (LPASS_AHBI_TIME_REG_BASE      + 0x00000034)
#define HWIO_LPASS_AHBI_ABT_SYND_HREADY_RMSK                     0xffffffff
#define HWIO_LPASS_AHBI_ABT_SYND_HREADY_IN          \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_HREADY_ADDR, HWIO_LPASS_AHBI_ABT_SYND_HREADY_RMSK)
#define HWIO_LPASS_AHBI_ABT_SYND_HREADY_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBI_ABT_SYND_HREADY_ADDR, m)
#define HWIO_LPASS_AHBI_ABT_SYND_HREADY_SYNDHREADY_BMSK          0xffffffff
#define HWIO_LPASS_AHBI_ABT_SYND_HREADY_SYNDHREADY_SHFT                 0x0

/*----------------------------------------------------------------------------
 * MODULE: LPASS_AHBL_TIME
 *--------------------------------------------------------------------------*/

#define LPASS_AHBL_TIME_REG_BASE                                 (LPASS_BASE      + 0x00d43000)

#define HWIO_LPASS_AHBL_ABT_HW_VERSION_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x00000000)
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_RMSK                      0xffffffff
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_HW_VERSION_ADDR, HWIO_LPASS_AHBL_ABT_HW_VERSION_RMSK)
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_HW_VERSION_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_MAJOR_BMSK                0xf0000000
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_MAJOR_SHFT                      0x1c
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_MINOR_BMSK                 0xfff0000
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_MINOR_SHFT                      0x10
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_STEP_BMSK                     0xffff
#define HWIO_LPASS_AHBL_ABT_HW_VERSION_STEP_SHFT                        0x0

#define HWIO_LPASS_AHBL_ABT_INST_ID_ADDR                         (LPASS_AHBL_TIME_REG_BASE      + 0x00000004)
#define HWIO_LPASS_AHBL_ABT_INST_ID_RMSK                         0xffffffff
#define HWIO_LPASS_AHBL_ABT_INST_ID_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_INST_ID_ADDR, HWIO_LPASS_AHBL_ABT_INST_ID_RMSK)
#define HWIO_LPASS_AHBL_ABT_INST_ID_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_INST_ID_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_INST_ID_OUT(v)      \
        out_dword(HWIO_LPASS_AHBL_ABT_INST_ID_ADDR,v)
#define HWIO_LPASS_AHBL_ABT_INST_ID_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBL_ABT_INST_ID_ADDR,m,v,HWIO_LPASS_AHBL_ABT_INST_ID_IN)
#define HWIO_LPASS_AHBL_ABT_INST_ID_INSTID_BMSK                  0xffffffff
#define HWIO_LPASS_AHBL_ABT_INST_ID_INSTID_SHFT                         0x0

#define HWIO_LPASS_AHBL_ABT_NUM_SLAVES_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x00000008)
#define HWIO_LPASS_AHBL_ABT_NUM_SLAVES_RMSK                            0x3f
#define HWIO_LPASS_AHBL_ABT_NUM_SLAVES_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_NUM_SLAVES_ADDR, HWIO_LPASS_AHBL_ABT_NUM_SLAVES_RMSK)
#define HWIO_LPASS_AHBL_ABT_NUM_SLAVES_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_NUM_SLAVES_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_NUM_SLAVES_NUMSLAVES_BMSK                  0x3f
#define HWIO_LPASS_AHBL_ABT_NUM_SLAVES_NUMSLAVES_SHFT                   0x0

#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_ADDR                   (LPASS_AHBL_TIME_REG_BASE      + 0x0000000c)
#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_RMSK                         0xff
#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_ADDR, HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_RMSK)
#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_OUT(v)      \
        out_dword(HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_ADDR,v)
#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_ADDR,m,v,HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_IN)
#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_LOADVAL_BMSK                 0xff
#define HWIO_LPASS_AHBL_ABT_TIMER_LOADVAL_LOADVAL_SHFT                  0x0

#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x00000010)
#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_RMSK                             0x1
#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_TIMER_MODE_ADDR, HWIO_LPASS_AHBL_ABT_TIMER_MODE_RMSK)
#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_TIMER_MODE_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_OUT(v)      \
        out_dword(HWIO_LPASS_AHBL_ABT_TIMER_MODE_ADDR,v)
#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBL_ABT_TIMER_MODE_ADDR,m,v,HWIO_LPASS_AHBL_ABT_TIMER_MODE_IN)
#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_MODE_BMSK                        0x1
#define HWIO_LPASS_AHBL_ABT_TIMER_MODE_MODE_SHFT                        0x0

#define HWIO_LPASS_AHBL_ABT_INTR_STATUS_ADDR                     (LPASS_AHBL_TIME_REG_BASE      + 0x00000014)
#define HWIO_LPASS_AHBL_ABT_INTR_STATUS_RMSK                            0x1
#define HWIO_LPASS_AHBL_ABT_INTR_STATUS_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_INTR_STATUS_ADDR, HWIO_LPASS_AHBL_ABT_INTR_STATUS_RMSK)
#define HWIO_LPASS_AHBL_ABT_INTR_STATUS_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_INTR_STATUS_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_INTR_STATUS_INTRSTATUS_BMSK                 0x1
#define HWIO_LPASS_AHBL_ABT_INTR_STATUS_INTRSTATUS_SHFT                 0x0

#define HWIO_LPASS_AHBL_ABT_INTR_CLEAR_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x00000018)
#define HWIO_LPASS_AHBL_ABT_INTR_CLEAR_RMSK                             0x1
#define HWIO_LPASS_AHBL_ABT_INTR_CLEAR_OUT(v)      \
        out_dword(HWIO_LPASS_AHBL_ABT_INTR_CLEAR_ADDR,v)
#define HWIO_LPASS_AHBL_ABT_INTR_CLEAR_INTRCLEAR_BMSK                   0x1
#define HWIO_LPASS_AHBL_ABT_INTR_CLEAR_INTRCLEAR_SHFT                   0x0

#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_ADDR                     (LPASS_AHBL_TIME_REG_BASE      + 0x0000001c)
#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_RMSK                            0x1
#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_INTR_ENABLE_ADDR, HWIO_LPASS_AHBL_ABT_INTR_ENABLE_RMSK)
#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_INTR_ENABLE_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_LPASS_AHBL_ABT_INTR_ENABLE_ADDR,v)
#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AHBL_ABT_INTR_ENABLE_ADDR,m,v,HWIO_LPASS_AHBL_ABT_INTR_ENABLE_IN)
#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_INTRENABLE_BMSK                 0x1
#define HWIO_LPASS_AHBL_ABT_INTR_ENABLE_INTRENABLE_SHFT                 0x0

#define HWIO_LPASS_AHBL_ABT_SYND_VALID_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x00000020)
#define HWIO_LPASS_AHBL_ABT_SYND_VALID_RMSK                             0x1
#define HWIO_LPASS_AHBL_ABT_SYND_VALID_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_VALID_ADDR, HWIO_LPASS_AHBL_ABT_SYND_VALID_RMSK)
#define HWIO_LPASS_AHBL_ABT_SYND_VALID_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_VALID_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_SYND_VALID_SYNDVALID_BMSK                   0x1
#define HWIO_LPASS_AHBL_ABT_SYND_VALID_SYNDVALID_SHFT                   0x0

#define HWIO_LPASS_AHBL_ABT_SYND_CLEAR_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x00000024)
#define HWIO_LPASS_AHBL_ABT_SYND_CLEAR_RMSK                             0x1
#define HWIO_LPASS_AHBL_ABT_SYND_CLEAR_OUT(v)      \
        out_dword(HWIO_LPASS_AHBL_ABT_SYND_CLEAR_ADDR,v)
#define HWIO_LPASS_AHBL_ABT_SYND_CLEAR_SYNDCLEAR_BMSK                   0x1
#define HWIO_LPASS_AHBL_ABT_SYND_CLEAR_SYNDCLEAR_SHFT                   0x0

#define HWIO_LPASS_AHBL_ABT_SYND_ID_ADDR                         (LPASS_AHBL_TIME_REG_BASE      + 0x00000028)
#define HWIO_LPASS_AHBL_ABT_SYND_ID_RMSK                             0xffff
#define HWIO_LPASS_AHBL_ABT_SYND_ID_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_ID_ADDR, HWIO_LPASS_AHBL_ABT_SYND_ID_RMSK)
#define HWIO_LPASS_AHBL_ABT_SYND_ID_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_ID_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_SYND_ID_BID_BMSK                         0xe000
#define HWIO_LPASS_AHBL_ABT_SYND_ID_BID_SHFT                            0xd
#define HWIO_LPASS_AHBL_ABT_SYND_ID_PID_BMSK                         0x1f00
#define HWIO_LPASS_AHBL_ABT_SYND_ID_PID_SHFT                            0x8
#define HWIO_LPASS_AHBL_ABT_SYND_ID_MID_BMSK                           0xff
#define HWIO_LPASS_AHBL_ABT_SYND_ID_MID_SHFT                            0x0

#define HWIO_LPASS_AHBL_ABT_SYND_ADDR0_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x0000002c)
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR0_RMSK                      0xffffffff
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR0_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_ADDR0_ADDR, HWIO_LPASS_AHBL_ABT_SYND_ADDR0_RMSK)
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR0_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_ADDR0_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR0_SYNDADDR0_BMSK            0xffffffff
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR0_SYNDADDR0_SHFT                   0x0

#define HWIO_LPASS_AHBL_ABT_SYND_ADDR1_ADDR                      (LPASS_AHBL_TIME_REG_BASE      + 0x00000030)
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR1_RMSK                      0xffffffff
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR1_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_ADDR1_ADDR, HWIO_LPASS_AHBL_ABT_SYND_ADDR1_RMSK)
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR1_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_ADDR1_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR1_SYNDADDR1_BMSK            0xffffffff
#define HWIO_LPASS_AHBL_ABT_SYND_ADDR1_SYNDADDR1_SHFT                   0x0

#define HWIO_LPASS_AHBL_ABT_SYND_HREADY_ADDR                     (LPASS_AHBL_TIME_REG_BASE      + 0x00000034)
#define HWIO_LPASS_AHBL_ABT_SYND_HREADY_RMSK                     0xffffffff
#define HWIO_LPASS_AHBL_ABT_SYND_HREADY_IN          \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_HREADY_ADDR, HWIO_LPASS_AHBL_ABT_SYND_HREADY_RMSK)
#define HWIO_LPASS_AHBL_ABT_SYND_HREADY_INM(m)      \
        in_dword_masked(HWIO_LPASS_AHBL_ABT_SYND_HREADY_ADDR, m)
#define HWIO_LPASS_AHBL_ABT_SYND_HREADY_SYNDHREADY_BMSK          0xffffffff
#define HWIO_LPASS_AHBL_ABT_SYND_HREADY_SYNDHREADY_SHFT                 0x0

/*----------------------------------------------------------------------------
 * MODULE: TCSR_TCSR_REGS
 *--------------------------------------------------------------------------*/

#define TCSR_TCSR_REGS_REG_BASE                                                                                      (CORE_TOP_CSR_BASE      + 0x000c0000)

#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x00000800)
#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_RMSK                                                                                 0x1
#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_IN          \
        in_dword_masked(HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_ADDR, HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_RMSK)
#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_ADDR, m)
#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_OUT(v)      \
        out_dword(HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_ADDR,v)
#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_ADDR,m,v,HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_IN)
#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_TIMEOUT_SLAVE_GLB_EN_BMSK                                                            0x1
#define HWIO_TCSR_TIMEOUT_SLAVE_GLB_EN_TIMEOUT_SLAVE_GLB_EN_SHFT                                                            0x0

#define HWIO_TCSR_XPU_NSEN_STATUS_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00000820)
#define HWIO_TCSR_XPU_NSEN_STATUS_RMSK                                                                                      0x3
#define HWIO_TCSR_XPU_NSEN_STATUS_IN          \
        in_dword_masked(HWIO_TCSR_XPU_NSEN_STATUS_ADDR, HWIO_TCSR_XPU_NSEN_STATUS_RMSK)
#define HWIO_TCSR_XPU_NSEN_STATUS_INM(m)      \
        in_dword_masked(HWIO_TCSR_XPU_NSEN_STATUS_ADDR, m)
#define HWIO_TCSR_XPU_NSEN_STATUS_REGS_XPU_NSEN_STATUS_BMSK                                                                 0x2
#define HWIO_TCSR_XPU_NSEN_STATUS_REGS_XPU_NSEN_STATUS_SHFT                                                                 0x1
#define HWIO_TCSR_XPU_NSEN_STATUS_MUTEX_XPU_NSEN_STATUS_BMSK                                                                0x1
#define HWIO_TCSR_XPU_NSEN_STATUS_MUTEX_XPU_NSEN_STATUS_SHFT                                                                0x0

#define HWIO_TCSR_XPU_VMIDEN_STATUS_ADDR                                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00000824)
#define HWIO_TCSR_XPU_VMIDEN_STATUS_RMSK                                                                                    0x3
#define HWIO_TCSR_XPU_VMIDEN_STATUS_IN          \
        in_dword_masked(HWIO_TCSR_XPU_VMIDEN_STATUS_ADDR, HWIO_TCSR_XPU_VMIDEN_STATUS_RMSK)
#define HWIO_TCSR_XPU_VMIDEN_STATUS_INM(m)      \
        in_dword_masked(HWIO_TCSR_XPU_VMIDEN_STATUS_ADDR, m)
#define HWIO_TCSR_XPU_VMIDEN_STATUS_REGS_XPU_VMIDEN_STATUS_BMSK                                                             0x2
#define HWIO_TCSR_XPU_VMIDEN_STATUS_REGS_XPU_VMIDEN_STATUS_SHFT                                                             0x1
#define HWIO_TCSR_XPU_VMIDEN_STATUS_MUTEX_XPU_VMIDEN_STATUS_BMSK                                                            0x1
#define HWIO_TCSR_XPU_VMIDEN_STATUS_MUTEX_XPU_VMIDEN_STATUS_SHFT                                                            0x0

#define HWIO_TCSR_XPU_MSAEN_STATUS_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00000828)
#define HWIO_TCSR_XPU_MSAEN_STATUS_RMSK                                                                                     0x3
#define HWIO_TCSR_XPU_MSAEN_STATUS_IN          \
        in_dword_masked(HWIO_TCSR_XPU_MSAEN_STATUS_ADDR, HWIO_TCSR_XPU_MSAEN_STATUS_RMSK)
#define HWIO_TCSR_XPU_MSAEN_STATUS_INM(m)      \
        in_dword_masked(HWIO_TCSR_XPU_MSAEN_STATUS_ADDR, m)
#define HWIO_TCSR_XPU_MSAEN_STATUS_REGS_XPU_MSAEN_STATUS_BMSK                                                               0x2
#define HWIO_TCSR_XPU_MSAEN_STATUS_REGS_XPU_MSAEN_STATUS_SHFT                                                               0x1
#define HWIO_TCSR_XPU_MSAEN_STATUS_MUTEX_XPU_MSAEN_STATUS_BMSK                                                              0x1
#define HWIO_TCSR_XPU_MSAEN_STATUS_MUTEX_XPU_MSAEN_STATUS_SHFT                                                              0x0

#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x00002000)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_RMSK                                                                          0xffffffff
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ADDR, HWIO_TCSR_SS_XPU_NON_SEC_INTR0_RMSK)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ADDR, m)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_BMSK                        0x80000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_SHFT                              0x1f
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_BOOT_ROM_XPU_NON_SEC_INTR0_BMSK                                               0x40000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_BOOT_ROM_XPU_NON_SEC_INTR0_SHFT                                                     0x1e
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_BMSK                            0x20000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_SHFT                                  0x1d
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC3_XPU_NON_SEC_INTR0_BMSK                                                  0x10000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC3_XPU_NON_SEC_INTR0_SHFT                                                        0x1c
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC2_XPU_NON_SEC_INTR0_BMSK                                                   0x8000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC2_XPU_NON_SEC_INTR0_SHFT                                                        0x1b
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC1_XPU_NON_SEC_INTR0_BMSK                                                   0x4000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC1_XPU_NON_SEC_INTR0_SHFT                                                        0x1a
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC0_XPU_NON_SEC_INTR0_BMSK                                                   0x2000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_LLCC0_XPU_NON_SEC_INTR0_SHFT                                                        0x19
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_UFS_XPU_NON_SEC_INTR0_BMSK                                                     0x1000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_UFS_XPU_NON_SEC_INTR0_SHFT                                                          0x18
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_RESERVE_23_BMSK                                                                 0x800000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_RESERVE_23_SHFT                                                                     0x17
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_SDC_XPU_NON_SEC_INTR0_BMSK                                                  0x400000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_SDC_XPU_NON_SEC_INTR0_SHFT                                                      0x16
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_GCC_XPU_NON_SEC_INTR0_BMSK                                                      0x200000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_GCC_XPU_NON_SEC_INTR0_SHFT                                                          0x15
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_MEMNOC_XPU_NON_SEC_INTR0_BMSK                                                   0x100000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_MEMNOC_XPU_NON_SEC_INTR0_SHFT                                                       0x14
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QM_XPU_NON_SEC_INTR0_BMSK                                                        0x80000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QM_XPU_NON_SEC_INTR0_SHFT                                                           0x13
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QNM_SNOC_XPU_NON_SEC_INTR0_BMSK                                                  0x40000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QNM_SNOC_XPU_NON_SEC_INTR0_SHFT                                                     0x12
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QHS_CNOC_XPU_NON_SEC_INTR0_BMSK                                                  0x20000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QHS_CNOC_XPU_NON_SEC_INTR0_SHFT                                                     0x11
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QHM_AOSS_XPU_NON_SEC_INTR0_BMSK                                                  0x10000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QHM_AOSS_XPU_NON_SEC_INTR0_SHFT                                                     0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SP_XPU_NON_SEC_INTR0_BMSK                                                         0x8000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SP_XPU_NON_SEC_INTR0_SHFT                                                            0xf
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_PIMEM_MPU_XPU_NON_SEC_INTR0_BMSK                                                  0x4000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_PIMEM_MPU_XPU_NON_SEC_INTR0_SHFT                                                     0xe
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_PIMEM_APU_XPU_NON_SEC_INTR0_BMSK                                                  0x2000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_PIMEM_APU_XPU_NON_SEC_INTR0_SHFT                                                     0xd
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_Q6_XPU_NON_SEC_INTR0_BMSK                                                     0x1000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_Q6_XPU_NON_SEC_INTR0_SHFT                                                        0xc
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_XPU_NON_SEC_INTR0_BMSK                                                         0x800
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_XPU_NON_SEC_INTR0_SHFT                                                           0xb
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_QUP_XPU_NON_SEC_INTR0_BMSK                                                     0x400
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SSC_QUP_XPU_NON_SEC_INTR0_SHFT                                                       0xa
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SEC_CTRL_XPU_NON_SEC_INTR0_BMSK                                                    0x200
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_SEC_CTRL_XPU_NON_SEC_INTR0_SHFT                                                      0x9
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_DCC_XPU_NON_SEC_INTR0_BMSK                                                         0x100
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_DCC_XPU_NON_SEC_INTR0_SHFT                                                           0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_OCIMEM_RPU_XPU_NON_SEC_INTR0_BMSK                                                   0x80
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_OCIMEM_RPU_XPU_NON_SEC_INTR0_SHFT                                                    0x7
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_CRYPTO0_XPU_NON_SEC_INTR0_BMSK                                                      0x40
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_CRYPTO0_XPU_NON_SEC_INTR0_SHFT                                                       0x6
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_TCSR_MUTEX_XPU_NON_SEC_INTR0_BMSK                                                   0x20
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_TCSR_MUTEX_XPU_NON_SEC_INTR0_SHFT                                                    0x5
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QUPV3_NORTH_XPU_NON_SEC_INTR0_BMSK                                                  0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QUPV3_NORTH_XPU_NON_SEC_INTR0_SHFT                                                   0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_TCSR_REGS_XPU_NON_SEC_INTR0_BMSK                                                     0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_TCSR_REGS_XPU_NON_SEC_INTR0_SHFT                                                     0x3
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QUPV3_SOUTH_XPU_NON_SEC_INTR0_BMSK                                                   0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_QUPV3_SOUTH_XPU_NON_SEC_INTR0_SHFT                                                   0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_RPM_MPU_XPU_NON_SEC_INTR0_BMSK                                                       0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_RPM_MPU_XPU_NON_SEC_INTR0_SHFT                                                       0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_PMIC_ARB_XPU_NON_SEC_INTR0_BMSK                                                      0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_PMIC_ARB_XPU_NON_SEC_INTR0_SHFT                                                      0x0

#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x00002004)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RMSK                                                                             0x7ffff
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ADDR, HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RMSK)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ADDR, m)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_50_BMSK                                                                  0x40000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_50_SHFT                                                                     0x12
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_49_BMSK                                                                  0x20000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_49_SHFT                                                                     0x11
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_SDC1_ICE_XPU_NON_SEC_INTR1_BMSK                                                  0x10000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_SDC1_ICE_XPU_NON_SEC_INTR1_SHFT                                                     0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_NORTH_XPU_NON_SEC_INTR1_BMSK                                                 0x8000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_NORTH_XPU_NON_SEC_INTR1_SHFT                                                    0xf
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_46_BMSK                                                                   0x4000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_46_SHFT                                                                      0xe
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_45_BMSK                                                                   0x2000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_45_SHFT                                                                      0xd
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_44_BMSK                                                                   0x1000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_RESERVE_44_SHFT                                                                      0xc
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_IPA_XPU_NON_SEC_INTR1_BMSK                                                         0x800
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_IPA_XPU_NON_SEC_INTR1_SHFT                                                           0xb
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_EAST_XPU_NON_SEC_INTR1_BMSK                                                   0x400
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_EAST_XPU_NON_SEC_INTR1_SHFT                                                     0xa
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_SOUTH_XPU_NON_SEC_INTR1_BMSK                                                  0x200
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_SOUTH_XPU_NON_SEC_INTR1_SHFT                                                    0x9
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_WEST_XPU_SEC_INTR1_BMSK                                                       0x100
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TLMM_WEST_XPU_SEC_INTR1_SHFT                                                         0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_MDSS_XPU_NON_SEC_INTR1_BMSK                                                         0x80
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_MDSS_XPU_NON_SEC_INTR1_SHFT                                                          0x7
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_UFS_CARD_ICE_XPU_NON_SEC_INTR1_BMSK                                                 0x40
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_UFS_CARD_ICE_XPU_NON_SEC_INTR1_SHFT                                                  0x6
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TITAN_XPU_NON_SEC_INTR1_BMSK                                                        0x20
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_TITAN_XPU_NON_SEC_INTR1_SHFT                                                         0x5
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_SPDM_XPU_NON_SEC_INTR1_BMSK                                                         0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_SPDM_XPU_NON_SEC_INTR1_SHFT                                                          0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_QXM_MSS_NAV_XPU_NON_SEC_INTR1_BMSK                                                   0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_QXM_MSS_NAV_XPU_NON_SEC_INTR1_SHFT                                                   0x3
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_QNM_AGGRE2_XPU_NON_SEC_INTR1_BMSK                                                    0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_QNM_AGGRE2_XPU_NON_SEC_INTR1_SHFT                                                    0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_QNM_AGGRE1_XPU_NON_SEC_INTR1_BMSK                                                    0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_QNM_AGGRE1_XPU_NON_SEC_INTR1_SHFT                                                    0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_OCIMEM_XPU3_XPU_NON_SEC_INTR1_BMSK                                                   0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_OCIMEM_XPU3_XPU_NON_SEC_INTR1_SHFT                                                   0x0

#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_ADDR                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x00002040)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_RMSK                                                                   0xffffffff
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_ADDR, HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_ENABLE_BMSK          0x80000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_ENABLE_SHFT                0x1f
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_BOOT_ROM_XPU_NON_SEC_INTR0_ENABLE_BMSK                                 0x40000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_BOOT_ROM_XPU_NON_SEC_INTR0_ENABLE_SHFT                                       0x1e
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_ENABLE_BMSK              0x20000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_NON_SEC_INTR0_ENABLE_SHFT                    0x1d
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC3_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x10000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC3_XPU_NON_SEC_INTR0_ENABLE_SHFT                                          0x1c
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC2_XPU_NON_SEC_INTR0_ENABLE_BMSK                                     0x8000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC2_XPU_NON_SEC_INTR0_ENABLE_SHFT                                          0x1b
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC1_XPU_NON_SEC_INTR0_ENABLE_BMSK                                     0x4000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC1_XPU_NON_SEC_INTR0_ENABLE_SHFT                                          0x1a
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC0_XPU_NON_SEC_INTR0_ENABLE_BMSK                                     0x2000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_LLCC0_XPU_NON_SEC_INTR0_ENABLE_SHFT                                          0x19
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_UFS_XPU_NON_SEC_INTR0_ENABLE_BMSK                                       0x1000000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_UFS_XPU_NON_SEC_INTR0_ENABLE_SHFT                                            0x18
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_RESERVE_23_BMSK                                                          0x800000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_RESERVE_23_SHFT                                                              0x17
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_SDC_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x400000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_SDC_XPU_NON_SEC_INTR0_ENABLE_SHFT                                        0x16
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_GCC_XPU_NON_SEC_INTR0_ENABLE_BMSK                                        0x200000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_GCC_XPU_NON_SEC_INTR0_ENABLE_SHFT                                            0x15
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_MEMNOC_XPU_NON_SEC_INTR0_ENABLE_BMSK                                     0x100000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_MEMNOC_XPU_NON_SEC_INTR0_ENABLE_SHFT                                         0x14
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QM_XPU_NON_SEC_INTR0_ENABLE_BMSK                                          0x80000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QM_XPU_NON_SEC_INTR0_ENABLE_SHFT                                             0x13
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QNM_SNOC_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x40000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QNM_SNOC_XPU_NON_SEC_INTR0_ENABLE_SHFT                                       0x12
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QHS_CNOC_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x20000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QHS_CNOC_XPU_NON_SEC_INTR0_ENABLE_SHFT                                       0x11
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QHM_AOSS_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x10000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QHM_AOSS_XPU_NON_SEC_INTR0_ENABLE_SHFT                                       0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SP_XPU_NON_SEC_INTR0_ENABLE_BMSK                                           0x8000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SP_XPU_NON_SEC_INTR0_ENABLE_SHFT                                              0xf
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_PIMEM_MPU_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x4000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_PIMEM_MPU_XPU_NON_SEC_INTR0_ENABLE_SHFT                                       0xe
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_PIMEM_APU_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x2000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_PIMEM_APU_XPU_NON_SEC_INTR0_ENABLE_SHFT                                       0xd
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_Q6_XPU_NON_SEC_INTR0_ENABLE_BMSK                                       0x1000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_Q6_XPU_NON_SEC_INTR0_ENABLE_SHFT                                          0xc
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_XPU_NON_SEC_INTR0_ENABLE_BMSK                                           0x800
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_XPU_NON_SEC_INTR0_ENABLE_SHFT                                             0xb
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_QUP_XPU_NON_SEC_INTR0_ENABLE_BMSK                                       0x400
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SSC_QUP_XPU_NON_SEC_INTR0_ENABLE_SHFT                                         0xa
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SEC_CTRL_XPU_NON_SEC_INTR0_ENABLE_BMSK                                      0x200
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_SEC_CTRL_XPU_NON_SEC_INTR0_ENABLE_SHFT                                        0x9
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_DCC_XPU_NON_SEC_INTR0_ENABLE_BMSK                                           0x100
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_DCC_XPU_NON_SEC_INTR0_ENABLE_SHFT                                             0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_OCIMEM_RPU_XPU_NON_SEC_INTR0_ENABLE_BMSK                                     0x80
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_OCIMEM_RPU_XPU_NON_SEC_INTR0_ENABLE_SHFT                                      0x7
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_CRYPTO0_XPU_NON_SEC_INTR0_ENABLE_BMSK                                        0x40
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_CRYPTO0_XPU_NON_SEC_INTR0_ENABLE_SHFT                                         0x6
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_TCSR_MUTEX_XPU_NON_SEC_INTR0_ENABLE_BMSK                                     0x20
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_TCSR_MUTEX_XPU_NON_SEC_INTR0_ENABLE_SHFT                                      0x5
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QUPV3_NORTH_XPU_NON_SEC_INTR0_ENABLE_BMSK                                    0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QUPV3_NORTH_XPU_NON_SEC_INTR0_ENABLE_SHFT                                     0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_TCSR_REGS_XPU_NON_SEC_INTR0_ENABLE_BMSK                                       0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_TCSR_REGS_XPU_NON_SEC_INTR0_ENABLE_SHFT                                       0x3
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QUPV3_SOUTH_XPU_NON_SEC_INTR0_ENABLE_BMSK                                     0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_QUPV3_SOUTH_XPU_NON_SEC_INTR0_ENABLE_SHFT                                     0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_RPM_MPU_XPU_NON_SEC_INTR0_ENABLE_BMSK                                         0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_RPM_MPU_XPU_NON_SEC_INTR0_ENABLE_SHFT                                         0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_PMIC_ARB_XPU_NON_SEC_INTR0_ENABLE_BMSK                                        0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR0_ENABLE_PMIC_ARB_XPU_NON_SEC_INTR0_ENABLE_SHFT                                        0x0

#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_ADDR                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x00002044)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RMSK                                                                      0x7ffff
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_ADDR, HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_50_BMSK                                                           0x40000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_50_SHFT                                                              0x12
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_49_BMSK                                                           0x20000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_49_SHFT                                                              0x11
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_SDC1_ICE_XPU_NON_SEC_INTR1_ENABLE_BMSK                                    0x10000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_SDC1_ICE_XPU_NON_SEC_INTR1_ENABLE_SHFT                                       0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_NORTH_XPU_NON_SEC_INTR1_ENABLE_BMSK                                   0x8000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_NORTH_XPU_NON_SEC_INTR1_ENABLE_SHFT                                      0xf
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_46_BMSK                                                            0x4000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_46_SHFT                                                               0xe
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_45_BMSK                                                            0x2000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_45_SHFT                                                               0xd
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_44_BMSK                                                            0x1000
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_RESERVE_44_SHFT                                                               0xc
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_IPA_XPU_NON_SEC_INTR1_ENABLE_BMSK                                           0x800
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_IPA_XPU_NON_SEC_INTR1_ENABLE_SHFT                                             0xb
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_EAST_XPU_NON_SEC_INTR1_ENABLE_BMSK                                     0x400
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_EAST_XPU_NON_SEC_INTR1_ENABLE_SHFT                                       0xa
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_SOUTH_XPU_NON_SEC_INTR1_ENABLE_BMSK                                    0x200
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_SOUTH_XPU_NON_SEC_INTR1_ENABLE_SHFT                                      0x9
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_BMSK                                         0x100
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_SHFT                                           0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_MDSS_XPU_NON_SEC_INTR1_ENABLE_BMSK                                           0x80
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_MDSS_XPU_NON_SEC_INTR1_ENABLE_SHFT                                            0x7
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_UFS_CARD_ICE_XPU_NON_SEC_INTR1_ENABLE_BMSK                                   0x40
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_UFS_CARD_ICE_XPU_NON_SEC_INTR1_ENABLE_SHFT                                    0x6
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TITAN_XPU_NON_SEC_INTR1_ENABLE_BMSK                                          0x20
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_TITAN_XPU_NON_SEC_INTR1_ENABLE_SHFT                                           0x5
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_SPDM_XPU_NON_SEC_INTR1_ENABLE_BMSK                                           0x10
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_SPDM_XPU_NON_SEC_INTR1_ENABLE_SHFT                                            0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_QXM_MSS_NAV_XPU_NON_SEC_INTR1_ENABLE_BMSK                                     0x8
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_QXM_MSS_NAV_XPU_NON_SEC_INTR1_ENABLE_SHFT                                     0x3
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_QNM_AGGRE2_XPU_NON_SEC_INTR1_ENABLE_BMSK                                      0x4
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_QNM_AGGRE2_XPU_NON_SEC_INTR1_ENABLE_SHFT                                      0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_QNM_AGGRE1_XPU_NON_SEC_INTR1_ENABLE_BMSK                                      0x2
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_QNM_AGGRE1_XPU_NON_SEC_INTR1_ENABLE_SHFT                                      0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_OCIMEM_XPU3_XPU_NON_SEC_INTR1_ENABLE_BMSK                                     0x1
#define HWIO_TCSR_SS_XPU_NON_SEC_INTR1_ENABLE_OCIMEM_XPU3_XPU_NON_SEC_INTR1_ENABLE_SHFT                                     0x0

#define HWIO_TCSR_SS_XPU_SEC_INTR0_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00004000)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_RMSK                                                                              0xffffffff
#define HWIO_TCSR_SS_XPU_SEC_INTR0_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR0_ADDR, HWIO_TCSR_SS_XPU_SEC_INTR0_RMSK)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR0_ADDR, m)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_BMSK                                0x80000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_SHFT                                      0x1f
#define HWIO_TCSR_SS_XPU_SEC_INTR0_BOOT_ROM_XPU_SEC_INTR0_BMSK                                                       0x40000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_BOOT_ROM_XPU_SEC_INTR0_SHFT                                                             0x1e
#define HWIO_TCSR_SS_XPU_SEC_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_BMSK                                    0x20000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_SHFT                                          0x1d
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC3_XPU_SEC_INTR0_BMSK                                                          0x10000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC3_XPU_SEC_INTR0_SHFT                                                                0x1c
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC2_XPU_SEC_INTR0_BMSK                                                           0x8000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC2_XPU_SEC_INTR0_SHFT                                                                0x1b
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC1_XPU_SEC_INTR0_BMSK                                                           0x4000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC1_XPU_SEC_INTR0_SHFT                                                                0x1a
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC0_XPU_SEC_INTR0_BMSK                                                           0x2000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_LLCC0_XPU_SEC_INTR0_SHFT                                                                0x19
#define HWIO_TCSR_SS_XPU_SEC_INTR0_UFS_XPU_SEC_INTR0_BMSK                                                             0x1000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_UFS_XPU_SEC_INTR0_SHFT                                                                  0x18
#define HWIO_TCSR_SS_XPU_SEC_INTR0_RESERVE_23_BMSK                                                                     0x800000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_RESERVE_23_SHFT                                                                         0x17
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_SDC_XPU_SEC_INTR0_BMSK                                                          0x400000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_SDC_XPU_SEC_INTR0_SHFT                                                              0x16
#define HWIO_TCSR_SS_XPU_SEC_INTR0_GCC_XPU_SEC_INTR0_BMSK                                                              0x200000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_GCC_XPU_SEC_INTR0_SHFT                                                                  0x15
#define HWIO_TCSR_SS_XPU_SEC_INTR0_MEMNOC_XPU_SEC_INTR0_BMSK                                                           0x100000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_MEMNOC_XPU_SEC_INTR0_SHFT                                                               0x14
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QM_XPU_SEC_INTR0_BMSK                                                                0x80000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QM_XPU_SEC_INTR0_SHFT                                                                   0x13
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QNM_SNOC_XPU_SEC_INTR0_BMSK                                                          0x40000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QNM_SNOC_XPU_SEC_INTR0_SHFT                                                             0x12
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QHS_CNOC_XPU_SEC_INTR0_BMSK                                                          0x20000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QHS_CNOC_XPU_SEC_INTR0_SHFT                                                             0x11
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QHM_AOSS_XPU_SEC_INTR0_BMSK                                                          0x10000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QHM_AOSS_XPU_SEC_INTR0_SHFT                                                             0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SP_XPU_SEC_INTR0_BMSK                                                                 0x8000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SP_XPU_SEC_INTR0_SHFT                                                                    0xf
#define HWIO_TCSR_SS_XPU_SEC_INTR0_PIMEM_MPU_XPU_SEC_INTR0_BMSK                                                          0x4000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_PIMEM_MPU_XPU_SEC_INTR0_SHFT                                                             0xe
#define HWIO_TCSR_SS_XPU_SEC_INTR0_PIMEM_APU_XPU_SEC_INTR0_BMSK                                                          0x2000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_PIMEM_APU_XPU_SEC_INTR0_SHFT                                                             0xd
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_Q6_XPU_SEC_INTR0_BMSK                                                             0x1000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_Q6_XPU_SEC_INTR0_SHFT                                                                0xc
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_XPU_SEC_INTR0_BMSK                                                                 0x800
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_XPU_SEC_INTR0_SHFT                                                                   0xb
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_QUP_XPU_SEC_INTR0_BMSK                                                             0x400
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SSC_QUP_XPU_SEC_INTR0_SHFT                                                               0xa
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SEC_CTRL_XPU_SEC_INTR0_BMSK                                                            0x200
#define HWIO_TCSR_SS_XPU_SEC_INTR0_SEC_CTRL_XPU_SEC_INTR0_SHFT                                                              0x9
#define HWIO_TCSR_SS_XPU_SEC_INTR0_DCC_XPU_SEC_INTR0_BMSK                                                                 0x100
#define HWIO_TCSR_SS_XPU_SEC_INTR0_DCC_XPU_SEC_INTR0_SHFT                                                                   0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR0_OCIMEM_RPU_XPU_SEC_INTR0_BMSK                                                           0x80
#define HWIO_TCSR_SS_XPU_SEC_INTR0_OCIMEM_RPU_XPU_SEC_INTR0_SHFT                                                            0x7
#define HWIO_TCSR_SS_XPU_SEC_INTR0_CRYPTO0_XPU_SEC_INTR0_BMSK                                                              0x40
#define HWIO_TCSR_SS_XPU_SEC_INTR0_CRYPTO0_XPU_SEC_INTR0_SHFT                                                               0x6
#define HWIO_TCSR_SS_XPU_SEC_INTR0_TCSR_MUTEX_XPU_SEC_INTR0_BMSK                                                           0x20
#define HWIO_TCSR_SS_XPU_SEC_INTR0_TCSR_MUTEX_XPU_SEC_INTR0_SHFT                                                            0x5
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QUPV3_NORTH_XPU_SEC_INTR0_BMSK                                                          0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QUPV3_NORTH_XPU_SEC_INTR0_SHFT                                                           0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR0_TCSR_REGS_XPU_SEC_INTR0_BMSK                                                             0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR0_TCSR_REGS_XPU_SEC_INTR0_SHFT                                                             0x3
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QUPV3_SOUTH_XPU_SEC_INTR0_BMSK                                                           0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR0_QUPV3_SOUTH_XPU_SEC_INTR0_SHFT                                                           0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR0_RPM_MPU_XPU_SEC_INTR0_BMSK                                                               0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR0_RPM_MPU_XPU_SEC_INTR0_SHFT                                                               0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR0_PMIC_ARB_XPU_SEC_INTR0_BMSK                                                              0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR0_PMIC_ARB_XPU_SEC_INTR0_SHFT                                                              0x0

#define HWIO_TCSR_SS_XPU_SEC_INTR1_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00004004)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RMSK                                                                                 0x7ffff
#define HWIO_TCSR_SS_XPU_SEC_INTR1_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR1_ADDR, HWIO_TCSR_SS_XPU_SEC_INTR1_RMSK)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR1_ADDR, m)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_50_BMSK                                                                      0x40000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_50_SHFT                                                                         0x12
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_49_BMSK                                                                      0x20000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_49_SHFT                                                                         0x11
#define HWIO_TCSR_SS_XPU_SEC_INTR1_SDC1_ICE_XPU_SEC_INTR1_BMSK                                                          0x10000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_SDC1_ICE_XPU_SEC_INTR1_SHFT                                                             0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_NORTH_XPU_SEC_INTR1_BMSK                                                         0x8000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_NORTH_XPU_SEC_INTR1_SHFT                                                            0xf
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_46_BMSK                                                                       0x4000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_46_SHFT                                                                          0xe
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_45_BMSK                                                                       0x2000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_45_SHFT                                                                          0xd
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_44_BMSK                                                                       0x1000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_RESERVE_44_SHFT                                                                          0xc
#define HWIO_TCSR_SS_XPU_SEC_INTR1_IPA_XPU_SEC_INTR1_BMSK                                                                 0x800
#define HWIO_TCSR_SS_XPU_SEC_INTR1_IPA_XPU_SEC_INTR1_SHFT                                                                   0xb
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_EAST_XPU_SEC_INTR1_BMSK                                                           0x400
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_EAST_XPU_SEC_INTR1_SHFT                                                             0xa
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_SOUTH_XPU_SEC_INTR1_BMSK                                                          0x200
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_SOUTH_XPU_SEC_INTR1_SHFT                                                            0x9
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_WEST_XPU_SEC_INTR1_BMSK                                                           0x100
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TLMM_WEST_XPU_SEC_INTR1_SHFT                                                             0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR1_MDSS_XPU_SEC_INTR1_BMSK                                                                 0x80
#define HWIO_TCSR_SS_XPU_SEC_INTR1_MDSS_XPU_SEC_INTR1_SHFT                                                                  0x7
#define HWIO_TCSR_SS_XPU_SEC_INTR1_UFS_CARD_ICE_XPU_SEC_INTR1_BMSK                                                         0x40
#define HWIO_TCSR_SS_XPU_SEC_INTR1_UFS_CARD_ICE_XPU_SEC_INTR1_SHFT                                                          0x6
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TITAN_XPU_SEC_INTR1_BMSK                                                                0x20
#define HWIO_TCSR_SS_XPU_SEC_INTR1_TITAN_XPU_SEC_INTR1_SHFT                                                                 0x5
#define HWIO_TCSR_SS_XPU_SEC_INTR1_SPDM_XPU_SEC_INTR1_BMSK                                                                 0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR1_SPDM_XPU_SEC_INTR1_SHFT                                                                  0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR1_QXM_MSS_NAV_XPU_SEC_INTR1_BMSK                                                           0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR1_QXM_MSS_NAV_XPU_SEC_INTR1_SHFT                                                           0x3
#define HWIO_TCSR_SS_XPU_SEC_INTR1_QNM_AGGRE2_XPU_SEC_INTR1_BMSK                                                            0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR1_QNM_AGGRE2_XPU_SEC_INTR1_SHFT                                                            0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR1_QNM_AGGRE1_XPU_SEC_INTR1_BMSK                                                            0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR1_QNM_AGGRE1_XPU_SEC_INTR1_SHFT                                                            0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR1_OCIMEM_XPU3_XPU_SEC_INTR1_BMSK                                                           0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR1_OCIMEM_XPU3_XPU_SEC_INTR1_SHFT                                                           0x0

#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00004040)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_RMSK                                                                       0xffffffff
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_ADDR, HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_ENABLE_BMSK                  0x80000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_ENABLE_SHFT                        0x1f
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_BOOT_ROM_XPU_SEC_INTR0_ENABLE_BMSK                                         0x40000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_BOOT_ROM_XPU_SEC_INTR0_ENABLE_SHFT                                               0x1e
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_ENABLE_BMSK                      0x20000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SEC_INTR0_ENABLE_SHFT                            0x1d
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC3_XPU_SEC_INTR0_ENABLE_BMSK                                            0x10000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC3_XPU_SEC_INTR0_ENABLE_SHFT                                                  0x1c
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC2_XPU_SEC_INTR0_ENABLE_BMSK                                             0x8000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC2_XPU_SEC_INTR0_ENABLE_SHFT                                                  0x1b
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC1_XPU_SEC_INTR0_ENABLE_BMSK                                             0x4000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC1_XPU_SEC_INTR0_ENABLE_SHFT                                                  0x1a
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC0_XPU_SEC_INTR0_ENABLE_BMSK                                             0x2000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_LLCC0_XPU_SEC_INTR0_ENABLE_SHFT                                                  0x19
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_UFS_XPU_SEC_INTR0_ENABLE_BMSK                                               0x1000000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_UFS_XPU_SEC_INTR0_ENABLE_SHFT                                                    0x18
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_RESERVE_23_BMSK                                                              0x800000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_RESERVE_23_SHFT                                                                  0x17
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_SDC_XPU_SEC_INTR0_ENABLE_BMSK                                            0x400000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_SDC_XPU_SEC_INTR0_ENABLE_SHFT                                                0x16
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_GCC_XPU_SEC_INTR0_ENABLE_BMSK                                                0x200000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_GCC_XPU_SEC_INTR0_ENABLE_SHFT                                                    0x15
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_MEMNOC_XPU_SEC_INTR0_ENABLE_BMSK                                             0x100000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_MEMNOC_XPU_SEC_INTR0_ENABLE_SHFT                                                 0x14
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QM_XPU_SEC_INTR0_ENABLE_BMSK                                                  0x80000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QM_XPU_SEC_INTR0_ENABLE_SHFT                                                     0x13
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QNM_SNOC_XPU_SEC_INTR0_ENABLE_BMSK                                            0x40000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QNM_SNOC_XPU_SEC_INTR0_ENABLE_SHFT                                               0x12
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QHS_CNOC_XPU_SEC_INTR0_ENABLE_BMSK                                            0x20000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QHS_CNOC_XPU_SEC_INTR0_ENABLE_SHFT                                               0x11
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QHM_AOSS_XPU_SEC_INTR0_ENABLE_BMSK                                            0x10000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QHM_AOSS_XPU_SEC_INTR0_ENABLE_SHFT                                               0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SP_XPU_SEC_INTR0_ENABLE_BMSK                                                   0x8000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SP_XPU_SEC_INTR0_ENABLE_SHFT                                                      0xf
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_PIMEM_MPU_XPU_SEC_INTR0_ENABLE_BMSK                                            0x4000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_PIMEM_MPU_XPU_SEC_INTR0_ENABLE_SHFT                                               0xe
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_PIMEM_APU_XPU_SEC_INTR0_ENABLE_BMSK                                            0x2000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_PIMEM_APU_XPU_SEC_INTR0_ENABLE_SHFT                                               0xd
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_Q6_XPU_SEC_INTR0_ENABLE_BMSK                                               0x1000
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_Q6_XPU_SEC_INTR0_ENABLE_SHFT                                                  0xc
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_XPU_SEC_INTR0_ENABLE_BMSK                                                   0x800
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_XPU_SEC_INTR0_ENABLE_SHFT                                                     0xb
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_QUP_XPU_SEC_INTR0_ENABLE_BMSK                                               0x400
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SSC_QUP_XPU_SEC_INTR0_ENABLE_SHFT                                                 0xa
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SEC_CTRL_XPU_SEC_INTR0_ENABLE_BMSK                                              0x200
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_SEC_CTRL_XPU_SEC_INTR0_ENABLE_SHFT                                                0x9
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_DCC_XPU_SEC_INTR0_ENABLE_BMSK                                                   0x100
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_DCC_XPU_SEC_INTR0_ENABLE_SHFT                                                     0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_OCIMEM_RPU_XPU_SEC_INTR0_ENABLE_BMSK                                             0x80
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_OCIMEM_RPU_XPU_SEC_INTR0_ENABLE_SHFT                                              0x7
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_CRYPTO0_XPU_SEC_INTR0_ENABLE_BMSK                                                0x40
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_CRYPTO0_XPU_SEC_INTR0_ENABLE_SHFT                                                 0x6
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_TCSR_MUTEX_XPU_SEC_INTR0_ENABLE_BMSK                                             0x20
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_TCSR_MUTEX_XPU_SEC_INTR0_ENABLE_SHFT                                              0x5
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QUPV3_NORTH_XPU_SEC_INTR0_ENABLE_BMSK                                            0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QUPV3_NORTH_XPU_SEC_INTR0_ENABLE_SHFT                                             0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_TCSR_REGS_XPU_SEC_INTR0_ENABLE_BMSK                                               0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_TCSR_REGS_XPU_SEC_INTR0_ENABLE_SHFT                                               0x3
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QUPV3_SOUTH_XPU_SEC_INTR0_ENABLE_BMSK                                             0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_QUPV3_SOUTH_XPU_SEC_INTR0_ENABLE_SHFT                                             0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_RPM_MPU_XPU_SEC_INTR0_ENABLE_BMSK                                                 0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_RPM_MPU_XPU_SEC_INTR0_ENABLE_SHFT                                                 0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_PMIC_ARB_XPU_SEC_INTR0_ENABLE_BMSK                                                0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR0_ENABLE_PMIC_ARB_XPU_SEC_INTR0_ENABLE_SHFT                                                0x0

#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00004044)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RMSK                                                                          0x7ffff
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_ADDR, HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_50_BMSK                                                               0x40000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_50_SHFT                                                                  0x12
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_49_BMSK                                                               0x20000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_49_SHFT                                                                  0x11
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_SDC1_ICE_XPU_SEC_INTR1_ENABLE_BMSK                                            0x10000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_SDC1_ICE_XPU_SEC_INTR1_ENABLE_SHFT                                               0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_NORTH_XPU_SEC_INTR1_ENABLE_BMSK                                           0x8000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_NORTH_XPU_SEC_INTR1_ENABLE_SHFT                                              0xf
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_46_BMSK                                                                0x4000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_46_SHFT                                                                   0xe
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_45_BMSK                                                                0x2000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_45_SHFT                                                                   0xd
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_44_BMSK                                                                0x1000
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_RESERVE_44_SHFT                                                                   0xc
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_IPA_XPU_SEC_INTR1_ENABLE_BMSK                                                   0x800
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_IPA_XPU_SEC_INTR1_ENABLE_SHFT                                                     0xb
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_EAST_XPU_SEC_INTR1_ENABLE_BMSK                                             0x400
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_EAST_XPU_SEC_INTR1_ENABLE_SHFT                                               0xa
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_SOUTH_XPU_SEC_INTR1_ENABLE_BMSK                                            0x200
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_SOUTH_XPU_SEC_INTR1_ENABLE_SHFT                                              0x9
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_BMSK                                             0x100
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_SHFT                                               0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_MDSS_XPU_SEC_INTR1_ENABLE_BMSK                                                   0x80
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_MDSS_XPU_SEC_INTR1_ENABLE_SHFT                                                    0x7
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_UFS_CARD_ICE_XPU_SEC_INTR1_ENABLE_BMSK                                           0x40
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_UFS_CARD_ICE_XPU_SEC_INTR1_ENABLE_SHFT                                            0x6
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TITAN_XPU_SEC_INTR1_ENABLE_BMSK                                                  0x20
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_TITAN_XPU_SEC_INTR1_ENABLE_SHFT                                                   0x5
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_SPDM_XPU_SEC_INTR1_ENABLE_BMSK                                                   0x10
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_SPDM_XPU_SEC_INTR1_ENABLE_SHFT                                                    0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_QXM_MSS_NAV_XPU_SEC_INTR1_ENABLE_BMSK                                             0x8
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_QXM_MSS_NAV_XPU_SEC_INTR1_ENABLE_SHFT                                             0x3
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_QNM_AGGRE2_XPU_SEC_INTR1_ENABLE_BMSK                                              0x4
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_QNM_AGGRE2_XPU_SEC_INTR1_ENABLE_SHFT                                              0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_QNM_AGGRE1_XPU_SEC_INTR1_ENABLE_BMSK                                              0x2
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_QNM_AGGRE1_XPU_SEC_INTR1_ENABLE_SHFT                                              0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_OCIMEM_XPU3_XPU_SEC_INTR1_ENABLE_BMSK                                             0x1
#define HWIO_TCSR_SS_XPU_SEC_INTR1_ENABLE_OCIMEM_XPU3_XPU_SEC_INTR1_ENABLE_SHFT                                             0x0

#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x00002010)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RMSK                                                                    0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ADDR, HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_17_VMIDMT_NSGIRPT_BMSK                                          0x20000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_17_VMIDMT_NSGIRPT_SHFT                                             0x11
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_16_VMIDMT_NSGIRPT_BMSK                                          0x10000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_16_VMIDMT_NSGIRPT_SHFT                                             0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_15_VMIDMT_NSGIRPT_BMSK                                           0x8000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_15_VMIDMT_NSGIRPT_SHFT                                              0xf
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_14_VMIDMT_NSGIRPT_BMSK                                           0x4000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_14_VMIDMT_NSGIRPT_SHFT                                              0xe
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_13_VMIDMT_NSGIRPT_BMSK                                           0x2000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_13_VMIDMT_NSGIRPT_SHFT                                              0xd
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_12_VMIDMT_NSGIRPT_BMSK                                           0x1000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_12_VMIDMT_NSGIRPT_SHFT                                              0xc
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QDSS_DAP_VMIDMT_NSGIRPT_BMSK                                              0x800
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QDSS_DAP_VMIDMT_NSGIRPT_SHFT                                                0xb
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QDSS_TRACE_VMIDMT_NSGIRPT_BMSK                                            0x400
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QDSS_TRACE_VMIDMT_NSGIRPT_SHFT                                              0xa
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_IPA_VMIDMT_NSGIRPT_BMSK                                                   0x200
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_IPA_VMIDMT_NSGIRPT_SHFT                                                     0x9
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_8_VMIDMT_NSGIRPT_BMSK                                             0x100
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_8_VMIDMT_NSGIRPT_SHFT                                               0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_7_VMIDMT_NSGIRPT_BMSK                                              0x80
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_7_VMIDMT_NSGIRPT_SHFT                                               0x7
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_SSC_VMIDMT_NSGIRPT_BMSK                                                    0x40
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_SSC_VMIDMT_NSGIRPT_SHFT                                                     0x6
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_5_VMIDMT_NSGIRPT_BMSK                                              0x20
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RESERVE_5_VMIDMT_NSGIRPT_SHFT                                               0x5
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QUPV3_NORTH_VMIDMT_NSGIRPT_BMSK                                            0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QUPV3_NORTH_VMIDMT_NSGIRPT_SHFT                                             0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_SSC_SDC_VMIDMT_NSGIRPT_BMSK                                                 0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_SSC_SDC_VMIDMT_NSGIRPT_SHFT                                                 0x3
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QUPV3_SOUTH_VMIDMT_NSGIRPT_BMSK                                             0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_QUPV3_SOUTH_VMIDMT_NSGIRPT_SHFT                                             0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RPM_VMIDMT_NSGIRPT_BMSK                                                     0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_RPM_VMIDMT_NSGIRPT_SHFT                                                     0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_CRYPTO0_VMIDMT_NSGIRPT_BMSK                                                 0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_CRYPTO0_VMIDMT_NSGIRPT_SHFT                                                 0x0

#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_ADDR                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x00002050)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RMSK                                                             0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_NSGIRPT_ENABLE_BMSK                            0x20000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_NSGIRPT_ENABLE_SHFT                               0x11
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_NSGIRPT_ENABLE_BMSK                            0x10000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_NSGIRPT_ENABLE_SHFT                               0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_NSGIRPT_ENABLE_BMSK                             0x8000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_NSGIRPT_ENABLE_SHFT                                0xf
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_NSGIRPT_ENABLE_BMSK                             0x4000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_NSGIRPT_ENABLE_SHFT                                0xe
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_NSGIRPT_ENABLE_BMSK                             0x2000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_NSGIRPT_ENABLE_SHFT                                0xd
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_NSGIRPT_ENABLE_BMSK                             0x1000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_NSGIRPT_ENABLE_SHFT                                0xc
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_NSGIRPT_ENABLE_BMSK                                0x800
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_NSGIRPT_ENABLE_SHFT                                  0xb
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_NSGIRPT_ENABLE_BMSK                              0x400
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_NSGIRPT_ENABLE_SHFT                                0xa
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_IPA_VMIDMT_NSGIRPT_ENABLE_BMSK                                     0x200
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_IPA_VMIDMT_NSGIRPT_ENABLE_SHFT                                       0x9
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_NSGIRPT_ENABLE_BMSK                               0x100
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_NSGIRPT_ENABLE_SHFT                                 0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_NSGIRPT_ENABLE_BMSK                                0x80
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_NSGIRPT_ENABLE_SHFT                                 0x7
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_SSC_VMIDMT_NSGIRPT_ENABLE_BMSK                                      0x40
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_SSC_VMIDMT_NSGIRPT_ENABLE_SHFT                                       0x6
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_NSGIRPT_ENABLE_BMSK                                0x20
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_NSGIRPT_ENABLE_SHFT                                 0x5
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_NSGIRPT_ENABLE_BMSK                              0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_NSGIRPT_ENABLE_SHFT                               0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_NSGIRPT_ENABLE_BMSK                                   0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_NSGIRPT_ENABLE_SHFT                                   0x3
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_NSGIRPT_ENABLE_BMSK                               0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_NSGIRPT_ENABLE_SHFT                               0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RPM_VMIDMT_NSGIRPT_ENABLE_BMSK                                       0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_RPM_VMIDMT_NSGIRPT_ENABLE_SHFT                                       0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_NSGIRPT_ENABLE_BMSK                                   0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_NON_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_NSGIRPT_ENABLE_SHFT                                   0x0

#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ADDR                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x00002014)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_RMSK                                                                        0x1e42
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ADDR, HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_LPASS_5_IRQ_OUT_SECURITY_BMSK                                               0x1000
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_LPASS_5_IRQ_OUT_SECURITY_SHFT                                                  0xc
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_LPASS_13_IRQ_OUT_SECURITY_BMSK                                               0x800
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_LPASS_13_IRQ_OUT_SECURITY_SHFT                                                 0xb
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_AGGR2_NOC_SMMU_MMU_NSGIRPT_BMSK                                              0x400
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_AGGR2_NOC_SMMU_MMU_NSGIRPT_SHFT                                                0xa
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_AGGR1_NOC_SMMU_MMU_NSGIRPT_BMSK                                              0x200
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_AGGR1_NOC_SMMU_MMU_NSGIRPT_SHFT                                                0x9
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_OGPU_MMU_NSGIRPT_BMSK                                                         0x40
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_OGPU_MMU_NSGIRPT_SHFT                                                          0x6
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_MMSS_BIMC_SMMU_NSGIRPT_BMSK                                                    0x2
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_MMSS_BIMC_SMMU_NSGIRPT_SHFT                                                    0x1

#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00002054)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_RMSK                                                                 0x1e42
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_LPASS_5_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                            0x1000
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_LPASS_5_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                               0xc
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_LPASS_13_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                            0x800
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_LPASS_13_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                              0xb
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_NSGIRPT_ENABLE_BMSK                                0x400
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_NSGIRPT_ENABLE_SHFT                                  0xa
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_NSGIRPT_ENABLE_BMSK                                0x200
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_NSGIRPT_ENABLE_SHFT                                  0x9
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_OGPU_MMU_NSGIRPT_ENABLE_BMSK                                           0x40
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_OGPU_MMU_NSGIRPT_ENABLE_SHFT                                            0x6
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_NSGIRPT_ENABLE_BMSK                                      0x2
#define HWIO_TCSR_SS_MMU_CLIENT_NON_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_NSGIRPT_ENABLE_SHFT                                      0x1

#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ADDR                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x00003000)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RMSK                                                                       0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ADDR, HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_17_VMIDMT_NSGCFGIRPT_BMSK                                          0x20000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_17_VMIDMT_NSGCFGIRPT_SHFT                                             0x11
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_16_VMIDMT_NSGCFGIRPT_BMSK                                          0x10000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_16_VMIDMT_NSGCFGIRPT_SHFT                                             0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_15_VMIDMT_NSGCFGIRPT_BMSK                                           0x8000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_15_VMIDMT_NSGCFGIRPT_SHFT                                              0xf
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_14_VMIDMT_NSGCFGIRPT_BMSK                                           0x4000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_14_VMIDMT_NSGCFGIRPT_SHFT                                              0xe
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_13_VMIDMT_NSGCFGIRPT_BMSK                                           0x2000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_13_VMIDMT_NSGCFGIRPT_SHFT                                              0xd
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_12_VMIDMT_NSGCFGIRPT_BMSK                                           0x1000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_12_VMIDMT_NSGCFGIRPT_SHFT                                              0xc
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QDSS_DAP_VMIDMT_NSGCFGIRPT_BMSK                                              0x800
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QDSS_DAP_VMIDMT_NSGCFGIRPT_SHFT                                                0xb
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QDSS_TRACE_VMIDMT_NSGCFGIRPT_BMSK                                            0x400
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QDSS_TRACE_VMIDMT_NSGCFGIRPT_SHFT                                              0xa
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_IPA_VMIDMT_NSGCFGIRPT_BMSK                                                   0x200
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_IPA_VMIDMT_NSGCFGIRPT_SHFT                                                     0x9
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_8_VMIDMT_NSGCFGIRPT_BMSK                                             0x100
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_8_VMIDMT_NSGCFGIRPT_SHFT                                               0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_7_VMIDMT_NSGCFGIRPT_BMSK                                              0x80
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_7_VMIDMT_NSGCFGIRPT_SHFT                                               0x7
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_SSC_VMIDMT_NSGCFGIRPT_BMSK                                                    0x40
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_SSC_VMIDMT_NSGCFGIRPT_SHFT                                                     0x6
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_5_VMIDMT_NSGCFGIRPT_BMSK                                              0x20
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RESERVE_5_VMIDMT_NSGCFGIRPT_SHFT                                               0x5
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QUPV3_NORTH_VMIDMT_NSGCFGIRPT_BMSK                                            0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QUPV3_NORTH_VMIDMT_NSGCFGIRPT_SHFT                                             0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_SSC_SDC_VMIDMT_NSGCFGIRPT_BMSK                                                 0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_SSC_SDC_VMIDMT_NSGCFGIRPT_SHFT                                                 0x3
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QUPV3_SOUTH_VMIDMT_NSGCFGIRPT_BMSK                                             0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_QUPV3_SOUTH_VMIDMT_NSGCFGIRPT_SHFT                                             0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RPM_VMIDMT_NSGCFGIRPT_BMSK                                                     0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_RPM_VMIDMT_NSGCFGIRPT_SHFT                                                     0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_CRYPTO0_VMIDMT_NSGCFGIRPT_BMSK                                                 0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_CRYPTO0_VMIDMT_NSGCFGIRPT_SHFT                                                 0x0

#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00003040)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RMSK                                                                0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                            0x20000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                               0x11
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                            0x10000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                               0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                             0x8000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                0xf
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                             0x4000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                0xe
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                             0x2000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                0xd
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                             0x1000
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                0xc
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                0x800
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                  0xb
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                              0x400
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                0xa
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_IPA_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                     0x200
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_IPA_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                       0x9
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                               0x100
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                 0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                0x80
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                 0x7
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_SSC_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                      0x40
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_SSC_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                       0x6
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                0x20
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                 0x5
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                              0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                               0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                   0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                   0x3
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                               0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                               0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RPM_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                       0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_RPM_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                       0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_NSGCFGIRPT_ENABLE_BMSK                                   0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_NON_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_NSGCFGIRPT_ENABLE_SHFT                                   0x0

#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00003004)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_RMSK                                                                           0x1e42
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ADDR, HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_LPASS_4_IRQ_OUT_SECURITY_BMSK                                                  0x1000
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_LPASS_4_IRQ_OUT_SECURITY_SHFT                                                     0xc
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_LPASS_12_IRQ_OUT_SECURITY_BMSK                                                  0x800
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_LPASS_12_IRQ_OUT_SECURITY_SHFT                                                    0xb
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_AGGR2_NOC_SMMU_MMU_NSGCFGIRPT_BMSK                                              0x400
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_AGGR2_NOC_SMMU_MMU_NSGCFGIRPT_SHFT                                                0xa
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_AGGR1_NOC_SMMU_MMU_NSGCFGIRPT_BMSK                                              0x200
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_AGGR1_NOC_SMMU_MMU_NSGCFGIRPT_SHFT                                                0x9
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_OGPU_MMU_NSGCFGIRPT_BMSK                                                         0x40
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_OGPU_MMU_NSGCFGIRPT_SHFT                                                          0x6
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_MMSS_BIMC_SMMU_NSGCFGIRPT_BMSK                                                    0x2
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_MMSS_BIMC_SMMU_NSGCFGIRPT_SHFT                                                    0x1

#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_ADDR                                                                (TCSR_TCSR_REGS_REG_BASE      + 0x00003044)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_RMSK                                                                    0x1e42
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_LPASS_4_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                               0x1000
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_LPASS_4_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                                  0xc
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_LPASS_12_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                               0x800
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_LPASS_12_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                                 0xb
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_NSGCFGIRPT_ENABLE_BMSK                                0x400
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_NSGCFGIRPT_ENABLE_SHFT                                  0xa
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_NSGCFGIRPT_ENABLE_BMSK                                0x200
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_NSGCFGIRPT_ENABLE_SHFT                                  0x9
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_OGPU_MMU_NSGCFGIRPT_ENABLE_BMSK                                           0x40
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_OGPU_MMU_NSGCFGIRPT_ENABLE_SHFT                                            0x6
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_NSGCFGIRPT_ENABLE_BMSK                                      0x2
#define HWIO_TCSR_SS_MMU_CFG_NON_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_NSGCFGIRPT_ENABLE_SHFT                                      0x1

#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x00004010)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RMSK                                                                        0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ADDR, HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_17_VMIDMT_GIRPT_BMSK                                                0x20000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_17_VMIDMT_GIRPT_SHFT                                                   0x11
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_16_VMIDMT_GIRPT_BMSK                                                0x10000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_16_VMIDMT_GIRPT_SHFT                                                   0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_15_VMIDMT_GIRPT_BMSK                                                 0x8000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_15_VMIDMT_GIRPT_SHFT                                                    0xf
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_14_VMIDMT_GIRPT_BMSK                                                 0x4000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_14_VMIDMT_GIRPT_SHFT                                                    0xe
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_13_VMIDMT_GIRPT_BMSK                                                 0x2000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_13_VMIDMT_GIRPT_SHFT                                                    0xd
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_12_VMIDMT_GIRPT_BMSK                                                 0x1000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_12_VMIDMT_GIRPT_SHFT                                                    0xc
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QDSS_DAP_VMIDMT_GIRPT_BMSK                                                    0x800
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QDSS_DAP_VMIDMT_GIRPT_SHFT                                                      0xb
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QDSS_TRACE_VMIDMT_GIRPT_BMSK                                                  0x400
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QDSS_TRACE_VMIDMT_GIRPT_SHFT                                                    0xa
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_IPA_VMIDMT_GIRPT_BMSK                                                         0x200
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_IPA_VMIDMT_GIRPT_SHFT                                                           0x9
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_8_VMIDMT_GIRPT_BMSK                                                   0x100
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_8_VMIDMT_GIRPT_SHFT                                                     0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_7_VMIDMT_GIRPT_BMSK                                                    0x80
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_7_VMIDMT_GIRPT_SHFT                                                     0x7
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_SSC_VMIDMT_GIRPT_BMSK                                                          0x40
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_SSC_VMIDMT_GIRPT_SHFT                                                           0x6
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_5_VMIDMT_GIRPT_BMSK                                                    0x20
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RESERVE_5_VMIDMT_GIRPT_SHFT                                                     0x5
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QUPV3_NORTH_VMIDMT_GIRPT_BMSK                                                  0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QUPV3_NORTH_VMIDMT_GIRPT_SHFT                                                   0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_SSC_SDC_VMIDMT_GIRPT_BMSK                                                       0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_SSC_SDC_VMIDMT_GIRPT_SHFT                                                       0x3
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QUPV3_SOUTH_VMIDMT_GIRPT_BMSK                                                   0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_QUPV3_SOUTH_VMIDMT_GIRPT_SHFT                                                   0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RPM_VMIDMT_GIRPT_BMSK                                                           0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_RPM_VMIDMT_GIRPT_SHFT                                                           0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_CRYPTO0_VMIDMT_GIRPT_BMSK                                                       0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_CRYPTO0_VMIDMT_GIRPT_SHFT                                                       0x0

#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00004050)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RMSK                                                                 0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_GIRPT_ENABLE_BMSK                                  0x20000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_GIRPT_ENABLE_SHFT                                     0x11
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_GIRPT_ENABLE_BMSK                                  0x10000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_GIRPT_ENABLE_SHFT                                     0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_GIRPT_ENABLE_BMSK                                   0x8000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_GIRPT_ENABLE_SHFT                                      0xf
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_GIRPT_ENABLE_BMSK                                   0x4000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_GIRPT_ENABLE_SHFT                                      0xe
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_GIRPT_ENABLE_BMSK                                   0x2000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_GIRPT_ENABLE_SHFT                                      0xd
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_GIRPT_ENABLE_BMSK                                   0x1000
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_GIRPT_ENABLE_SHFT                                      0xc
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_GIRPT_ENABLE_BMSK                                      0x800
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_GIRPT_ENABLE_SHFT                                        0xb
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_GIRPT_ENABLE_BMSK                                    0x400
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_GIRPT_ENABLE_SHFT                                      0xa
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_IPA_VMIDMT_GIRPT_ENABLE_BMSK                                           0x200
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_IPA_VMIDMT_GIRPT_ENABLE_SHFT                                             0x9
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_GIRPT_ENABLE_BMSK                                     0x100
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_GIRPT_ENABLE_SHFT                                       0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_GIRPT_ENABLE_BMSK                                      0x80
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_GIRPT_ENABLE_SHFT                                       0x7
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_SSC_VMIDMT_GIRPT_ENABLE_BMSK                                            0x40
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_SSC_VMIDMT_GIRPT_ENABLE_SHFT                                             0x6
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_GIRPT_ENABLE_BMSK                                      0x20
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_GIRPT_ENABLE_SHFT                                       0x5
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_GIRPT_ENABLE_BMSK                                    0x10
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_GIRPT_ENABLE_SHFT                                     0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_GIRPT_ENABLE_BMSK                                         0x8
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_GIRPT_ENABLE_SHFT                                         0x3
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_GIRPT_ENABLE_BMSK                                     0x4
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_GIRPT_ENABLE_SHFT                                     0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RPM_VMIDMT_GIRPT_ENABLE_BMSK                                             0x2
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_RPM_VMIDMT_GIRPT_ENABLE_SHFT                                             0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_GIRPT_ENABLE_BMSK                                         0x1
#define HWIO_TCSR_SS_VMIDMT_CLIENT_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_GIRPT_ENABLE_SHFT                                         0x0

#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x00004014)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_RMSK                                                                            0x1e42
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ADDR, HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_LPASS_7_IRQ_OUT_SECURITY_BMSK                                                   0x1000
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_LPASS_7_IRQ_OUT_SECURITY_SHFT                                                      0xc
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_LPASS_15_IRQ_OUT_SECURITY_BMSK                                                   0x800
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_LPASS_15_IRQ_OUT_SECURITY_SHFT                                                     0xb
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_AGGR2_NOC_SMMU_MMU_GIRPT_BMSK                                                    0x400
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_AGGR2_NOC_SMMU_MMU_GIRPT_SHFT                                                      0xa
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_AGGR1_NOC_SMMU_MMU_GIRPT_BMSK                                                    0x200
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_AGGR1_NOC_SMMU_MMU_GIRPT_SHFT                                                      0x9
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_OGPU_MMU_GIRPT_BMSK                                                               0x40
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_OGPU_MMU_GIRPT_SHFT                                                                0x6
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_MMSS_BIMC_SMMU_GIRPT_BMSK                                                          0x2
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_MMSS_BIMC_SMMU_GIRPT_SHFT                                                          0x1

#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x00004054)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_RMSK                                                                     0x1e42
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_LPASS_7_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                                0x1000
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_LPASS_7_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                                   0xc
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_LPASS_15_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                                0x800
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_LPASS_15_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                                  0xb
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_GIRPT_ENABLE_BMSK                                      0x400
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_GIRPT_ENABLE_SHFT                                        0xa
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_GIRPT_ENABLE_BMSK                                      0x200
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_GIRPT_ENABLE_SHFT                                        0x9
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_OGPU_MMU_GIRPT_ENABLE_BMSK                                                 0x40
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_OGPU_MMU_GIRPT_ENABLE_SHFT                                                  0x6
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_GIRPT_ENABLE_BMSK                                            0x2
#define HWIO_TCSR_SS_MMU_CLIENT_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_GIRPT_ENABLE_SHFT                                            0x1

#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x00005000)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RMSK                                                                           0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ADDR, HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_17_VMIDMT_GCFGIRPT_BMSK                                                0x20000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_17_VMIDMT_GCFGIRPT_SHFT                                                   0x11
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_16_VMIDMT_GCFGIRPT_BMSK                                                0x10000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_16_VMIDMT_GCFGIRPT_SHFT                                                   0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_15_VMIDMT_GCFGIRPT_BMSK                                                 0x8000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_15_VMIDMT_GCFGIRPT_SHFT                                                    0xf
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_14_VMIDMT_GCFGIRPT_BMSK                                                 0x4000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_14_VMIDMT_GCFGIRPT_SHFT                                                    0xe
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_13_VMIDMT_GCFGIRPT_BMSK                                                 0x2000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_13_VMIDMT_GCFGIRPT_SHFT                                                    0xd
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_12_VMIDMT_GCFGIRPT_BMSK                                                 0x1000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_12_VMIDMT_GCFGIRPT_SHFT                                                    0xc
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QDSS_DAP_VMIDMT_GCFGIRPT_BMSK                                                    0x800
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QDSS_DAP_VMIDMT_GCFGIRPT_SHFT                                                      0xb
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QDSS_TRACE_VMIDMT_GCFGIRPT_BMSK                                                  0x400
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QDSS_TRACE_VMIDMT_GCFGIRPT_SHFT                                                    0xa
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_IPA_VMIDMT_GCFGIRPT_BMSK                                                         0x200
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_IPA_VMIDMT_GCFGIRPT_SHFT                                                           0x9
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_8_VMIDMT_GCFGIRPT_BMSK                                                   0x100
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_8_VMIDMT_GCFGIRPT_SHFT                                                     0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_7_VMIDMT_GCFGIRPT_BMSK                                                    0x80
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_7_VMIDMT_GCFGIRPT_SHFT                                                     0x7
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_SSC_VMIDMT_GCFGIRPT_BMSK                                                          0x40
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_SSC_VMIDMT_GCFGIRPT_SHFT                                                           0x6
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_5_VMIDMT_GCFGIRPT_BMSK                                                    0x20
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RESERVE_5_VMIDMT_GCFGIRPT_SHFT                                                     0x5
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QUPV3_NORTH_VMIDMT_GCFGIRPT_BMSK                                                  0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QUPV3_NORTH_VMIDMT_GCFGIRPT_SHFT                                                   0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_SSC_SDC_VMIDMT_GCFGIRPT_BMSK                                                       0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_SSC_SDC_VMIDMT_GCFGIRPT_SHFT                                                       0x3
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QUPV3_SOUTH_VMIDMT_GCFGIRPT_BMSK                                                   0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_QUPV3_SOUTH_VMIDMT_GCFGIRPT_SHFT                                                   0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RPM_VMIDMT_GCFGIRPT_BMSK                                                           0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_RPM_VMIDMT_GCFGIRPT_SHFT                                                           0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_CRYPTO0_VMIDMT_GCFGIRPT_BMSK                                                       0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_CRYPTO0_VMIDMT_GCFGIRPT_SHFT                                                       0x0

#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x00005040)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RMSK                                                                    0x3ffff
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_GCFGIRPT_ENABLE_BMSK                                  0x20000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_17_VMIDMT_GCFGIRPT_ENABLE_SHFT                                     0x11
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_GCFGIRPT_ENABLE_BMSK                                  0x10000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_16_VMIDMT_GCFGIRPT_ENABLE_SHFT                                     0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_GCFGIRPT_ENABLE_BMSK                                   0x8000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_15_VMIDMT_GCFGIRPT_ENABLE_SHFT                                      0xf
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_GCFGIRPT_ENABLE_BMSK                                   0x4000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_14_VMIDMT_GCFGIRPT_ENABLE_SHFT                                      0xe
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_GCFGIRPT_ENABLE_BMSK                                   0x2000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_13_VMIDMT_GCFGIRPT_ENABLE_SHFT                                      0xd
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_GCFGIRPT_ENABLE_BMSK                                   0x1000
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_12_VMIDMT_GCFGIRPT_ENABLE_SHFT                                      0xc
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_GCFGIRPT_ENABLE_BMSK                                      0x800
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QDSS_DAP_VMIDMT_GCFGIRPT_ENABLE_SHFT                                        0xb
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_GCFGIRPT_ENABLE_BMSK                                    0x400
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QDSS_TRACE_VMIDMT_GCFGIRPT_ENABLE_SHFT                                      0xa
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_IPA_VMIDMT_GCFGIRPT_ENABLE_BMSK                                           0x200
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_IPA_VMIDMT_GCFGIRPT_ENABLE_SHFT                                             0x9
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_GCFGIRPT_ENABLE_BMSK                                     0x100
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_8_VMIDMT_GCFGIRPT_ENABLE_SHFT                                       0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_GCFGIRPT_ENABLE_BMSK                                      0x80
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_7_VMIDMT_GCFGIRPT_ENABLE_SHFT                                       0x7
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_SSC_VMIDMT_GCFGIRPT_ENABLE_BMSK                                            0x40
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_SSC_VMIDMT_GCFGIRPT_ENABLE_SHFT                                             0x6
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_GCFGIRPT_ENABLE_BMSK                                      0x20
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RESERVE_5_VMIDMT_GCFGIRPT_ENABLE_SHFT                                       0x5
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_GCFGIRPT_ENABLE_BMSK                                    0x10
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QUPV3_NORTH_VMIDMT_GCFGIRPT_ENABLE_SHFT                                     0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_GCFGIRPT_ENABLE_BMSK                                         0x8
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_SSC_SDC_VMIDMT_GCFGIRPT_ENABLE_SHFT                                         0x3
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_GCFGIRPT_ENABLE_BMSK                                     0x4
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_QUPV3_SOUTH_VMIDMT_GCFGIRPT_ENABLE_SHFT                                     0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RPM_VMIDMT_GCFGIRPT_ENABLE_BMSK                                             0x2
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_RPM_VMIDMT_GCFGIRPT_ENABLE_SHFT                                             0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_GCFGIRPT_ENABLE_BMSK                                         0x1
#define HWIO_TCSR_SS_VMIDMT_CFG_SEC_INTR_ENABLE_CRYPTO0_VMIDMT_GCFGIRPT_ENABLE_SHFT                                         0x0

#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x00005004)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_RMSK                                                                               0x1e42
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ADDR, HWIO_TCSR_SS_MMU_CFG_SEC_INTR_RMSK)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ADDR, m)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_LPASS_6_IRQ_OUT_SECURITY_BMSK                                                      0x1000
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_LPASS_6_IRQ_OUT_SECURITY_SHFT                                                         0xc
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_LPASS_14_IRQ_OUT_SECURITY_BMSK                                                      0x800
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_LPASS_14_IRQ_OUT_SECURITY_SHFT                                                        0xb
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_AGGR2_NOC_SMMU_MMU_GCFGIRPT_BMSK                                                    0x400
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_AGGR2_NOC_SMMU_MMU_GCFGIRPT_SHFT                                                      0xa
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_AGGR1_NOC_SMMU_MMU_GCFGIRPT_BMSK                                                    0x200
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_AGGR1_NOC_SMMU_MMU_GCFGIRPT_SHFT                                                      0x9
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_OGPU_MMU_GCFGIRPT_BMSK                                                               0x40
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_OGPU_MMU_GCFGIRPT_SHFT                                                                0x6
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_MMSS_BIMC_SMMU_GCFGIRPT_BMSK                                                          0x2
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_MMSS_BIMC_SMMU_GCFGIRPT_SHFT                                                          0x1

#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_ADDR                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x00005044)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_RMSK                                                                        0x1e42
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_ADDR, HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_RMSK)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_ADDR,m,v,HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_IN)
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_LPASS_6_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                                   0x1000
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_LPASS_6_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                                      0xc
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_LPASS_14_IRQ_OUT_SECURITY_INTR_ENABLE_BMSK                                   0x800
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_LPASS_14_IRQ_OUT_SECURITY_INTR_ENABLE_SHFT                                     0xb
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_GCFGIRPT_ENABLE_BMSK                                      0x400
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_AGGR2_NOC_SMMU_MMU_GCFGIRPT_ENABLE_SHFT                                        0xa
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_GCFGIRPT_ENABLE_BMSK                                      0x200
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_AGGR1_NOC_SMMU_MMU_GCFGIRPT_ENABLE_SHFT                                        0x9
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_OGPU_MMU_GCFGIRPT_ENABLE_BMSK                                                 0x40
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_OGPU_MMU_GCFGIRPT_ENABLE_SHFT                                                  0x6
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_GCFGIRPT_ENABLE_BMSK                                            0x2
#define HWIO_TCSR_SS_MMU_CFG_SEC_INTR_ENABLE_MMSS_BIMC_SMMU_GCFGIRPT_ENABLE_SHFT                                            0x1

#define HWIO_TCSR_SS_XPU_MSA_INTR0_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00006000)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_RMSK                                                                              0xffffffff
#define HWIO_TCSR_SS_XPU_MSA_INTR0_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR0_ADDR, HWIO_TCSR_SS_XPU_MSA_INTR0_RMSK)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR0_ADDR, m)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_BMSK                                0x80000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_SHFT                                      0x1f
#define HWIO_TCSR_SS_XPU_MSA_INTR0_BOOT_ROM_XPU_MSA_INTR0_BMSK                                                       0x40000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_BOOT_ROM_XPU_MSA_INTR0_SHFT                                                             0x1e
#define HWIO_TCSR_SS_XPU_MSA_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_BMSK                                    0x20000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_SHFT                                          0x1d
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC3_XPU_MSA_INTR0_BMSK                                                          0x10000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC3_XPU_MSA_INTR0_SHFT                                                                0x1c
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC2_XPU_MSA_INTR0_BMSK                                                           0x8000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC2_XPU_MSA_INTR0_SHFT                                                                0x1b
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC1_XPU_MSA_INTR0_BMSK                                                           0x4000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC1_XPU_MSA_INTR0_SHFT                                                                0x1a
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC0_XPU_MSA_INTR0_BMSK                                                           0x2000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_LLCC0_XPU_MSA_INTR0_SHFT                                                                0x19
#define HWIO_TCSR_SS_XPU_MSA_INTR0_UFS_XPU_MSA_INTR0_BMSK                                                             0x1000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_UFS_XPU_MSA_INTR0_SHFT                                                                  0x18
#define HWIO_TCSR_SS_XPU_MSA_INTR0_RESERVE_23_BMSK                                                                     0x800000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_RESERVE_23_SHFT                                                                         0x17
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_SDC_XPU_MSA_INTR0_BMSK                                                          0x400000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_SDC_XPU_MSA_INTR0_SHFT                                                              0x16
#define HWIO_TCSR_SS_XPU_MSA_INTR0_GCC_XPU_MSA_INTR0_BMSK                                                              0x200000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_GCC_XPU_MSA_INTR0_SHFT                                                                  0x15
#define HWIO_TCSR_SS_XPU_MSA_INTR0_MEMNOC_XPU_MSA_INTR0_BMSK                                                           0x100000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_MEMNOC_XPU_MSA_INTR0_SHFT                                                               0x14
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QM_XPU_MSA_INTR0_BMSK                                                                0x80000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QM_XPU_MSA_INTR0_SHFT                                                                   0x13
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QNM_SNOC_XPU_MSA_INTR0_BMSK                                                          0x40000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QNM_SNOC_XPU_MSA_INTR0_SHFT                                                             0x12
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QHS_CNOC_XPU_MSA_INTR0_BMSK                                                          0x20000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QHS_CNOC_XPU_MSA_INTR0_SHFT                                                             0x11
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QHM_AOSS_XPU_MSA_INTR0_BMSK                                                          0x10000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QHM_AOSS_XPU_MSA_INTR0_SHFT                                                             0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SP_XPU_MSA_INTR0_BMSK                                                                 0x8000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SP_XPU_MSA_INTR0_SHFT                                                                    0xf
#define HWIO_TCSR_SS_XPU_MSA_INTR0_PIMEM_MPU_XPU_MSA_INTR0_BMSK                                                          0x4000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_PIMEM_MPU_XPU_MSA_INTR0_SHFT                                                             0xe
#define HWIO_TCSR_SS_XPU_MSA_INTR0_PIMEM_APU_XPU_MSA_INTR0_BMSK                                                          0x2000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_PIMEM_APU_XPU_MSA_INTR0_SHFT                                                             0xd
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_Q6_XPU_MSA_INTR0_BMSK                                                             0x1000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_Q6_XPU_MSA_INTR0_SHFT                                                                0xc
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_XPU_MSA_INTR0_BMSK                                                                 0x800
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_XPU_MSA_INTR0_SHFT                                                                   0xb
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_QUP_XPU_MSA_INTR0_BMSK                                                             0x400
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SSC_QUP_XPU_MSA_INTR0_SHFT                                                               0xa
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SEC_CTRL_XPU_MSA_INTR0_BMSK                                                            0x200
#define HWIO_TCSR_SS_XPU_MSA_INTR0_SEC_CTRL_XPU_MSA_INTR0_SHFT                                                              0x9
#define HWIO_TCSR_SS_XPU_MSA_INTR0_DCC_XPU_MSA_INTR0_BMSK                                                                 0x100
#define HWIO_TCSR_SS_XPU_MSA_INTR0_DCC_XPU_MSA_INTR0_SHFT                                                                   0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR0_OCIMEM_RPU_XPU_MSA_INTR0_BMSK                                                           0x80
#define HWIO_TCSR_SS_XPU_MSA_INTR0_OCIMEM_RPU_XPU_MSA_INTR0_SHFT                                                            0x7
#define HWIO_TCSR_SS_XPU_MSA_INTR0_CRYPTO0_XPU_MSA_INTR0_BMSK                                                              0x40
#define HWIO_TCSR_SS_XPU_MSA_INTR0_CRYPTO0_XPU_MSA_INTR0_SHFT                                                               0x6
#define HWIO_TCSR_SS_XPU_MSA_INTR0_TCSR_MUTEX_XPU_MSA_INTR0_BMSK                                                           0x20
#define HWIO_TCSR_SS_XPU_MSA_INTR0_TCSR_MUTEX_XPU_MSA_INTR0_SHFT                                                            0x5
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QUPV3_NORTH_XPU_MSA_INTR0_BMSK                                                          0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QUPV3_NORTH_XPU_MSA_INTR0_SHFT                                                           0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR0_TCSR_REGS_XPU_MSA_INTR0_BMSK                                                             0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR0_TCSR_REGS_XPU_MSA_INTR0_SHFT                                                             0x3
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QUPV3_SOUTH_XPU_MSA_INTR0_BMSK                                                           0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR0_QUPV3_SOUTH_XPU_MSA_INTR0_SHFT                                                           0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR0_RPM_MPU_XPU_MSA_INTR0_BMSK                                                               0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR0_RPM_MPU_XPU_MSA_INTR0_SHFT                                                               0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR0_PMIC_ARB_XPU_MSA_INTR0_BMSK                                                              0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR0_PMIC_ARB_XPU_MSA_INTR0_SHFT                                                              0x0

#define HWIO_TCSR_SS_XPU_MSA_INTR1_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00006004)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RMSK                                                                                 0x7ffff
#define HWIO_TCSR_SS_XPU_MSA_INTR1_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR1_ADDR, HWIO_TCSR_SS_XPU_MSA_INTR1_RMSK)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR1_ADDR, m)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_50_BMSK                                                                      0x40000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_50_SHFT                                                                         0x12
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_49_BMSK                                                                      0x20000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_49_SHFT                                                                         0x11
#define HWIO_TCSR_SS_XPU_MSA_INTR1_SDC1_ICE_XPU_MSA_INTR1_BMSK                                                          0x10000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_SDC1_ICE_XPU_MSA_INTR1_SHFT                                                             0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_NORTH_XPU_MSA_INTR1_BMSK                                                         0x8000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_NORTH_XPU_MSA_INTR1_SHFT                                                            0xf
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_46_BMSK                                                                       0x4000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_46_SHFT                                                                          0xe
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_45_BMSK                                                                       0x2000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_45_SHFT                                                                          0xd
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_44_BMSK                                                                       0x1000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_RESERVE_44_SHFT                                                                          0xc
#define HWIO_TCSR_SS_XPU_MSA_INTR1_IPA_XPU_MSA_INTR1_BMSK                                                                 0x800
#define HWIO_TCSR_SS_XPU_MSA_INTR1_IPA_XPU_MSA_INTR1_SHFT                                                                   0xb
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_EAST_XPU_MSA_INTR1_BMSK                                                           0x400
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_EAST_XPU_MSA_INTR1_SHFT                                                             0xa
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_SOUTH_XPU_MSA_INTR1_BMSK                                                          0x200
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_SOUTH_XPU_MSA_INTR1_SHFT                                                            0x9
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_WEST_XPU_SEC_INTR1_BMSK                                                           0x100
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TLMM_WEST_XPU_SEC_INTR1_SHFT                                                             0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR1_MDSS_XPU_MSA_INTR1_BMSK                                                                 0x80
#define HWIO_TCSR_SS_XPU_MSA_INTR1_MDSS_XPU_MSA_INTR1_SHFT                                                                  0x7
#define HWIO_TCSR_SS_XPU_MSA_INTR1_UFS_CARD_ICE_XPU_MSA_INTR1_BMSK                                                         0x40
#define HWIO_TCSR_SS_XPU_MSA_INTR1_UFS_CARD_ICE_XPU_MSA_INTR1_SHFT                                                          0x6
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TITAN_XPU_MSA_INTR1_BMSK                                                                0x20
#define HWIO_TCSR_SS_XPU_MSA_INTR1_TITAN_XPU_MSA_INTR1_SHFT                                                                 0x5
#define HWIO_TCSR_SS_XPU_MSA_INTR1_SPDM_XPU_MSA_INTR1_BMSK                                                                 0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR1_SPDM_XPU_MSA_INTR1_SHFT                                                                  0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR1_QXM_MSS_NAV_XPU_MSA_INTR1_BMSK                                                           0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR1_QXM_MSS_NAV_XPU_MSA_INTR1_SHFT                                                           0x3
#define HWIO_TCSR_SS_XPU_MSA_INTR1_QNM_AGGRE2_XPU_MSA_INTR1_BMSK                                                            0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR1_QNM_AGGRE2_XPU_MSA_INTR1_SHFT                                                            0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR1_QNM_AGGRE1_XPU_MSA_INTR1_BMSK                                                            0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR1_QNM_AGGRE1_XPU_MSA_INTR1_SHFT                                                            0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR1_OCIMEM_XPU3_XPU_MSA_INTR1_BMSK                                                           0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR1_OCIMEM_XPU3_XPU_MSA_INTR1_SHFT                                                           0x0

#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00006040)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_RMSK                                                                       0xffffffff
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_ADDR, HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_ENABLE_BMSK                  0x80000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_ENABLE_SHFT                        0x1f
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_BOOT_ROM_XPU_MSA_INTR0_ENABLE_BMSK                                         0x40000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_BOOT_ROM_XPU_MSA_INTR0_ENABLE_SHFT                                               0x1e
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_ENABLE_BMSK                      0x20000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_MSA_INTR0_ENABLE_SHFT                            0x1d
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC3_XPU_MSA_INTR0_ENABLE_BMSK                                            0x10000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC3_XPU_MSA_INTR0_ENABLE_SHFT                                                  0x1c
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC2_XPU_MSA_INTR0_ENABLE_BMSK                                             0x8000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC2_XPU_MSA_INTR0_ENABLE_SHFT                                                  0x1b
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC1_XPU_MSA_INTR0_ENABLE_BMSK                                             0x4000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC1_XPU_MSA_INTR0_ENABLE_SHFT                                                  0x1a
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC0_XPU_MSA_INTR0_ENABLE_BMSK                                             0x2000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_LLCC0_XPU_MSA_INTR0_ENABLE_SHFT                                                  0x19
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_UFS_XPU_MSA_INTR0_ENABLE_BMSK                                               0x1000000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_UFS_XPU_MSA_INTR0_ENABLE_SHFT                                                    0x18
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_RESERVE_23_BMSK                                                              0x800000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_RESERVE_23_SHFT                                                                  0x17
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_SDC_XPU_MSA_INTR0_ENABLE_BMSK                                            0x400000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_SDC_XPU_MSA_INTR0_ENABLE_SHFT                                                0x16
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_GCC_XPU_MSA_INTR0_ENABLE_BMSK                                                0x200000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_GCC_XPU_MSA_INTR0_ENABLE_SHFT                                                    0x15
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_MEMNOC_XPU_MSA_INTR0_ENABLE_BMSK                                             0x100000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_MEMNOC_XPU_MSA_INTR0_ENABLE_SHFT                                                 0x14
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QM_XPU_MSA_INTR0_ENABLE_BMSK                                                  0x80000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QM_XPU_MSA_INTR0_ENABLE_SHFT                                                     0x13
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QNM_SNOC_XPU_MSA_INTR0_ENABLE_BMSK                                            0x40000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QNM_SNOC_XPU_MSA_INTR0_ENABLE_SHFT                                               0x12
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QHS_CNOC_XPU_MSA_INTR0_ENABLE_BMSK                                            0x20000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QHS_CNOC_XPU_MSA_INTR0_ENABLE_SHFT                                               0x11
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QHM_AOSS_XPU_MSA_INTR0_ENABLE_BMSK                                            0x10000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QHM_AOSS_XPU_MSA_INTR0_ENABLE_SHFT                                               0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SP_XPU_MSA_INTR0_ENABLE_BMSK                                                   0x8000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SP_XPU_MSA_INTR0_ENABLE_SHFT                                                      0xf
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_PIMEM_MPU_XPU_MSA_INTR0_ENABLE_BMSK                                            0x4000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_PIMEM_MPU_XPU_MSA_INTR0_ENABLE_SHFT                                               0xe
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_PIMEM_APU_XPU_MSA_INTR0_ENABLE_BMSK                                            0x2000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_PIMEM_APU_XPU_MSA_INTR0_ENABLE_SHFT                                               0xd
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_Q6_XPU_MSA_INTR0_ENABLE_BMSK                                               0x1000
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_Q6_XPU_MSA_INTR0_ENABLE_SHFT                                                  0xc
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_XPU_MSA_INTR0_ENABLE_BMSK                                                   0x800
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_XPU_MSA_INTR0_ENABLE_SHFT                                                     0xb
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_QUP_XPU_MSA_INTR0_ENABLE_BMSK                                               0x400
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SSC_QUP_XPU_MSA_INTR0_ENABLE_SHFT                                                 0xa
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SEC_CTRL_XPU_MSA_INTR0_ENABLE_BMSK                                              0x200
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_SEC_CTRL_XPU_MSA_INTR0_ENABLE_SHFT                                                0x9
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_DCC_XPU_MSA_INTR0_ENABLE_BMSK                                                   0x100
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_DCC_XPU_MSA_INTR0_ENABLE_SHFT                                                     0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_OCIMEM_RPU_XPU_MSA_INTR0_ENABLE_BMSK                                             0x80
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_OCIMEM_RPU_XPU_MSA_INTR0_ENABLE_SHFT                                              0x7
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_CRYPTO0_XPU_MSA_INTR0_ENABLE_BMSK                                                0x40
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_CRYPTO0_XPU_MSA_INTR0_ENABLE_SHFT                                                 0x6
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_TCSR_MUTEX_XPU_MSA_INTR0_ENABLE_BMSK                                             0x20
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_TCSR_MUTEX_XPU_MSA_INTR0_ENABLE_SHFT                                              0x5
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QUPV3_NORTH_XPU_MSA_INTR0_ENABLE_BMSK                                            0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QUPV3_NORTH_XPU_MSA_INTR0_ENABLE_SHFT                                             0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_TCSR_REGS_XPU_MSA_INTR0_ENABLE_BMSK                                               0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_TCSR_REGS_XPU_MSA_INTR0_ENABLE_SHFT                                               0x3
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QUPV3_SOUTH_XPU_MSA_INTR0_ENABLE_BMSK                                             0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_QUPV3_SOUTH_XPU_MSA_INTR0_ENABLE_SHFT                                             0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_RPM_MPU_XPU_MSA_INTR0_ENABLE_BMSK                                                 0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_RPM_MPU_XPU_MSA_INTR0_ENABLE_SHFT                                                 0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_PMIC_ARB_XPU_MSA_INTR0_ENABLE_BMSK                                                0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR0_ENABLE_PMIC_ARB_XPU_MSA_INTR0_ENABLE_SHFT                                                0x0

#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00006044)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RMSK                                                                          0x7ffff
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_ADDR, HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_50_BMSK                                                               0x40000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_50_SHFT                                                                  0x12
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_49_BMSK                                                               0x20000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_49_SHFT                                                                  0x11
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_SDC1_ICE_XPU_MSA_INTR1_ENABLE_BMSK                                            0x10000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_SDC1_ICE_XPU_MSA_INTR1_ENABLE_SHFT                                               0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_NORTH_XPU_MSA_INTR1_ENABLE_BMSK                                           0x8000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_NORTH_XPU_MSA_INTR1_ENABLE_SHFT                                              0xf
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_46_BMSK                                                                0x4000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_46_SHFT                                                                   0xe
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_45_BMSK                                                                0x2000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_45_SHFT                                                                   0xd
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_44_BMSK                                                                0x1000
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_RESERVE_44_SHFT                                                                   0xc
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_IPA_XPU_MSA_INTR1_ENABLE_BMSK                                                   0x800
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_IPA_XPU_MSA_INTR1_ENABLE_SHFT                                                     0xb
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_EAST_XPU_MSA_INTR1_ENABLE_BMSK                                             0x400
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_EAST_XPU_MSA_INTR1_ENABLE_SHFT                                               0xa
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_SOUTH_XPU_MSA_INTR1_ENABLE_BMSK                                            0x200
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_SOUTH_XPU_MSA_INTR1_ENABLE_SHFT                                              0x9
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_BMSK                                             0x100
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_SHFT                                               0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_MDSS_XPU_MSA_INTR1_ENABLE_BMSK                                                   0x80
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_MDSS_XPU_MSA_INTR1_ENABLE_SHFT                                                    0x7
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_UFS_CARD_ICE_XPU_MSA_INTR1_ENABLE_BMSK                                           0x40
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_UFS_CARD_ICE_XPU_MSA_INTR1_ENABLE_SHFT                                            0x6
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TITAN_XPU_MSA_INTR1_ENABLE_BMSK                                                  0x20
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_TITAN_XPU_MSA_INTR1_ENABLE_SHFT                                                   0x5
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_SPDM_XPU_MSA_INTR1_ENABLE_BMSK                                                   0x10
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_SPDM_XPU_MSA_INTR1_ENABLE_SHFT                                                    0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_QXM_MSS_NAV_XPU_MSA_INTR1_ENABLE_BMSK                                             0x8
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_QXM_MSS_NAV_XPU_MSA_INTR1_ENABLE_SHFT                                             0x3
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_QNM_AGGRE2_XPU_MSA_INTR1_ENABLE_BMSK                                              0x4
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_QNM_AGGRE2_XPU_MSA_INTR1_ENABLE_SHFT                                              0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_QNM_AGGRE1_XPU_MSA_INTR1_ENABLE_BMSK                                              0x2
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_QNM_AGGRE1_XPU_MSA_INTR1_ENABLE_SHFT                                              0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_OCIMEM_XPU3_XPU_MSA_INTR1_ENABLE_BMSK                                             0x1
#define HWIO_TCSR_SS_XPU_MSA_INTR1_ENABLE_OCIMEM_XPU3_XPU_MSA_INTR1_ENABLE_SHFT                                             0x0

#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_ADDR                                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00007000)
#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_RMSK                                                                                 0xffff
#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_IN          \
        in_dword_masked(HWIO_TCSR_SPDM_CNT_CLK_CTRL_ADDR, HWIO_TCSR_SPDM_CNT_CLK_CTRL_RMSK)
#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPDM_CNT_CLK_CTRL_ADDR, m)
#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_OUT(v)      \
        out_dword(HWIO_TCSR_SPDM_CNT_CLK_CTRL_ADDR,v)
#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPDM_CNT_CLK_CTRL_ADDR,m,v,HWIO_TCSR_SPDM_CNT_CLK_CTRL_IN)
#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_SPDM_CNT_CLK_MUX_SEL_BMSK                                                            0xffff
#define HWIO_TCSR_SPDM_CNT_CLK_CTRL_SPDM_CNT_CLK_MUX_SEL_SHFT                                                               0x0

#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_ADDR                                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x0000705c)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_RMSK                                                                             0xffffffff
#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_IN          \
        in_dword_masked(HWIO_TCSR_SPDM_WRP_CTI_CTL0_ADDR, HWIO_TCSR_SPDM_WRP_CTI_CTL0_RMSK)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPDM_WRP_CTI_CTL0_ADDR, m)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_OUT(v)      \
        out_dword(HWIO_TCSR_SPDM_WRP_CTI_CTL0_ADDR,v)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPDM_WRP_CTI_CTL0_ADDR,m,v,HWIO_TCSR_SPDM_WRP_CTI_CTL0_IN)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_SPDM_WRP_CTI_CTL0_BMSK                                                           0xffffffff
#define HWIO_TCSR_SPDM_WRP_CTI_CTL0_SPDM_WRP_CTI_CTL0_SHFT                                                                  0x0

#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_ADDR                                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00007060)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_RMSK                                                                             0xffffffff
#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_IN          \
        in_dword_masked(HWIO_TCSR_SPDM_WRP_CTI_CTL1_ADDR, HWIO_TCSR_SPDM_WRP_CTI_CTL1_RMSK)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPDM_WRP_CTI_CTL1_ADDR, m)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_OUT(v)      \
        out_dword(HWIO_TCSR_SPDM_WRP_CTI_CTL1_ADDR,v)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPDM_WRP_CTI_CTL1_ADDR,m,v,HWIO_TCSR_SPDM_WRP_CTI_CTL1_IN)
#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_SPDM_WRP_CTI_CTL1_BMSK                                                           0xffffffff
#define HWIO_TCSR_SPDM_WRP_CTI_CTL1_SPDM_WRP_CTI_CTL1_SHFT                                                                  0x0

#define HWIO_TCSR_SOC_HW_VERSION_ADDR                                                                                (TCSR_TCSR_REGS_REG_BASE      + 0x00008000)
#define HWIO_TCSR_SOC_HW_VERSION_RMSK                                                                                0xffffffff
#define HWIO_TCSR_SOC_HW_VERSION_IN          \
        in_dword_masked(HWIO_TCSR_SOC_HW_VERSION_ADDR, HWIO_TCSR_SOC_HW_VERSION_RMSK)
#define HWIO_TCSR_SOC_HW_VERSION_INM(m)      \
        in_dword_masked(HWIO_TCSR_SOC_HW_VERSION_ADDR, m)
#define HWIO_TCSR_SOC_HW_VERSION_FAMILY_NUMBER_BMSK                                                                  0xf0000000
#define HWIO_TCSR_SOC_HW_VERSION_FAMILY_NUMBER_SHFT                                                                        0x1c
#define HWIO_TCSR_SOC_HW_VERSION_DEVICE_NUMBER_BMSK                                                                   0xfff0000
#define HWIO_TCSR_SOC_HW_VERSION_DEVICE_NUMBER_SHFT                                                                        0x10
#define HWIO_TCSR_SOC_HW_VERSION_MAJOR_VERSION_BMSK                                                                      0xff00
#define HWIO_TCSR_SOC_HW_VERSION_MAJOR_VERSION_SHFT                                                                         0x8
#define HWIO_TCSR_SOC_HW_VERSION_MINOR_VERSION_BMSK                                                                        0xff
#define HWIO_TCSR_SOC_HW_VERSION_MINOR_VERSION_SHFT                                                                         0x0

#define HWIO_TCSR_SOC_EMULATION_TYPE_ADDR                                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00008004)
#define HWIO_TCSR_SOC_EMULATION_TYPE_RMSK                                                                                   0x3
#define HWIO_TCSR_SOC_EMULATION_TYPE_IN          \
        in_dword_masked(HWIO_TCSR_SOC_EMULATION_TYPE_ADDR, HWIO_TCSR_SOC_EMULATION_TYPE_RMSK)
#define HWIO_TCSR_SOC_EMULATION_TYPE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SOC_EMULATION_TYPE_ADDR, m)
#define HWIO_TCSR_SOC_EMULATION_TYPE_SOC_EMULATION_TYPE_BMSK                                                                0x3
#define HWIO_TCSR_SOC_EMULATION_TYPE_SOC_EMULATION_TYPE_SHFT                                                                0x0

#define HWIO_TCSR_TIMEOUT_INTR_STATUS_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x00008020)
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RMSK                                                                           0xffffffff
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_IN          \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_STATUS_ADDR, HWIO_TCSR_TIMEOUT_INTR_STATUS_RMSK)
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_STATUS_ADDR, m)
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_31_TIMEOUT_SLAVE_INTR_BMSK                                             0x80000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_31_TIMEOUT_SLAVE_INTR_SHFT                                                   0x1f
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_30_TIMEOUT_SLAVE_INTR_BMSK                                             0x40000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_30_TIMEOUT_SLAVE_INTR_SHFT                                                   0x1e
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_29_TIMEOUT_SLAVE_INTR_BMSK                                             0x20000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_29_TIMEOUT_SLAVE_INTR_SHFT                                                   0x1d
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_28_TIMEOUT_SLAVE_INTR_BMSK                                             0x10000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_28_TIMEOUT_SLAVE_INTR_SHFT                                                   0x1c
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_27_TIMEOUT_SLAVE_INTR_BMSK                                              0x8000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_27_TIMEOUT_SLAVE_INTR_SHFT                                                   0x1b
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_26_TIMEOUT_SLAVE_INTR_BMSK                                              0x4000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_26_TIMEOUT_SLAVE_INTR_SHFT                                                   0x1a
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_25_TIMEOUT_SLAVE_INTR_BMSK                                              0x2000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_25_TIMEOUT_SLAVE_INTR_SHFT                                                   0x19
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_ECAHB_TSLV_INTR_BMSK                                                       0x1000000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_ECAHB_TSLV_INTR_SHFT                                                            0x18
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_LPASS_IRQ_OUT_AHB_TIMEOUT2_BMSK                                                  0x800000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_LPASS_IRQ_OUT_AHB_TIMEOUT2_SHFT                                                      0x17
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_LPASS_IRQ_OUT_AHB_TIMEOUT1_BMSK                                                  0x400000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_LPASS_IRQ_OUT_AHB_TIMEOUT1_SHFT                                                      0x16
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_LPASS_IRQ_OUT_AHB_TIMEOUT0_BMSK                                                  0x200000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_LPASS_IRQ_OUT_AHB_TIMEOUT0_SHFT                                                      0x15
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_TCSR_WAHB_TSLV_INTR_BMSK                                                    0x100000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_TCSR_WAHB_TSLV_INTR_SHFT                                                        0x14
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_19_TIMEOUT_SLAVE_INTR_BMSK                                                0x80000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_19_TIMEOUT_SLAVE_INTR_SHFT                                                   0x13
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_TURING_IRQ_OUT_AHB_TIMEOUT0_BMSK                                                  0x40000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_TURING_IRQ_OUT_AHB_TIMEOUT0_SHFT                                                     0x12
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_17_TIMEOUT_SLAVE_INTR_BMSK                                                0x20000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_17_TIMEOUT_SLAVE_INTR_SHFT                                                   0x11
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_16_TIMEOUT_SLAVE_INTR_BMSK                                                0x10000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_16_TIMEOUT_SLAVE_INTR_SHFT                                                   0x10
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_15_TIMEOUT_SLAVE_INTR_BMSK                                                 0x8000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_15_TIMEOUT_SLAVE_INTR_SHFT                                                    0xf
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_14_TIMEOUT_SLAVE_INTR_BMSK                                                 0x4000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_14_TIMEOUT_SLAVE_INTR_SHFT                                                    0xe
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_13_TIMEOUT_SLAVE_INTR_BMSK                                                 0x2000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_13_TIMEOUT_SLAVE_INTR_SHFT                                                    0xd
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_12_TIMEOUT_SLAVE_INTR_BMSK                                                 0x1000
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_12_TIMEOUT_SLAVE_INTR_SHFT                                                    0xc
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_TCSR_WAPB_TSLV_IRQ_BMSK                                                        0x800
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_TCSR_WAPB_TSLV_IRQ_SHFT                                                          0xb
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_BMSK                                                   0x400
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_SHFT                                                     0xa
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_9_TIMEOUT_SLAVE_INTR_BMSK                                                   0x200
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_9_TIMEOUT_SLAVE_INTR_SHFT                                                     0x9
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_8_TIMEOUT_SLAVE_INTR_BMSK                                                   0x100
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_8_TIMEOUT_SLAVE_INTR_SHFT                                                     0x8
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_7_TIMEOUT_SLAVE_INTR_BMSK                                                    0x80
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_7_TIMEOUT_SLAVE_INTR_SHFT                                                     0x7
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_TCSR_NOC_INTR_BMSK                                                              0x40
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_WCSS_TCSR_NOC_INTR_SHFT                                                               0x6
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_5_TIMEOUT_SLAVE_INTR_BMSK                                                    0x20
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_5_TIMEOUT_SLAVE_INTR_SHFT                                                     0x5
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_4_TIMEOUT_SLAVE_INTR_BMSK                                                    0x10
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_4_TIMEOUT_SLAVE_INTR_SHFT                                                     0x4
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_3_TIMEOUT_SLAVE_INTR_BMSK                                                     0x8
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_3_TIMEOUT_SLAVE_INTR_SHFT                                                     0x3
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_2_TIMEOUT_SLAVE_INTR_BMSK                                                     0x4
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_2_TIMEOUT_SLAVE_INTR_SHFT                                                     0x2
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_1_TIMEOUT_SLAVE_INTR_BMSK                                                     0x2
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_1_TIMEOUT_SLAVE_INTR_SHFT                                                     0x1
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_0_TIMEOUT_SLAVE_INTR_BMSK                                                     0x1
#define HWIO_TCSR_TIMEOUT_INTR_STATUS_RESERVE_0_TIMEOUT_SLAVE_INTR_SHFT                                                     0x0

#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00027000)
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RMSK                                                                       0xffffffff
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_ADDR, HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RMSK)
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_ADDR, m)
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_ADDR,v)
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_ADDR,m,v,HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_IN)
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x80000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1f
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x40000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1e
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x20000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1d
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x10000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1c
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x8000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1b
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x4000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1a
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x2000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x19
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_BMSK                                            0x1000000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_SHFT                                                 0x18
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_BMSK                                       0x800000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_SHFT                                           0x17
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_BMSK                                       0x400000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_SHFT                                           0x16
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                       0x200000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                           0x15
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_BMSK                                         0x100000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_SHFT                                             0x14
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x80000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x13
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                       0x40000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                          0x12
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x20000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x11
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x10000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x10
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x8000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xf
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x4000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xe
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x2000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xd
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x1000
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xc
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_BMSK                                             0x800
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_SHFT                                               0xb
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_BMSK                                        0x400
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_SHFT                                          0xa
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x200
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x9
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x100
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x8
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x80
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x7
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_BMSK                                                   0x40
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_SHFT                                                    0x6
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x20
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x5
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x10
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x4
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x8
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x3
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x4
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x2
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x2
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x1
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x1
#define HWIO_TCSR_TIMEOUT_INTR_RPM_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x0

#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x00028000)
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RMSK                                                                      0xffffffff
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_ADDR, HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RMSK)
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_ADDR, m)
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_ADDR,v)
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_ADDR,m,v,HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_IN)
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                 0x80000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x1f
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                 0x40000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x1e
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                 0x20000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x1d
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                 0x10000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x1c
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x8000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x1b
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x4000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x1a
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x2000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x19
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_BMSK                                           0x1000000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_SHFT                                                0x18
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_BMSK                                      0x800000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_SHFT                                          0x17
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_BMSK                                      0x400000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_SHFT                                          0x16
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                      0x200000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                          0x15
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_BMSK                                        0x100000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_SHFT                                            0x14
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                    0x80000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x13
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                      0x40000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                         0x12
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                    0x20000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x11
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                    0x10000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x10
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x8000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0xf
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x4000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0xe
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x2000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0xd
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x1000
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0xc
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_BMSK                                            0x800
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_SHFT                                              0xb
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_BMSK                                       0x400
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_SHFT                                         0xa
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x200
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x9
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x100
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x8
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x80
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x7
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_BMSK                                                  0x40
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_SHFT                                                   0x6
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x20
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x5
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x10
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x4
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x8
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x3
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x4
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x2
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x2
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x1
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x1
#define HWIO_TCSR_TIMEOUT_INTR_HMSS_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0x0

#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x00029000)
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RMSK                                                                     0xffffffff
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_ADDR, HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RMSK)
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_ADDR, m)
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_ADDR,v)
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_ADDR,m,v,HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_IN)
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                0x80000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x1f
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                0x40000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x1e
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                0x20000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x1d
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                0x10000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x1c
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                 0x8000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x1b
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                 0x4000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x1a
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                 0x2000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x19
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_BMSK                                          0x1000000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_SHFT                                               0x18
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_BMSK                                     0x800000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_SHFT                                         0x17
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_BMSK                                     0x400000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_SHFT                                         0x16
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                     0x200000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                         0x15
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_BMSK                                       0x100000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_SHFT                                           0x14
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x80000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x13
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                     0x40000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                        0x12
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x20000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x11
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x10000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0x10
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                    0x8000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0xf
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                    0x4000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0xe
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                    0x2000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0xd
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                    0x1000
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0xc
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_BMSK                                           0x800
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_SHFT                                             0xb
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_BMSK                                      0x400
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_SHFT                                        0xa
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x200
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x9
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x100
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x8
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x80
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x7
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_BMSK                                                 0x40
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_SHFT                                                  0x6
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x20
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x5
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x10
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x4
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x8
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x3
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x4
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x2
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x2
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x1
#define HWIO_TCSR_TIMEOUT_INTR_LPASS_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x0

#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0002a000)
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RMSK                                                                       0xffffffff
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_ADDR, HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RMSK)
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_ADDR, m)
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_ADDR,v)
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_ADDR,m,v,HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_IN)
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x80000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1f
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x40000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1e
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x20000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1d
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x10000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1c
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x8000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1b
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x4000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x1a
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x2000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x19
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_BMSK                                            0x1000000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_SHFT                                                 0x18
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_BMSK                                       0x800000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_SHFT                                           0x17
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_BMSK                                       0x400000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_SHFT                                           0x16
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                       0x200000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                           0x15
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_BMSK                                         0x100000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_SHFT                                             0x14
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x80000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x13
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                       0x40000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                          0x12
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x20000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x11
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x10000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                        0x10
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x8000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xf
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x4000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xe
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x2000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xd
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x1000
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                         0xc
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_BMSK                                             0x800
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_SHFT                                               0xb
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_BMSK                                        0x400
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_SHFT                                          0xa
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x200
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x9
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                        0x100
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x8
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x80
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x7
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_BMSK                                                   0x40
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_SHFT                                                    0x6
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x20
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x5
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                         0x10
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x4
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x8
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x3
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x4
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x2
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x2
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x1
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                          0x1
#define HWIO_TCSR_TIMEOUT_INTR_MSS_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                          0x0

#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_ADDR                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0002b000)
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RMSK                                                                    0xffffffff
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_ADDR, HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RMSK)
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_ADDR, m)
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_ADDR,v)
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_ADDR,m,v,HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_IN)
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                               0x80000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_31_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x1f
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                               0x40000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_30_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x1e
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                               0x20000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_29_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x1d
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                               0x10000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_28_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x1c
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                0x8000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_27_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x1b
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                0x4000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_26_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x1a
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                0x2000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_25_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x19
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_BMSK                                         0x1000000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_ECAHB_TSLV_INTR_ENABLE_SHFT                                              0x18
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_BMSK                                    0x800000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT2_ENABLE_SHFT                                        0x17
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_BMSK                                    0x400000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT1_ENABLE_SHFT                                        0x16
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                    0x200000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_LPASS_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                        0x15
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_BMSK                                      0x100000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_TCSR_WAHB_TSLV_INTR_ENABLE_SHFT                                          0x14
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x80000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_19_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x13
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_BMSK                                    0x40000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_TURING_IRQ_OUT_AHB_TIMEOUT0_ENABLE_SHFT                                       0x12
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x20000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_17_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x11
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                  0x10000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_16_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                     0x10
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x8000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_15_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0xf
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x4000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_14_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0xe
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x2000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_13_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0xd
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                   0x1000
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_12_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                      0xc
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_BMSK                                          0x800
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_TCSR_WAPB_TSLV_IRQ_ENABLE_SHFT                                            0xb
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_BMSK                                     0x400
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_MSS_CONFIG_TIMEOUT_SLAVE_IRQ_ENABLE_SHFT                                       0xa
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x200
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_9_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x9
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                     0x100
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_8_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x8
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x80
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_7_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x7
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_BMSK                                                0x40
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_WCSS_TCSR_NOC_INTR_ENABLE_SHFT                                                 0x6
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x20
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_5_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x5
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                      0x10
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_4_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x4
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x8
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_3_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x3
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x4
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_2_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x2
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x2
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_1_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x1
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_BMSK                                       0x1
#define HWIO_TCSR_TIMEOUT_INTR_TURING_ENABLE_RESERVE_0_TIMEOUT_SLAVE_INTR_ENABLE_SHFT                                       0x0

#define HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00008070)
#define HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_RMSK                                                                              0x1
#define HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_IN          \
        in_dword_masked(HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_ADDR, HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_RMSK)
#define HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_INM(m)      \
        in_dword_masked(HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_ADDR, m)
#define HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_SRAM_REDUNDANCY_CRC_ERR_BMSK                                                      0x1
#define HWIO_TCSR_SRAM_REDUNDANCY_CRC_ERR_SRAM_REDUNDANCY_CRC_ERR_SHFT                                                      0x0

#define HWIO_TCSR_TCSR_CLK_EN_ADDR                                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x0000907c)
#define HWIO_TCSR_TCSR_CLK_EN_RMSK                                                                                          0x1
#define HWIO_TCSR_TCSR_CLK_EN_IN          \
        in_dword_masked(HWIO_TCSR_TCSR_CLK_EN_ADDR, HWIO_TCSR_TCSR_CLK_EN_RMSK)
#define HWIO_TCSR_TCSR_CLK_EN_INM(m)      \
        in_dword_masked(HWIO_TCSR_TCSR_CLK_EN_ADDR, m)
#define HWIO_TCSR_TCSR_CLK_EN_OUT(v)      \
        out_dword(HWIO_TCSR_TCSR_CLK_EN_ADDR,v)
#define HWIO_TCSR_TCSR_CLK_EN_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TCSR_CLK_EN_ADDR,m,v,HWIO_TCSR_TCSR_CLK_EN_IN)
#define HWIO_TCSR_TCSR_CLK_EN_TCSR_CLK_EN_BMSK                                                                              0x1
#define HWIO_TCSR_TCSR_CLK_EN_TCSR_CLK_EN_SHFT                                                                              0x0

#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0000a100)
#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_RMSK                                                                                 0x1
#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_IN          \
        in_dword_masked(HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_ADDR, HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_RMSK)
#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_INM(m)      \
        in_dword_masked(HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_ADDR, m)
#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_OUT(v)      \
        out_dword(HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_ADDR,v)
#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_ADDR,m,v,HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_IN)
#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_TCSR_IPA_WARMBOOT_EN_BMSK                                                            0x1
#define HWIO_TCSR_TCSR_IPA_WARMBOOT_EN_TCSR_IPA_WARMBOOT_EN_SHFT                                                            0x0

#define HWIO_TCSR_SYS_POWER_CTRL_ADDR                                                                                (TCSR_TCSR_REGS_REG_BASE      + 0x0000a000)
#define HWIO_TCSR_SYS_POWER_CTRL_RMSK                                                                                    0xffff
#define HWIO_TCSR_SYS_POWER_CTRL_IN          \
        in_dword_masked(HWIO_TCSR_SYS_POWER_CTRL_ADDR, HWIO_TCSR_SYS_POWER_CTRL_RMSK)
#define HWIO_TCSR_SYS_POWER_CTRL_INM(m)      \
        in_dword_masked(HWIO_TCSR_SYS_POWER_CTRL_ADDR, m)
#define HWIO_TCSR_SYS_POWER_CTRL_OUT(v)      \
        out_dword(HWIO_TCSR_SYS_POWER_CTRL_ADDR,v)
#define HWIO_TCSR_SYS_POWER_CTRL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SYS_POWER_CTRL_ADDR,m,v,HWIO_TCSR_SYS_POWER_CTRL_IN)
#define HWIO_TCSR_SYS_POWER_CTRL_SYS_POWER_CTRL_BMSK                                                                     0xffff
#define HWIO_TCSR_SYS_POWER_CTRL_SYS_POWER_CTRL_SHFT                                                                        0x0

#define HWIO_TCSR_USB_CORE_ID_ADDR                                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x0000a004)
#define HWIO_TCSR_USB_CORE_ID_RMSK                                                                                          0x3
#define HWIO_TCSR_USB_CORE_ID_IN          \
        in_dword_masked(HWIO_TCSR_USB_CORE_ID_ADDR, HWIO_TCSR_USB_CORE_ID_RMSK)
#define HWIO_TCSR_USB_CORE_ID_INM(m)      \
        in_dword_masked(HWIO_TCSR_USB_CORE_ID_ADDR, m)
#define HWIO_TCSR_USB_CORE_ID_OUT(v)      \
        out_dword(HWIO_TCSR_USB_CORE_ID_ADDR,v)
#define HWIO_TCSR_USB_CORE_ID_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_USB_CORE_ID_ADDR,m,v,HWIO_TCSR_USB_CORE_ID_IN)
#define HWIO_TCSR_USB_CORE_ID_USB_CORE_ID_BMSK                                                                              0x3
#define HWIO_TCSR_USB_CORE_ID_USB_CORE_ID_SHFT                                                                              0x0

#define HWIO_TCSR_SPARE_REG0_ADDR                                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0000a044)
#define HWIO_TCSR_SPARE_REG0_RMSK                                                                                    0xffffffff
#define HWIO_TCSR_SPARE_REG0_IN          \
        in_dword_masked(HWIO_TCSR_SPARE_REG0_ADDR, HWIO_TCSR_SPARE_REG0_RMSK)
#define HWIO_TCSR_SPARE_REG0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPARE_REG0_ADDR, m)
#define HWIO_TCSR_SPARE_REG0_OUT(v)      \
        out_dword(HWIO_TCSR_SPARE_REG0_ADDR,v)
#define HWIO_TCSR_SPARE_REG0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPARE_REG0_ADDR,m,v,HWIO_TCSR_SPARE_REG0_IN)
#define HWIO_TCSR_SPARE_REG0_SPARE_REG0_BMSK                                                                         0xffffffff
#define HWIO_TCSR_SPARE_REG0_SPARE_REG0_SHFT                                                                                0x0

#define HWIO_TCSR_SPARE_REG1_ADDR                                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0000a048)
#define HWIO_TCSR_SPARE_REG1_RMSK                                                                                    0xffffffff
#define HWIO_TCSR_SPARE_REG1_IN          \
        in_dword_masked(HWIO_TCSR_SPARE_REG1_ADDR, HWIO_TCSR_SPARE_REG1_RMSK)
#define HWIO_TCSR_SPARE_REG1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPARE_REG1_ADDR, m)
#define HWIO_TCSR_SPARE_REG1_OUT(v)      \
        out_dword(HWIO_TCSR_SPARE_REG1_ADDR,v)
#define HWIO_TCSR_SPARE_REG1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPARE_REG1_ADDR,m,v,HWIO_TCSR_SPARE_REG1_IN)
#define HWIO_TCSR_SPARE_REG1_SPARE_REG1_BMSK                                                                         0xffffffff
#define HWIO_TCSR_SPARE_REG1_SPARE_REG1_SHFT                                                                                0x0

#define HWIO_TCSR_SPARE_REG2_ADDR                                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0000a04c)
#define HWIO_TCSR_SPARE_REG2_RMSK                                                                                          0xff
#define HWIO_TCSR_SPARE_REG2_IN          \
        in_dword_masked(HWIO_TCSR_SPARE_REG2_ADDR, HWIO_TCSR_SPARE_REG2_RMSK)
#define HWIO_TCSR_SPARE_REG2_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPARE_REG2_ADDR, m)
#define HWIO_TCSR_SPARE_REG2_OUT(v)      \
        out_dword(HWIO_TCSR_SPARE_REG2_ADDR,v)
#define HWIO_TCSR_SPARE_REG2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPARE_REG2_ADDR,m,v,HWIO_TCSR_SPARE_REG2_IN)
#define HWIO_TCSR_SPARE_REG2_SPARE_REG2_BMSK                                                                               0xff
#define HWIO_TCSR_SPARE_REG2_SPARE_REG2_SHFT                                                                                0x0

#define HWIO_TCSR_SPARE_REG3_ADDR                                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0000a050)
#define HWIO_TCSR_SPARE_REG3_RMSK                                                                                          0xff
#define HWIO_TCSR_SPARE_REG3_IN          \
        in_dword_masked(HWIO_TCSR_SPARE_REG3_ADDR, HWIO_TCSR_SPARE_REG3_RMSK)
#define HWIO_TCSR_SPARE_REG3_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPARE_REG3_ADDR, m)
#define HWIO_TCSR_SPARE_REG3_OUT(v)      \
        out_dword(HWIO_TCSR_SPARE_REG3_ADDR,v)
#define HWIO_TCSR_SPARE_REG3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPARE_REG3_ADDR,m,v,HWIO_TCSR_SPARE_REG3_IN)
#define HWIO_TCSR_SPARE_REG3_SPARE_REG3_BMSK                                                                               0xff
#define HWIO_TCSR_SPARE_REG3_SPARE_REG3_SHFT                                                                                0x0

#define HWIO_TCSR_SPARE_REG4_ADDR                                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0000a054)
#define HWIO_TCSR_SPARE_REG4_RMSK                                                                                          0xff
#define HWIO_TCSR_SPARE_REG4_IN          \
        in_dword_masked(HWIO_TCSR_SPARE_REG4_ADDR, HWIO_TCSR_SPARE_REG4_RMSK)
#define HWIO_TCSR_SPARE_REG4_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPARE_REG4_ADDR, m)
#define HWIO_TCSR_SPARE_REG4_OUT(v)      \
        out_dword(HWIO_TCSR_SPARE_REG4_ADDR,v)
#define HWIO_TCSR_SPARE_REG4_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPARE_REG4_ADDR,m,v,HWIO_TCSR_SPARE_REG4_IN)
#define HWIO_TCSR_SPARE_REG4_SPARE_REG4_BMSK                                                                               0xff
#define HWIO_TCSR_SPARE_REG4_SPARE_REG4_SHFT                                                                                0x0

#define HWIO_TCSR_SPARE_REG5_ADDR                                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0000a058)
#define HWIO_TCSR_SPARE_REG5_RMSK                                                                                          0xff
#define HWIO_TCSR_SPARE_REG5_IN          \
        in_dword_masked(HWIO_TCSR_SPARE_REG5_ADDR, HWIO_TCSR_SPARE_REG5_RMSK)
#define HWIO_TCSR_SPARE_REG5_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPARE_REG5_ADDR, m)
#define HWIO_TCSR_SPARE_REG5_OUT(v)      \
        out_dword(HWIO_TCSR_SPARE_REG5_ADDR,v)
#define HWIO_TCSR_SPARE_REG5_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPARE_REG5_ADDR,m,v,HWIO_TCSR_SPARE_REG5_IN)
#define HWIO_TCSR_SPARE_REG5_SPARE_REG5_BMSK                                                                               0xff
#define HWIO_TCSR_SPARE_REG5_SPARE_REG5_SHFT                                                                                0x0

#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000a05c)
#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_RMSK                                                                         0xffffffff
#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_IN          \
        in_dword_masked(HWIO_TCSR_SPARE_QGIC_INTERRUPTS_ADDR, HWIO_TCSR_SPARE_QGIC_INTERRUPTS_RMSK)
#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_INM(m)      \
        in_dword_masked(HWIO_TCSR_SPARE_QGIC_INTERRUPTS_ADDR, m)
#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_OUT(v)      \
        out_dword(HWIO_TCSR_SPARE_QGIC_INTERRUPTS_ADDR,v)
#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SPARE_QGIC_INTERRUPTS_ADDR,m,v,HWIO_TCSR_SPARE_QGIC_INTERRUPTS_IN)
#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_SPARE_QGIC_INTERRUPTS_BMSK                                                   0xffffffff
#define HWIO_TCSR_SPARE_QGIC_INTERRUPTS_SPARE_QGIC_INTERRUPTS_SHFT                                                          0x0

#define HWIO_TCSR_UFS_SCM_FAULT_IRQ_ADDR                                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x0000a070)
#define HWIO_TCSR_UFS_SCM_FAULT_IRQ_RMSK                                                                                    0x1
#define HWIO_TCSR_UFS_SCM_FAULT_IRQ_IN          \
        in_dword_masked(HWIO_TCSR_UFS_SCM_FAULT_IRQ_ADDR, HWIO_TCSR_UFS_SCM_FAULT_IRQ_RMSK)
#define HWIO_TCSR_UFS_SCM_FAULT_IRQ_INM(m)      \
        in_dword_masked(HWIO_TCSR_UFS_SCM_FAULT_IRQ_ADDR, m)
#define HWIO_TCSR_UFS_SCM_FAULT_IRQ_UFS_SCM_FAULT_IRQ_BMSK                                                                  0x1
#define HWIO_TCSR_UFS_SCM_FAULT_IRQ_UFS_SCM_FAULT_IRQ_SHFT                                                                  0x0

#define HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x0000a074)
#define HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_RMSK                                                                                  0x1
#define HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_IN          \
        in_dword_masked(HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_ADDR, HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_RMSK)
#define HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_INM(m)      \
        in_dword_masked(HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_ADDR, m)
#define HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_SDCC5_SCM_FAULT_IRQ_BMSK                                                              0x1
#define HWIO_TCSR_SDCC5_SCM_FAULT_IRQ_SDCC5_SCM_FAULT_IRQ_SHFT                                                              0x0

#define HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x0000a078)
#define HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_RMSK                                                                                  0x1
#define HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_IN          \
        in_dword_masked(HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_ADDR, HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_RMSK)
#define HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_INM(m)      \
        in_dword_masked(HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_ADDR, m)
#define HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_SDCC1_SCM_FAULT_IRQ_BMSK                                                              0x1
#define HWIO_TCSR_SDCC1_SCM_FAULT_IRQ_SDCC1_SCM_FAULT_IRQ_SHFT                                                              0x0

#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_ADDR                                                                  (TCSR_TCSR_REGS_REG_BASE      + 0x00021014)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_RMSK                                                                    0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_SP_INT_SEL_OUT_0_BMSK                                   0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_SP_INT_SEL_OUT_0_SHFT                                        0x8
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_TOP_QUPV3_0_SE_SP_INT_SEL_OUT_0_BMSK                                        0xff
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_0_TOP_QUPV3_0_SE_SP_INT_SEL_OUT_0_SHFT                                         0x0

#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_ADDR                                                                  (TCSR_TCSR_REGS_REG_BASE      + 0x00021010)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_RMSK                                                                    0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_SP_INT_SEL_OUT_0_BMSK                                   0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_SP_INT_SEL_OUT_0_SHFT                                        0x8
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_TOP_QUPV3_1_SE_SP_INT_SEL_OUT_0_BMSK                                        0xff
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_0_TOP_QUPV3_1_SE_SP_INT_SEL_OUT_0_SHFT                                         0x0

#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_ADDR                                                                  (TCSR_TCSR_REGS_REG_BASE      + 0x0002101c)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_RMSK                                                                    0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_SP_INT_SEL_OUT_1_BMSK                                   0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_SP_INT_SEL_OUT_1_SHFT                                        0x8
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_TOP_QUPV3_0_SE_SP_INT_SEL_OUT_1_BMSK                                        0xff
#define HWIO_TCSR_TOP_QUPV3_0_SP_INT_SEL_OUT_1_TOP_QUPV3_0_SE_SP_INT_SEL_OUT_1_SHFT                                         0x0

#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_ADDR                                                                  (TCSR_TCSR_REGS_REG_BASE      + 0x00021018)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_RMSK                                                                    0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_SP_INT_SEL_OUT_1_BMSK                                   0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_SP_INT_SEL_OUT_1_SHFT                                        0x8
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_TOP_QUPV3_1_SE_SP_INT_SEL_OUT_1_BMSK                                        0xff
#define HWIO_TCSR_TOP_QUPV3_1_SP_INT_SEL_OUT_1_TOP_QUPV3_1_SE_SP_INT_SEL_OUT_1_SHFT                                         0x0

#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b044)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_SSC_INT_SEL_OUT_0_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_SSC_INT_SEL_OUT_0_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_TOP_QUPV3_0_SE_SSC_INT_SEL_OUT_0_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_0_TOP_QUPV3_0_SE_SSC_INT_SEL_OUT_0_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b040)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_SSC_INT_SEL_OUT_0_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_SSC_INT_SEL_OUT_0_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_TOP_QUPV3_1_SE_SSC_INT_SEL_OUT_0_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_0_TOP_QUPV3_1_SE_SSC_INT_SEL_OUT_0_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b04c)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_SSC_INT_SEL_OUT_1_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_SSC_INT_SEL_OUT_1_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_TOP_QUPV3_0_SE_SSC_INT_SEL_OUT_1_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_0_SSC_INT_SEL_OUT_1_TOP_QUPV3_0_SE_SSC_INT_SEL_OUT_1_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b048)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_SSC_INT_SEL_OUT_1_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_SSC_INT_SEL_OUT_1_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_TOP_QUPV3_1_SE_SSC_INT_SEL_OUT_1_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_1_SSC_INT_SEL_OUT_1_TOP_QUPV3_1_SE_SSC_INT_SEL_OUT_1_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b054)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_MSS_INT_SEL_OUT_0_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_MSS_INT_SEL_OUT_0_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_TOP_QUPV3_0_SE_MSS_INT_SEL_OUT_0_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_0_TOP_QUPV3_0_SE_MSS_INT_SEL_OUT_0_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b050)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_MSS_INT_SEL_OUT_0_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_MSS_INT_SEL_OUT_0_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_TOP_QUPV3_1_SE_MSS_INT_SEL_OUT_0_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_0_TOP_QUPV3_1_SE_MSS_INT_SEL_OUT_0_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b05c)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_MSS_INT_SEL_OUT_1_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_MSS_INT_SEL_OUT_1_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_TOP_QUPV3_0_SE_MSS_INT_SEL_OUT_1_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_0_MSS_INT_SEL_OUT_1_TOP_QUPV3_0_SE_MSS_INT_SEL_OUT_1_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b058)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_RMSK                                                                   0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_MSS_INT_SEL_OUT_1_BMSK                                 0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_MSS_INT_SEL_OUT_1_SHFT                                      0x8
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_TOP_QUPV3_1_SE_MSS_INT_SEL_OUT_1_BMSK                                      0xff
#define HWIO_TCSR_TOP_QUPV3_1_MSS_INT_SEL_OUT_1_TOP_QUPV3_1_SE_MSS_INT_SEL_OUT_1_SHFT                                       0x0

#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b064)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_0_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_0_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_0_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_0_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_0_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b060)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_0_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_0_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_0_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_0_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_0_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b06c)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_1_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_1_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_1_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_1_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_1_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b068)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_1_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_1_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_1_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_1_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_1_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b074)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_ADDR, HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_IN)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_2_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_2_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_2_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_2_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_2_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b070)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_ADDR, HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_IN)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_2_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_2_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_2_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_2_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_2_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b07c)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_ADDR, HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_IN)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_3_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_3_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_3_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_3_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_3_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b078)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_ADDR, HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_IN)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_3_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_3_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_3_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_3_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_3_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b084)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_ADDR, HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_IN)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_4_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_4_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_4_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_4_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_4_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b080)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_ADDR, HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_IN)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_4_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_4_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_4_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_4_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_4_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b08c)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_ADDR, HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_IN)
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_5_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_TOP_QUPV3_0_GSI_LPASS_INT_SEL_OUT_5_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_5_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_0_LPASS_INT_SEL_OUT_5_TOP_QUPV3_0_SE_LPASS_INT_SEL_OUT_5_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b088)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_RMSK                                                                 0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_ADDR, HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_IN)
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_5_BMSK                             0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_TOP_QUPV3_1_GSI_LPASS_INT_SEL_OUT_5_SHFT                                  0x8
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_5_BMSK                                  0xff
#define HWIO_TCSR_TOP_QUPV3_1_LPASS_INT_SEL_OUT_5_TOP_QUPV3_1_SE_LPASS_INT_SEL_OUT_5_SHFT                                   0x0

#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b094)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_0_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_0_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_0_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_0_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_0_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b090)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_ADDR, HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_0_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_0_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_0_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_0_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_0_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b09c)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_1_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_1_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_1_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_1_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_1_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b098)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_ADDR, HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_1_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_1_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_1_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_1_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_1_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0a4)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_ADDR, HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_IN)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_2_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_2_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_2_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_2_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_2_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0a0)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_ADDR, HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_IN)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_2_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_2_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_2_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_2_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_2_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0ac)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_ADDR, HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_IN)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_3_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_3_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_3_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_3_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_3_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0a8)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_ADDR, HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_IN)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_3_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_3_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_3_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_3_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_3_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0b4)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_ADDR, HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_IN)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_4_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_4_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_4_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_4_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_4_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0b0)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_ADDR, HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_IN)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_4_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_4_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_4_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_4_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_4_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0bc)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_ADDR, HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_RMSK)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_IN)
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_5_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_TOP_QUPV3_0_GSI_TURING_INT_SEL_OUT_5_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_5_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_0_TURING_INT_SEL_OUT_5_TOP_QUPV3_0_SE_TURING_INT_SEL_OUT_5_SHFT                                 0x0

#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0b8)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_RMSK                                                                0x1fffff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_IN          \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_ADDR, HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_RMSK)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_INM(m)      \
        in_dword_masked(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_ADDR, m)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_OUT(v)      \
        out_dword(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_ADDR,v)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_ADDR,m,v,HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_IN)
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_5_BMSK                           0x1fff00
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_TOP_QUPV3_1_GSI_TURING_INT_SEL_OUT_5_SHFT                                0x8
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_5_BMSK                                0xff
#define HWIO_TCSR_TOP_QUPV3_1_TURING_INT_SEL_OUT_5_TOP_QUPV3_1_SE_TURING_INT_SEL_OUT_5_SHFT                                 0x0

#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0c0)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_RMSK                                                                    0x7ffff
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR, HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_SSC_QUPV3_0_GSI_MSS_INT_SEL_OUT_0_BMSK                                  0x7ffc0
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_SSC_QUPV3_0_GSI_MSS_INT_SEL_OUT_0_SHFT                                      0x6
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_SSC_QUPV3_0_SE_MSS_INT_SEL_OUT_0_BMSK                                      0x3f
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_0_SSC_QUPV3_0_SE_MSS_INT_SEL_OUT_0_SHFT                                       0x0

#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0c4)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_RMSK                                                                    0x7ffff
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR, HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_SSC_QUPV3_0_GSI_MSS_INT_SEL_OUT_1_BMSK                                  0x7ffc0
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_SSC_QUPV3_0_GSI_MSS_INT_SEL_OUT_1_SHFT                                      0x6
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_SSC_QUPV3_0_SE_MSS_INT_SEL_OUT_1_BMSK                                      0x3f
#define HWIO_TCSR_SSC_QUPV3_0_MSS_INT_SEL_OUT_1_SSC_QUPV3_0_SE_MSS_INT_SEL_OUT_1_SHFT                                       0x0

#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0c8)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_RMSK                                                                  0x7ffff
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR, HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_SSC_QUPV3_0_GSI_LPASS_INT_SEL_OUT_0_BMSK                              0x7ffc0
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_SSC_QUPV3_0_GSI_LPASS_INT_SEL_OUT_0_SHFT                                  0x6
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_SSC_QUPV3_0_SE_LPASS_INT_SEL_OUT_0_BMSK                                  0x3f
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_0_SSC_QUPV3_0_SE_LPASS_INT_SEL_OUT_0_SHFT                                   0x0

#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0cc)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_RMSK                                                                  0x7ffff
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR, HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_SSC_QUPV3_0_GSI_LPASS_INT_SEL_OUT_1_BMSK                              0x7ffc0
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_SSC_QUPV3_0_GSI_LPASS_INT_SEL_OUT_1_SHFT                                  0x6
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_SSC_QUPV3_0_SE_LPASS_INT_SEL_OUT_1_BMSK                                  0x3f
#define HWIO_TCSR_SSC_QUPV3_0_LPASS_INT_SEL_OUT_1_SSC_QUPV3_0_SE_LPASS_INT_SEL_OUT_1_SHFT                                   0x0

#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0d0)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_RMSK                                                                 0x7ffff
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_IN          \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR, HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_RMSK)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR, m)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_OUT(v)      \
        out_dword(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR,v)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_ADDR,m,v,HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_IN)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_SSC_QUPV3_0_GSI_TURING_INT_SEL_OUT_0_BMSK                            0x7ffc0
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_SSC_QUPV3_0_GSI_TURING_INT_SEL_OUT_0_SHFT                                0x6
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_SSC_QUPV3_0_SE_TURING_INT_SEL_OUT_0_BMSK                                0x3f
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_0_SSC_QUPV3_0_SE_TURING_INT_SEL_OUT_0_SHFT                                 0x0

#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b0d4)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_RMSK                                                                 0x7ffff
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_IN          \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR, HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_RMSK)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR, m)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_OUT(v)      \
        out_dword(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR,v)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_ADDR,m,v,HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_IN)
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_SSC_QUPV3_0_GSI_TURING_INT_SEL_OUT_1_BMSK                            0x7ffc0
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_SSC_QUPV3_0_GSI_TURING_INT_SEL_OUT_1_SHFT                                0x6
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_SSC_QUPV3_0_SE_TURING_INT_SEL_OUT_1_BMSK                                0x3f
#define HWIO_TCSR_SSC_QUPV3_0_TURING_INT_SEL_OUT_1_SSC_QUPV3_0_SE_TURING_INT_SEL_OUT_1_SHFT                                 0x0

#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_ADDR                                                                    (TCSR_TCSR_REGS_REG_BASE      + 0x0000bff0)
#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_RMSK                                                                    0xffffffff
#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_IN          \
        in_dword_masked(HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_ADDR, HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_RMSK)
#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_INM(m)      \
        in_dword_masked(HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_ADDR, m)
#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_OUT(v)      \
        out_dword(HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_ADDR,v)
#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_ADDR,m,v,HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_IN)
#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_TCSR_USB_PHY_SEC_VLS_CLAMP_BMSK                                         0xffffffff
#define HWIO_TCSR_TCSR_USB_PHY_SEC_VLS_CLAMP_TCSR_USB_PHY_SEC_VLS_CLAMP_SHFT                                                0x0

#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000b244)
#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_RMSK                                                                        0xffffffff
#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_IN          \
        in_dword_masked(HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_ADDR, HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_RMSK)
#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_INM(m)      \
        in_dword_masked(HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_ADDR, m)
#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_OUT(v)      \
        out_dword(HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_ADDR,v)
#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_ADDR,m,v,HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_IN)
#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_TCSR_USB_PHY_VLS_CLAMP_BMSK                                                 0xffffffff
#define HWIO_TCSR_TCSR_USB_PHY_VLS_CLAMP_TCSR_USB_PHY_VLS_CLAMP_SHFT                                                        0x0

#define HWIO_TCSR_QPDI_DISABLE_CFG_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00001000)
#define HWIO_TCSR_QPDI_DISABLE_CFG_RMSK                                                                                   0x303
#define HWIO_TCSR_QPDI_DISABLE_CFG_IN          \
        in_dword_masked(HWIO_TCSR_QPDI_DISABLE_CFG_ADDR, HWIO_TCSR_QPDI_DISABLE_CFG_RMSK)
#define HWIO_TCSR_QPDI_DISABLE_CFG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QPDI_DISABLE_CFG_ADDR, m)
#define HWIO_TCSR_QPDI_DISABLE_CFG_OUT(v)      \
        out_dword(HWIO_TCSR_QPDI_DISABLE_CFG_ADDR,v)
#define HWIO_TCSR_QPDI_DISABLE_CFG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QPDI_DISABLE_CFG_ADDR,m,v,HWIO_TCSR_QPDI_DISABLE_CFG_IN)
#define HWIO_TCSR_QPDI_DISABLE_CFG_QPDI_SPMI_DBG_ACK_BMSK                                                                 0x200
#define HWIO_TCSR_QPDI_DISABLE_CFG_QPDI_SPMI_DBG_ACK_SHFT                                                                   0x9
#define HWIO_TCSR_QPDI_DISABLE_CFG_QPDI_SPMI_DBG_REQ_BMSK                                                                 0x100
#define HWIO_TCSR_QPDI_DISABLE_CFG_QPDI_SPMI_DBG_REQ_SHFT                                                                   0x8
#define HWIO_TCSR_QPDI_DISABLE_CFG_SPMI_HANDSHAKE_DISABLE_BMSK                                                              0x2
#define HWIO_TCSR_QPDI_DISABLE_CFG_SPMI_HANDSHAKE_DISABLE_SHFT                                                              0x1
#define HWIO_TCSR_QPDI_DISABLE_CFG_QPDI_DISABLE_CFG_BMSK                                                                    0x1
#define HWIO_TCSR_QPDI_DISABLE_CFG_QPDI_DISABLE_CFG_SHFT                                                                    0x0

#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x00016000)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_RMSK                                                                            0x3
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_IN          \
        in_dword_masked(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_ADDR, HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_RMSK)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_ADDR, m)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_OUT(v)      \
        out_dword(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_ADDR,v)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_ADDR,m,v,HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_IN)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_TEST_EN_1_BMSK                                                                  0x2
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_TEST_EN_1_SHFT                                                                  0x1
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_TEST_DATA_1_BMSK                                                                0x1
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_1_TEST_DATA_1_SHFT                                                                0x0

#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x00016004)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_RMSK                                                                            0x3
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_IN          \
        in_dword_masked(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_ADDR, HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_RMSK)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_ADDR, m)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_OUT(v)      \
        out_dword(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_ADDR,v)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_ADDR,m,v,HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_IN)
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_TEST_EN_0_BMSK                                                                  0x2
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_TEST_EN_0_SHFT                                                                  0x1
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_TEST_DATA_0_BMSK                                                                0x1
#define HWIO_TCSR_DIFFERENTIAL_TEST_CLOCK_0_TEST_DATA_0_SHFT                                                                0x0

#define HWIO_TCSR_COMPILER_VDDSSC_ACC_0_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d000)
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_0_RMSK                                                                         0xffffffff
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_0_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDSSC_ACC_0_ADDR, HWIO_TCSR_COMPILER_VDDSSC_ACC_0_RMSK)
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDSSC_ACC_0_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_0_COMPILER_VDDSSC_ACC_0_BMSK                                                   0xffffffff
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_0_COMPILER_VDDSSC_ACC_0_SHFT                                                          0x0

#define HWIO_TCSR_COMPILER_VDDSSC_ACC_1_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d004)
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_1_RMSK                                                                         0xffffffff
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_1_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDSSC_ACC_1_ADDR, HWIO_TCSR_COMPILER_VDDSSC_ACC_1_RMSK)
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDSSC_ACC_1_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_1_COMPILER_VDDSSC_ACC_1_BMSK                                                   0xffffffff
#define HWIO_TCSR_COMPILER_VDDSSC_ACC_1_COMPILER_VDDSSC_ACC_1_SHFT                                                          0x0

#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d010)
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_RMSK                                                                        0xffffffff
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_ADDR, HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_RMSK)
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_COMPILER_VDDDDRA_ACC_0_BMSK                                                 0xffffffff
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_0_COMPILER_VDDDDRA_ACC_0_SHFT                                                        0x0

#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d014)
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_RMSK                                                                        0xffffffff
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_ADDR, HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_RMSK)
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_COMPILER_VDDDDRA_ACC_1_BMSK                                                 0xffffffff
#define HWIO_TCSR_COMPILER_VDDDDRA_ACC_1_COMPILER_VDDDDRA_ACC_1_SHFT                                                        0x0

#define HWIO_TCSR_COMPILER_VDDCX_ACC_0_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0000d080)
#define HWIO_TCSR_COMPILER_VDDCX_ACC_0_RMSK                                                                          0xffffffff
#define HWIO_TCSR_COMPILER_VDDCX_ACC_0_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDCX_ACC_0_ADDR, HWIO_TCSR_COMPILER_VDDCX_ACC_0_RMSK)
#define HWIO_TCSR_COMPILER_VDDCX_ACC_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDCX_ACC_0_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDCX_ACC_0_COMPILER_VDDCX_ACC_0_BMSK                                                     0xffffffff
#define HWIO_TCSR_COMPILER_VDDCX_ACC_0_COMPILER_VDDCX_ACC_0_SHFT                                                            0x0

#define HWIO_TCSR_COMPILER_VDDCX_ACC_1_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0000d084)
#define HWIO_TCSR_COMPILER_VDDCX_ACC_1_RMSK                                                                          0xffffffff
#define HWIO_TCSR_COMPILER_VDDCX_ACC_1_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDCX_ACC_1_ADDR, HWIO_TCSR_COMPILER_VDDCX_ACC_1_RMSK)
#define HWIO_TCSR_COMPILER_VDDCX_ACC_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDCX_ACC_1_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDCX_ACC_1_COMPILER_VDDCX_ACC_1_BMSK                                                     0xffffffff
#define HWIO_TCSR_COMPILER_VDDCX_ACC_1_COMPILER_VDDCX_ACC_1_SHFT                                                            0x0

#define HWIO_TCSR_COMPILER_VDDGFX_ACC_0_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d100)
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_0_RMSK                                                                         0xffffffff
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_0_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDGFX_ACC_0_ADDR, HWIO_TCSR_COMPILER_VDDGFX_ACC_0_RMSK)
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDGFX_ACC_0_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_0_COMPILER_VDDGFX_ACC_0_BMSK                                                   0xffffffff
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_0_COMPILER_VDDGFX_ACC_0_SHFT                                                          0x0

#define HWIO_TCSR_COMPILER_VDDGFX_ACC_1_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d104)
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_1_RMSK                                                                         0xffffffff
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_1_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDGFX_ACC_1_ADDR, HWIO_TCSR_COMPILER_VDDGFX_ACC_1_RMSK)
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDGFX_ACC_1_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_1_COMPILER_VDDGFX_ACC_1_BMSK                                                   0xffffffff
#define HWIO_TCSR_COMPILER_VDDGFX_ACC_1_COMPILER_VDDGFX_ACC_1_SHFT                                                          0x0

#define HWIO_TCSR_COMPILER_VDDMSS_ACC_0_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d1c0)
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_0_RMSK                                                                         0xffffffff
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_0_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDMSS_ACC_0_ADDR, HWIO_TCSR_COMPILER_VDDMSS_ACC_0_RMSK)
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDMSS_ACC_0_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_0_COMPILER_VDDMSS_ACC_0_BMSK                                                   0xffffffff
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_0_COMPILER_VDDMSS_ACC_0_SHFT                                                          0x0

#define HWIO_TCSR_COMPILER_VDDMSS_ACC_1_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d1c4)
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_1_RMSK                                                                         0xffffffff
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_1_IN          \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDMSS_ACC_1_ADDR, HWIO_TCSR_COMPILER_VDDMSS_ACC_1_RMSK)
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_COMPILER_VDDMSS_ACC_1_ADDR, m)
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_1_COMPILER_VDDMSS_ACC_1_BMSK                                                   0xffffffff
#define HWIO_TCSR_COMPILER_VDDMSS_ACC_1_COMPILER_VDDMSS_ACC_1_SHFT                                                          0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d224)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_RMSK                                                                               0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_CUSTOM_KRYO_ACC_TYPE8_BMSK                                                         0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE8_CUSTOM_KRYO_ACC_TYPE8_SHFT                                                          0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0000d228)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_RMSK                                                                               0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_CUSTOM_KRYO_ACC_TYPE9_BMSK                                                         0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE9_CUSTOM_KRYO_ACC_TYPE9_SHFT                                                          0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d22c)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_CUSTOM_KRYO_ACC_TYPE10_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE10_CUSTOM_KRYO_ACC_TYPE10_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d230)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_CUSTOM_KRYO_ACC_TYPE11_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE11_CUSTOM_KRYO_ACC_TYPE11_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d234)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_CUSTOM_KRYO_ACC_TYPE12_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE12_CUSTOM_KRYO_ACC_TYPE12_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d238)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_CUSTOM_KRYO_ACC_TYPE13_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE13_CUSTOM_KRYO_ACC_TYPE13_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d23c)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_CUSTOM_KRYO_ACC_TYPE14_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE14_CUSTOM_KRYO_ACC_TYPE14_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d240)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_CUSTOM_KRYO_ACC_TYPE15_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE15_CUSTOM_KRYO_ACC_TYPE15_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d244)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_CUSTOM_KRYO_ACC_TYPE16_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE16_CUSTOM_KRYO_ACC_TYPE16_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d248)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_CUSTOM_KRYO_ACC_TYPE17_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE17_CUSTOM_KRYO_ACC_TYPE17_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d24c)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_CUSTOM_KRYO_ACC_TYPE18_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE18_CUSTOM_KRYO_ACC_TYPE18_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d250)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_CUSTOM_KRYO_ACC_TYPE19_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE19_CUSTOM_KRYO_ACC_TYPE19_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d254)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_CUSTOM_KRYO_ACC_TYPE20_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE20_CUSTOM_KRYO_ACC_TYPE20_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d258)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_CUSTOM_KRYO_ACC_TYPE21_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE21_CUSTOM_KRYO_ACC_TYPE21_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d25c)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_CUSTOM_VDDCX_ACC_TYPE1_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE1_CUSTOM_VDDCX_ACC_TYPE1_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d260)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_CUSTOM_VDDCX_ACC_TYPE2_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE2_CUSTOM_VDDCX_ACC_TYPE2_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d264)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_CUSTOM_VDDCX_ACC_TYPE3_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE3_CUSTOM_VDDCX_ACC_TYPE3_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d268)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_CUSTOM_VDDCX_ACC_TYPE4_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE4_CUSTOM_VDDCX_ACC_TYPE4_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d26c)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_CUSTOM_VDDCX_ACC_TYPE5_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE5_CUSTOM_VDDCX_ACC_TYPE5_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d270)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_CUSTOM_VDDCX_ACC_TYPE6_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE6_CUSTOM_VDDCX_ACC_TYPE6_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d274)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_CUSTOM_VDDCX_ACC_TYPE7_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE7_CUSTOM_VDDCX_ACC_TYPE7_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d278)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_CUSTOM_VDDCX_ACC_TYPE22_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE22_CUSTOM_VDDCX_ACC_TYPE22_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d27c)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_CUSTOM_VDDCX_ACC_TYPE23_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE23_CUSTOM_VDDCX_ACC_TYPE23_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d280)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_ADDR, HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_RMSK)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_CUSTOM_VDDCX_ACC_TYPE24_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDCX_ACC_TYPE24_CUSTOM_VDDCX_ACC_TYPE24_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d284)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_CUSTOM_VDDGFX_ACC_TYPE1_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE1_CUSTOM_VDDGFX_ACC_TYPE1_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d288)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_CUSTOM_VDDGFX_ACC_TYPE2_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE2_CUSTOM_VDDGFX_ACC_TYPE2_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d28c)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_CUSTOM_VDDGFX_ACC_TYPE3_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE3_CUSTOM_VDDGFX_ACC_TYPE3_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d290)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_CUSTOM_VDDGFX_ACC_TYPE4_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE4_CUSTOM_VDDGFX_ACC_TYPE4_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d294)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_CUSTOM_VDDGFX_ACC_TYPE5_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE5_CUSTOM_VDDGFX_ACC_TYPE5_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d298)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_CUSTOM_VDDGFX_ACC_TYPE6_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE6_CUSTOM_VDDGFX_ACC_TYPE6_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d29c)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_CUSTOM_VDDGFX_ACC_TYPE7_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE7_CUSTOM_VDDGFX_ACC_TYPE7_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2a0)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_CUSTOM_VDDGFX_ACC_TYPE22_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE22_CUSTOM_VDDGFX_ACC_TYPE22_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2a4)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_CUSTOM_VDDGFX_ACC_TYPE23_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE23_CUSTOM_VDDGFX_ACC_TYPE23_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2a8)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_ADDR, HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_RMSK)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_CUSTOM_VDDGFX_ACC_TYPE24_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDGFX_ACC_TYPE24_CUSTOM_VDDGFX_ACC_TYPE24_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2ac)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_CUSTOM_VDDMSS_ACC_TYPE1_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE1_CUSTOM_VDDMSS_ACC_TYPE1_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2b0)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_CUSTOM_VDDMSS_ACC_TYPE2_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE2_CUSTOM_VDDMSS_ACC_TYPE2_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2b4)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_CUSTOM_VDDMSS_ACC_TYPE3_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE3_CUSTOM_VDDMSS_ACC_TYPE3_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2b8)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_CUSTOM_VDDMSS_ACC_TYPE4_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE4_CUSTOM_VDDMSS_ACC_TYPE4_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2bc)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_CUSTOM_VDDMSS_ACC_TYPE5_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE5_CUSTOM_VDDMSS_ACC_TYPE5_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2c0)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_CUSTOM_VDDMSS_ACC_TYPE6_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE6_CUSTOM_VDDMSS_ACC_TYPE6_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2c4)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_CUSTOM_VDDMSS_ACC_TYPE7_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE7_CUSTOM_VDDMSS_ACC_TYPE7_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2c8)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_CUSTOM_VDDMSS_ACC_TYPE22_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE22_CUSTOM_VDDMSS_ACC_TYPE22_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2cc)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_CUSTOM_VDDMSS_ACC_TYPE23_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE23_CUSTOM_VDDMSS_ACC_TYPE23_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2d0)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_ADDR, HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_RMSK)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_CUSTOM_VDDMSS_ACC_TYPE24_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDMSS_ACC_TYPE24_CUSTOM_VDDMSS_ACC_TYPE24_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2d4)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_CUSTOM_VDDSSC_ACC_TYPE1_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE1_CUSTOM_VDDSSC_ACC_TYPE1_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2d8)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_CUSTOM_VDDSSC_ACC_TYPE2_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE2_CUSTOM_VDDSSC_ACC_TYPE2_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2dc)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_CUSTOM_VDDSSC_ACC_TYPE3_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE3_CUSTOM_VDDSSC_ACC_TYPE3_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2e0)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_CUSTOM_VDDSSC_ACC_TYPE4_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE4_CUSTOM_VDDSSC_ACC_TYPE4_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2e4)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_CUSTOM_VDDSSC_ACC_TYPE5_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE5_CUSTOM_VDDSSC_ACC_TYPE5_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2e8)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_CUSTOM_VDDSSC_ACC_TYPE6_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE6_CUSTOM_VDDSSC_ACC_TYPE6_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2ec)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_RMSK                                                                             0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_CUSTOM_VDDSSC_ACC_TYPE7_BMSK                                                     0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE7_CUSTOM_VDDSSC_ACC_TYPE7_SHFT                                                      0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2f0)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_CUSTOM_VDDSSC_ACC_TYPE22_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE22_CUSTOM_VDDSSC_ACC_TYPE22_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2f4)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_CUSTOM_VDDSSC_ACC_TYPE23_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE23_CUSTOM_VDDSSC_ACC_TYPE23_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2f8)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_ADDR, HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_RMSK)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_CUSTOM_VDDSSC_ACC_TYPE24_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDSSC_ACC_TYPE24_CUSTOM_VDDSSC_ACC_TYPE24_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d2fc)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_CUSTOM_VDDDDRA_ACC_TYPE1_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE1_CUSTOM_VDDDDRA_ACC_TYPE1_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d300)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_CUSTOM_VDDDDRA_ACC_TYPE2_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE2_CUSTOM_VDDDDRA_ACC_TYPE2_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d304)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_CUSTOM_VDDDDRA_ACC_TYPE3_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE3_CUSTOM_VDDDDRA_ACC_TYPE3_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d308)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_CUSTOM_VDDDDRA_ACC_TYPE4_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE4_CUSTOM_VDDDDRA_ACC_TYPE4_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d30c)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_CUSTOM_VDDDDRA_ACC_TYPE5_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE5_CUSTOM_VDDDDRA_ACC_TYPE5_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d310)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_CUSTOM_VDDDDRA_ACC_TYPE6_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE6_CUSTOM_VDDDDRA_ACC_TYPE6_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0000d314)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_RMSK                                                                            0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_CUSTOM_VDDDDRA_ACC_TYPE7_BMSK                                                   0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE7_CUSTOM_VDDDDRA_ACC_TYPE7_SHFT                                                    0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x0000d318)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_RMSK                                                                           0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_CUSTOM_VDDDDRA_ACC_TYPE22_BMSK                                                 0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE22_CUSTOM_VDDDDRA_ACC_TYPE22_SHFT                                                  0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x0000d31c)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_RMSK                                                                           0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_CUSTOM_VDDDDRA_ACC_TYPE23_BMSK                                                 0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE23_CUSTOM_VDDDDRA_ACC_TYPE23_SHFT                                                  0x0

#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x0000d320)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_RMSK                                                                           0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_ADDR, HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_RMSK)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_ADDR, m)
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_CUSTOM_VDDDDRA_ACC_TYPE24_BMSK                                                 0xff
#define HWIO_TCSR_CUSTOM_VDDDDRA_ACC_TYPE24_CUSTOM_VDDDDRA_ACC_TYPE24_SHFT                                                  0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d324)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_CUSTOM_KRYO_ACC_TYPE25_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE25_CUSTOM_KRYO_ACC_TYPE25_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d328)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_CUSTOM_KRYO_ACC_TYPE26_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE26_CUSTOM_KRYO_ACC_TYPE26_SHFT                                                        0x0

#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0000d32c)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_RMSK                                                                              0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_IN          \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_ADDR, HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_RMSK)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_INM(m)      \
        in_dword_masked(HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_ADDR, m)
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_CUSTOM_KRYO_ACC_TYPE27_BMSK                                                       0xff
#define HWIO_TCSR_CUSTOM_KRYO_ACC_TYPE27_CUSTOM_KRYO_ACC_TYPE27_SHFT                                                        0x0

#define HWIO_TCSR_MEM_ARRY_STBY_ADDR                                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x0000d180)
#define HWIO_TCSR_MEM_ARRY_STBY_RMSK                                                                                        0x1
#define HWIO_TCSR_MEM_ARRY_STBY_IN          \
        in_dword_masked(HWIO_TCSR_MEM_ARRY_STBY_ADDR, HWIO_TCSR_MEM_ARRY_STBY_RMSK)
#define HWIO_TCSR_MEM_ARRY_STBY_INM(m)      \
        in_dword_masked(HWIO_TCSR_MEM_ARRY_STBY_ADDR, m)
#define HWIO_TCSR_MEM_ARRY_STBY_OUT(v)      \
        out_dword(HWIO_TCSR_MEM_ARRY_STBY_ADDR,v)
#define HWIO_TCSR_MEM_ARRY_STBY_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_MEM_ARRY_STBY_ADDR,m,v,HWIO_TCSR_MEM_ARRY_STBY_IN)
#define HWIO_TCSR_MEM_ARRY_STBY_MEM_ARRY_STBY_N_BMSK                                                                        0x1
#define HWIO_TCSR_MEM_ARRY_STBY_MEM_ARRY_STBY_N_SHFT                                                                        0x0

#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0000b220)
#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_RMSK                                                                               0x3ff
#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_IN          \
        in_dword_masked(HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_ADDR, HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_RMSK)
#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_ADDR, m)
#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_OUT(v)      \
        out_dword(HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_ADDR,v)
#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_ADDR,m,v,HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_IN)
#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_DDR_SS_DEBUG_BUS_SEL_BMSK                                                          0x3ff
#define HWIO_TCSR_DDR_SS_DEBUG_BUS_SEL_DDR_SS_DEBUG_BUS_SEL_SHFT                                                            0x0

#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00011000)
#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_RMSK                                                                    0x1
#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_IN          \
        in_dword_masked(HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_ADDR, HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_RMSK)
#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_INM(m)      \
        in_dword_masked(HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_ADDR, m)
#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_OUT(v)      \
        out_dword(HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_ADDR,v)
#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_ADDR,m,v,HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_IN)
#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_VSENSE_CONTROLLER_ENABLE_REGISTER_BMSK                                  0x1
#define HWIO_TCSR_VSENSE_CONTROLLER_ENABLE_REGISTER_VSENSE_CONTROLLER_ENABLE_REGISTER_SHFT                                  0x0

#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x00012000)
#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_RMSK                                                                     0xffffffff
#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_IN          \
        in_dword_masked(HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_ADDR, HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_RMSK)
#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_INM(m)      \
        in_dword_masked(HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_ADDR, m)
#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_OUT(v)      \
        out_dword(HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_ADDR,v)
#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_ADDR,m,v,HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_IN)
#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_TCSR_RESET_DEBUG_SW_ENTRY_BMSK                                           0xffffffff
#define HWIO_TCSR_TCSR_RESET_DEBUG_SW_ENTRY_TCSR_RESET_DEBUG_SW_ENTRY_SHFT                                                  0x0

#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x00013000)
#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_RMSK                                                                         0xffffffff
#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_IN          \
        in_dword_masked(HWIO_TCSR_TCSR_BOOT_MISC_DETECT_ADDR, HWIO_TCSR_TCSR_BOOT_MISC_DETECT_RMSK)
#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_INM(m)      \
        in_dword_masked(HWIO_TCSR_TCSR_BOOT_MISC_DETECT_ADDR, m)
#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_OUT(v)      \
        out_dword(HWIO_TCSR_TCSR_BOOT_MISC_DETECT_ADDR,v)
#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TCSR_BOOT_MISC_DETECT_ADDR,m,v,HWIO_TCSR_TCSR_BOOT_MISC_DETECT_IN)
#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_TCSR_BOOT_MISC_DETECT_BMSK                                                   0xffffffff
#define HWIO_TCSR_TCSR_BOOT_MISC_DETECT_TCSR_BOOT_MISC_DETECT_SHFT                                                          0x0

#define HWIO_TCSR_TZ_WONCE_n_ADDR(n)                                                                                 (TCSR_TCSR_REGS_REG_BASE      + 0x00014000 + 0x4 * (n))
#define HWIO_TCSR_TZ_WONCE_n_RMSK                                                                                    0xffffffff
#define HWIO_TCSR_TZ_WONCE_n_MAXn                                                                                            15
#define HWIO_TCSR_TZ_WONCE_n_INI(n)        \
        in_dword_masked(HWIO_TCSR_TZ_WONCE_n_ADDR(n), HWIO_TCSR_TZ_WONCE_n_RMSK)
#define HWIO_TCSR_TZ_WONCE_n_INMI(n,mask)    \
        in_dword_masked(HWIO_TCSR_TZ_WONCE_n_ADDR(n), mask)
#define HWIO_TCSR_TZ_WONCE_n_OUTI(n,val)    \
        out_dword(HWIO_TCSR_TZ_WONCE_n_ADDR(n),val)
#define HWIO_TCSR_TZ_WONCE_n_OUTMI(n,mask,val) \
        out_dword_masked_ns(HWIO_TCSR_TZ_WONCE_n_ADDR(n),mask,val,HWIO_TCSR_TZ_WONCE_n_INI(n))
#define HWIO_TCSR_TZ_WONCE_n_TZ_WONCE_ADDRESS_BMSK                                                                   0xffffffff
#define HWIO_TCSR_TZ_WONCE_n_TZ_WONCE_ADDRESS_SHFT                                                                          0x0

#define HWIO_TCSR_QREFS_RPT_CONFIG_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00015000)
#define HWIO_TCSR_QREFS_RPT_CONFIG_RMSK                                                                                  0xffff
#define HWIO_TCSR_QREFS_RPT_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_RPT_CONFIG_ADDR, HWIO_TCSR_QREFS_RPT_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_RPT_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_RPT_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_RPT_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_RPT_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_RPT_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_RPT_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_RPT_CONFIG_IN)
#define HWIO_TCSR_QREFS_RPT_CONFIG_QREFS_RPT_CONFIG_BUS_SELECT_BMSK                                                      0xffff
#define HWIO_TCSR_QREFS_RPT_CONFIG_QREFS_RPT_CONFIG_BUS_SELECT_SHFT                                                         0x0

#define HWIO_TCSR_QREFS_TXVBG_CONFIG_ADDR                                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00015004)
#define HWIO_TCSR_QREFS_TXVBG_CONFIG_RMSK                                                                                0xffff
#define HWIO_TCSR_QREFS_TXVBG_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_TXVBG_CONFIG_ADDR, HWIO_TCSR_QREFS_TXVBG_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_TXVBG_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_TXVBG_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_TXVBG_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_TXVBG_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_TXVBG_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_TXVBG_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_TXVBG_CONFIG_IN)
#define HWIO_TCSR_QREFS_TXVBG_CONFIG_QREFS_TXVBG_CONFIG_BMSK                                                             0xffff
#define HWIO_TCSR_QREFS_TXVBG_CONFIG_QREFS_TXVBG_CONFIG_SHFT                                                                0x0

#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x00015008)
#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_RMSK                                                                                0xff
#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RX3_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO_RX3_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RX3_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO_RX3_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO_RX3_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO_RX3_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_QREFS_CXO_RX3_CONFIG_BMSK                                                           0xff
#define HWIO_TCSR_QREFS_CXO_RX3_CONFIG_QREFS_CXO_RX3_CONFIG_SHFT                                                            0x0

#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0001500c)
#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_RMSK                                                                                0xff
#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RX2_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO_RX2_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RX2_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO_RX2_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO_RX2_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO_RX2_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_QREFS_CXO_RX2_CONFIG_BMSK                                                           0xff
#define HWIO_TCSR_QREFS_CXO_RX2_CONFIG_QREFS_CXO_RX2_CONFIG_SHFT                                                            0x0

#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x00015010)
#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_RMSK                                                                               0xff
#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_QREFS_CXO_RPT2_CONFIG_BMSK                                                         0xff
#define HWIO_TCSR_QREFS_CXO_RPT2_CONFIG_QREFS_CXO_RPT2_CONFIG_SHFT                                                          0x0

#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x00015018)
#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_RMSK                                                                               0xff
#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_QREFS_CXO2_RX0_CONFIG_BMSK                                                         0xff
#define HWIO_TCSR_QREFS_CXO2_RX0_CONFIG_QREFS_CXO2_RX0_CONFIG_SHFT                                                          0x0

#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0001501c)
#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_RMSK                                                                              0xff
#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_QREFS_CXO2_RPT1_CONFIG_BMSK                                                       0xff
#define HWIO_TCSR_QREFS_CXO2_RPT1_CONFIG_QREFS_CXO2_RPT1_CONFIG_SHFT                                                        0x0

#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x00015020)
#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_RMSK                                                                              0xff
#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_QREFS_CXO2_RPT0_CONFIG_BMSK                                                       0xff
#define HWIO_TCSR_QREFS_CXO2_RPT0_CONFIG_QREFS_CXO2_RPT0_CONFIG_SHFT                                                        0x0

#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_ADDR                                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x00015024)
#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_RMSK                                                                          0xffff
#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_QREFS_CXO2_TXVBG0_CONFIG_BMSK                                                 0xffff
#define HWIO_TCSR_QREFS_CXO2_TXVBG0_CONFIG_QREFS_CXO2_TXVBG0_CONFIG_SHFT                                                    0x0

#define HWIO_TCSR_QZIP_CTL_ST_ADDR                                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x00015028)
#define HWIO_TCSR_QZIP_CTL_ST_RMSK                                                                                         0xff
#define HWIO_TCSR_QZIP_CTL_ST_IN          \
        in_dword_masked(HWIO_TCSR_QZIP_CTL_ST_ADDR, HWIO_TCSR_QZIP_CTL_ST_RMSK)
#define HWIO_TCSR_QZIP_CTL_ST_INM(m)      \
        in_dword_masked(HWIO_TCSR_QZIP_CTL_ST_ADDR, m)
#define HWIO_TCSR_QZIP_CTL_ST_OUT(v)      \
        out_dword(HWIO_TCSR_QZIP_CTL_ST_ADDR,v)
#define HWIO_TCSR_QZIP_CTL_ST_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QZIP_CTL_ST_ADDR,m,v,HWIO_TCSR_QZIP_CTL_ST_IN)
#define HWIO_TCSR_QZIP_CTL_ST_QZIP_CTL_ST_BMSK                                                                             0xff
#define HWIO_TCSR_QZIP_CTL_ST_QZIP_CTL_ST_SHFT                                                                              0x0

#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_ADDR                                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0001502c)
#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_RMSK                                                                               0xff
#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_QREFS_CXO_RPT3_CONFIG_BMSK                                                         0xff
#define HWIO_TCSR_QREFS_CXO_RPT3_CONFIG_QREFS_CXO_RPT3_CONFIG_SHFT                                                          0x0

#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00015030)
#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_RMSK                                                                             0xff
#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_QREFS_CXO2_RPT0A_CONFIG_BMSK                                                     0xff
#define HWIO_TCSR_QREFS_CXO2_RPT0A_CONFIG_QREFS_CXO2_RPT0A_CONFIG_SHFT                                                      0x0

#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00015034)
#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_RMSK                                                                             0xff
#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_QREFS_CXO2_RPT0B_CONFIG_BMSK                                                     0xff
#define HWIO_TCSR_QREFS_CXO2_RPT0B_CONFIG_QREFS_CXO2_RPT0B_CONFIG_SHFT                                                      0x0

#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_ADDR                                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x00015038)
#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_RMSK                                                                                0xff
#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_IN          \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RX1_CONFIG_ADDR, HWIO_TCSR_QREFS_CXO_RX1_CONFIG_RMSK)
#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_INM(m)      \
        in_dword_masked(HWIO_TCSR_QREFS_CXO_RX1_CONFIG_ADDR, m)
#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_OUT(v)      \
        out_dword(HWIO_TCSR_QREFS_CXO_RX1_CONFIG_ADDR,v)
#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_QREFS_CXO_RX1_CONFIG_ADDR,m,v,HWIO_TCSR_QREFS_CXO_RX1_CONFIG_IN)
#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_QREFS_CXO_RX1_CONFIG_BMSK                                                           0xff
#define HWIO_TCSR_QREFS_CXO_RX1_CONFIG_QREFS_CXO_RX1_CONFIG_SHFT                                                            0x0

#define HWIO_TCSR_TIC_CNOC_NS_ADDR                                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x0000b3e0)
#define HWIO_TCSR_TIC_CNOC_NS_RMSK                                                                                          0x1
#define HWIO_TCSR_TIC_CNOC_NS_IN          \
        in_dword_masked(HWIO_TCSR_TIC_CNOC_NS_ADDR, HWIO_TCSR_TIC_CNOC_NS_RMSK)
#define HWIO_TCSR_TIC_CNOC_NS_INM(m)      \
        in_dword_masked(HWIO_TCSR_TIC_CNOC_NS_ADDR, m)
#define HWIO_TCSR_TIC_CNOC_NS_OUT(v)      \
        out_dword(HWIO_TCSR_TIC_CNOC_NS_ADDR,v)
#define HWIO_TCSR_TIC_CNOC_NS_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_TIC_CNOC_NS_ADDR,m,v,HWIO_TCSR_TIC_CNOC_NS_IN)
#define HWIO_TCSR_TIC_CNOC_NS_TIC_CNOC_NS_BMSK                                                                              0x1
#define HWIO_TCSR_TIC_CNOC_NS_TIC_CNOC_NS_SHFT                                                                              0x0

#define HWIO_TCSR_CONN_BOX_SPARE_0_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b3e4)
#define HWIO_TCSR_CONN_BOX_SPARE_0_RMSK                                                                              0xffffffff
#define HWIO_TCSR_CONN_BOX_SPARE_0_IN          \
        in_dword_masked(HWIO_TCSR_CONN_BOX_SPARE_0_ADDR, HWIO_TCSR_CONN_BOX_SPARE_0_RMSK)
#define HWIO_TCSR_CONN_BOX_SPARE_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_CONN_BOX_SPARE_0_ADDR, m)
#define HWIO_TCSR_CONN_BOX_SPARE_0_OUT(v)      \
        out_dword(HWIO_TCSR_CONN_BOX_SPARE_0_ADDR,v)
#define HWIO_TCSR_CONN_BOX_SPARE_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_CONN_BOX_SPARE_0_ADDR,m,v,HWIO_TCSR_CONN_BOX_SPARE_0_IN)
#define HWIO_TCSR_CONN_BOX_SPARE_0_CONN_BOX_SPARE_0_BMSK                                                             0xffffffff
#define HWIO_TCSR_CONN_BOX_SPARE_0_CONN_BOX_SPARE_0_SHFT                                                                    0x0

#define HWIO_TCSR_CONN_BOX_SPARE_1_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b3e8)
#define HWIO_TCSR_CONN_BOX_SPARE_1_RMSK                                                                              0xffffffff
#define HWIO_TCSR_CONN_BOX_SPARE_1_IN          \
        in_dword_masked(HWIO_TCSR_CONN_BOX_SPARE_1_ADDR, HWIO_TCSR_CONN_BOX_SPARE_1_RMSK)
#define HWIO_TCSR_CONN_BOX_SPARE_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_CONN_BOX_SPARE_1_ADDR, m)
#define HWIO_TCSR_CONN_BOX_SPARE_1_OUT(v)      \
        out_dword(HWIO_TCSR_CONN_BOX_SPARE_1_ADDR,v)
#define HWIO_TCSR_CONN_BOX_SPARE_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_CONN_BOX_SPARE_1_ADDR,m,v,HWIO_TCSR_CONN_BOX_SPARE_1_IN)
#define HWIO_TCSR_CONN_BOX_SPARE_1_CONN_BOX_SPARE_1_BMSK                                                             0xffffffff
#define HWIO_TCSR_CONN_BOX_SPARE_1_CONN_BOX_SPARE_1_SHFT                                                                    0x0

#define HWIO_TCSR_CONN_BOX_SPARE_2_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x0000b3ec)
#define HWIO_TCSR_CONN_BOX_SPARE_2_RMSK                                                                              0xffffffff
#define HWIO_TCSR_CONN_BOX_SPARE_2_IN          \
        in_dword_masked(HWIO_TCSR_CONN_BOX_SPARE_2_ADDR, HWIO_TCSR_CONN_BOX_SPARE_2_RMSK)
#define HWIO_TCSR_CONN_BOX_SPARE_2_INM(m)      \
        in_dword_masked(HWIO_TCSR_CONN_BOX_SPARE_2_ADDR, m)
#define HWIO_TCSR_CONN_BOX_SPARE_2_OUT(v)      \
        out_dword(HWIO_TCSR_CONN_BOX_SPARE_2_ADDR,v)
#define HWIO_TCSR_CONN_BOX_SPARE_2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_CONN_BOX_SPARE_2_ADDR,m,v,HWIO_TCSR_CONN_BOX_SPARE_2_IN)
#define HWIO_TCSR_CONN_BOX_SPARE_2_CONN_BOX_SPARE_2_BMSK                                                             0xffffffff
#define HWIO_TCSR_CONN_BOX_SPARE_2_CONN_BOX_SPARE_2_SHFT                                                                    0x0

#define HWIO_TCSR_Q6SS_COREPWR_ON_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0000b3f0)
#define HWIO_TCSR_Q6SS_COREPWR_ON_RMSK                                                                                      0x1
#define HWIO_TCSR_Q6SS_COREPWR_ON_IN          \
        in_dword_masked(HWIO_TCSR_Q6SS_COREPWR_ON_ADDR, HWIO_TCSR_Q6SS_COREPWR_ON_RMSK)
#define HWIO_TCSR_Q6SS_COREPWR_ON_INM(m)      \
        in_dword_masked(HWIO_TCSR_Q6SS_COREPWR_ON_ADDR, m)
#define HWIO_TCSR_Q6SS_COREPWR_ON_Q6SS_COREPWR_ON_BMSK                                                                      0x1
#define HWIO_TCSR_Q6SS_COREPWR_ON_Q6SS_COREPWR_ON_SHFT                                                                      0x0

#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_ADDR                                                                  (TCSR_TCSR_REGS_REG_BASE      + 0x00018000)
#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_RMSK                                                                  0xffffffff
#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_IN          \
        in_dword_masked(HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_ADDR, HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_RMSK)
#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_INM(m)      \
        in_dword_masked(HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_ADDR, m)
#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_OUT(v)      \
        out_dword(HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_ADDR,v)
#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_ADDR,m,v,HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_IN)
#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_CFG_BITS_SHFT_BMSK                                                    0xffffffff
#define HWIO_TCSR_MASTER_CFG_COMPUTE_SIGNALING_CFG_BITS_SHFT_SHFT                                                           0x0

#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00019000)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_RMSK                                                               0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_IN          \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_ADDR, HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_RMSK)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_ADDR, m)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_OUT(v)      \
        out_dword(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_ADDR,v)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_ADDR,m,v,HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_IN)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_USER_COMPUTE_SIGNALING_WRITE_STATUS_BMSK                           0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_0_USER_COMPUTE_SIGNALING_WRITE_STATUS_SHFT                                  0x0

#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00019004)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_RMSK                                                               0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_IN          \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_ADDR, HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_RMSK)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_ADDR, m)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_OUT(v)      \
        out_dword(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_ADDR,v)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_ADDR,m,v,HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_IN)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_USER_COMPUTE_SIGNALING_WRITE_STATUS_BMSK                           0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_USER_1_USER_COMPUTE_SIGNALING_WRITE_STATUS_SHFT                                  0x0

#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_ADDR                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0001a000)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_RMSK                                                        0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_ADDR, HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_RMSK)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_ADDR, m)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_PROCESSOR_0_STATUS_USER_BMSK                                0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_USER_PROCESSOR_0_STATUS_USER_SHFT                                       0x0

#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_USER_ADDR                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0001a400)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_USER_RMSK                                                         0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_USER_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_USER_ADDR,v)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_USER_PROCESSOR_0_CLEAR_USER_BMSK                                  0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_USER_PROCESSOR_0_CLEAR_USER_SHFT                                         0x0

#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_ADDR                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0001a800)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_RMSK                                                          0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_ADDR, HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_RMSK)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_ADDR, m)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_ADDR,v)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_ADDR,m,v,HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_IN)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_PROCESSOR_0_MASK_USER_BMSK                                    0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_USER_PROCESSOR_0_MASK_USER_SHFT                                           0x0

#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_ADDR                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0001b000)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_RMSK                                                        0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_ADDR, HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_RMSK)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_ADDR, m)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_PROCESSOR_1_STATUS_USER_BMSK                                0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_USER_PROCESSOR_1_STATUS_USER_SHFT                                       0x0

#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_USER_ADDR                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0001b400)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_USER_RMSK                                                         0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_USER_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_USER_ADDR,v)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_USER_PROCESSOR_1_CLEAR_USER_BMSK                                  0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_USER_PROCESSOR_1_CLEAR_USER_SHFT                                         0x0

#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_ADDR                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0001b800)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_RMSK                                                          0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_ADDR, HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_RMSK)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_ADDR, m)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_ADDR,v)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_ADDR,m,v,HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_IN)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_PROCESSOR_1_MASK_USER_BMSK                                    0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_USER_PROCESSOR_1_MASK_USER_SHFT                                           0x0

#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_ADDR                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0001c000)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_RMSK                                                        0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_ADDR, HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_RMSK)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_ADDR, m)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_PROCESSOR_2_STATUS_USER_BMSK                                0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_USER_PROCESSOR_2_STATUS_USER_SHFT                                       0x0

#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_USER_ADDR                                                         (TCSR_TCSR_REGS_REG_BASE      + 0x0001c400)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_USER_RMSK                                                         0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_USER_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_USER_ADDR,v)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_USER_PROCESSOR_2_CLEAR_USER_BMSK                                  0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_USER_PROCESSOR_2_CLEAR_USER_SHFT                                         0x0

#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_ADDR                                                          (TCSR_TCSR_REGS_REG_BASE      + 0x0001c800)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_RMSK                                                          0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_ADDR, HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_RMSK)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_ADDR, m)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_ADDR,v)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_ADDR,m,v,HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_IN)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_PROCESSOR_2_MASK_USER_BMSK                                    0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_USER_PROCESSOR_2_MASK_USER_SHFT                                           0x0

#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x0001d000)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_RMSK                                                             0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_IN          \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_ADDR, HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_RMSK)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_ADDR, m)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_OUT(v)      \
        out_dword(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_ADDR,v)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_ADDR,m,v,HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_IN)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_KERNEL_COMPUTE_SIGNALING_WRITE_STATUS_BMSK                       0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_0_KERNEL_COMPUTE_SIGNALING_WRITE_STATUS_SHFT                              0x0

#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x0001d004)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_RMSK                                                             0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_IN          \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_ADDR, HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_RMSK)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_ADDR, m)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_OUT(v)      \
        out_dword(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_ADDR,v)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_ADDR,m,v,HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_IN)
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_KERNEL_COMPUTE_SIGNALING_WRITE_STATUS_BMSK                       0xffffffff
#define HWIO_TCSR_MASTER_COMPUTE_SIGNALING_KERNEL_1_KERNEL_COMPUTE_SIGNALING_WRITE_STATUS_SHFT                              0x0

#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0001e000)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_RMSK                                                      0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR, HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_RMSK)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR, m)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_PROCESSOR_0_STATUS_KERNEL_BMSK                            0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_STATUS_KERNEL_PROCESSOR_0_STATUS_KERNEL_SHFT                                   0x0

#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_KERNEL_ADDR                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0001e400)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_KERNEL_RMSK                                                       0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_KERNEL_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_KERNEL_ADDR,v)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_KERNEL_PROCESSOR_0_CLEAR_KERNEL_BMSK                              0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_CLEAR_KERNEL_PROCESSOR_0_CLEAR_KERNEL_SHFT                                     0x0

#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_ADDR                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0001e800)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_RMSK                                                        0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_ADDR, HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_RMSK)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_ADDR, m)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_ADDR,v)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_ADDR,m,v,HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_IN)
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_PROCESSOR_0_MASK_KERNEL_BMSK                                0xffffffff
#define HWIO_TCSR_PROCESSOR_0_COMPUTE_SIGNAL_MASK_KERNEL_PROCESSOR_0_MASK_KERNEL_SHFT                                       0x0

#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x0001f000)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_RMSK                                                      0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR, HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_RMSK)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR, m)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_PROCESSOR_1_STATUS_KERNEL_BMSK                            0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_STATUS_KERNEL_PROCESSOR_1_STATUS_KERNEL_SHFT                                   0x0

#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_KERNEL_ADDR                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x0001f400)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_KERNEL_RMSK                                                       0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_KERNEL_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_KERNEL_ADDR,v)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_KERNEL_PROCESSOR_1_CLEAR_KERNEL_BMSK                              0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_CLEAR_KERNEL_PROCESSOR_1_CLEAR_KERNEL_SHFT                                     0x0

#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_ADDR                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0001f800)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_RMSK                                                        0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_ADDR, HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_RMSK)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_ADDR, m)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_ADDR,v)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_ADDR,m,v,HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_IN)
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_PROCESSOR_1_MASK_KERNEL_BMSK                                0xffffffff
#define HWIO_TCSR_PROCESSOR_1_COMPUTE_SIGNAL_MASK_KERNEL_PROCESSOR_1_MASK_KERNEL_SHFT                                       0x0

#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR                                                      (TCSR_TCSR_REGS_REG_BASE      + 0x00020000)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_RMSK                                                      0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR, HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_RMSK)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_ADDR, m)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_PROCESSOR_2_STATUS_KERNEL_BMSK                            0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_STATUS_KERNEL_PROCESSOR_2_STATUS_KERNEL_SHFT                                   0x0

#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_KERNEL_ADDR                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00020400)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_KERNEL_RMSK                                                       0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_KERNEL_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_KERNEL_ADDR,v)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_KERNEL_PROCESSOR_2_CLEAR_KERNEL_BMSK                              0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_CLEAR_KERNEL_PROCESSOR_2_CLEAR_KERNEL_SHFT                                     0x0

#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_ADDR                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x00020800)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_RMSK                                                        0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_IN          \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_ADDR, HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_RMSK)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_ADDR, m)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_OUT(v)      \
        out_dword(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_ADDR,v)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_ADDR,m,v,HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_IN)
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_PROCESSOR_2_MASK_KERNEL_BMSK                                0xffffffff
#define HWIO_TCSR_PROCESSOR_2_COMPUTE_SIGNAL_MASK_KERNEL_PROCESSOR_2_MASK_KERNEL_SHFT                                       0x0

#define HWIO_TCSR_SS_XPU_SP_INTR0_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00021000)
#define HWIO_TCSR_SS_XPU_SP_INTR0_RMSK                                                                               0xffffffff
#define HWIO_TCSR_SS_XPU_SP_INTR0_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR0_ADDR, HWIO_TCSR_SS_XPU_SP_INTR0_RMSK)
#define HWIO_TCSR_SS_XPU_SP_INTR0_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR0_ADDR, m)
#define HWIO_TCSR_SS_XPU_SP_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SP_INTR0_BMSK                                  0x80000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SP_INTR0_SHFT                                        0x1f
#define HWIO_TCSR_SS_XPU_SP_INTR0_BOOT_ROM_XPU_SP_INTR0_BMSK                                                         0x40000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_BOOT_ROM_XPU_SP_INTR0_SHFT                                                               0x1e
#define HWIO_TCSR_SS_XPU_SP_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SP_INTR0_BMSK                                      0x20000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SP_INTR0_SHFT                                            0x1d
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC3_XPU_SP_INTR0_BMSK                                                            0x10000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC3_XPU_SP_INTR0_SHFT                                                                  0x1c
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC2_XPU_SP_INTR0_BMSK                                                             0x8000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC2_XPU_SP_INTR0_SHFT                                                                  0x1b
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC1_XPU_SP_INTR0_BMSK                                                             0x4000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC1_XPU_SP_INTR0_SHFT                                                                  0x1a
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC0_XPU_SP_INTR0_BMSK                                                             0x2000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_LLCC0_XPU_SP_INTR0_SHFT                                                                  0x19
#define HWIO_TCSR_SS_XPU_SP_INTR0_UFS_XPU_SP_INTR0_BMSK                                                               0x1000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_UFS_XPU_SP_INTR0_SHFT                                                                    0x18
#define HWIO_TCSR_SS_XPU_SP_INTR0_RESERVE_23_BMSK                                                                      0x800000
#define HWIO_TCSR_SS_XPU_SP_INTR0_RESERVE_23_SHFT                                                                          0x17
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_SDC_XPU_SP_INTR0_BMSK                                                            0x400000
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_SDC_XPU_SP_INTR0_SHFT                                                                0x16
#define HWIO_TCSR_SS_XPU_SP_INTR0_GCC_XPU_SP_INTR0_BMSK                                                                0x200000
#define HWIO_TCSR_SS_XPU_SP_INTR0_GCC_XPU_SP_INTR0_SHFT                                                                    0x15
#define HWIO_TCSR_SS_XPU_SP_INTR0_MEMNOC_XPU_SP_INTR0_BMSK                                                             0x100000
#define HWIO_TCSR_SS_XPU_SP_INTR0_MEMNOC_XPU_SP_INTR0_SHFT                                                                 0x14
#define HWIO_TCSR_SS_XPU_SP_INTR0_QM_XPU_SP_INTR0_BMSK                                                                  0x80000
#define HWIO_TCSR_SS_XPU_SP_INTR0_QM_XPU_SP_INTR0_SHFT                                                                     0x13
#define HWIO_TCSR_SS_XPU_SP_INTR0_QNM_SNOC_XPU_SP_INTR0_BMSK                                                            0x40000
#define HWIO_TCSR_SS_XPU_SP_INTR0_QNM_SNOC_XPU_SP_INTR0_SHFT                                                               0x12
#define HWIO_TCSR_SS_XPU_SP_INTR0_QHS_CNOC_XPU_SP_INTR0_BMSK                                                            0x20000
#define HWIO_TCSR_SS_XPU_SP_INTR0_QHS_CNOC_XPU_SP_INTR0_SHFT                                                               0x11
#define HWIO_TCSR_SS_XPU_SP_INTR0_QHM_AOSS_XPU_SP_INTR0_BMSK                                                            0x10000
#define HWIO_TCSR_SS_XPU_SP_INTR0_QHM_AOSS_XPU_SP_INTR0_SHFT                                                               0x10
#define HWIO_TCSR_SS_XPU_SP_INTR0_SP_XPU_SP_INTR0_BMSK                                                                   0x8000
#define HWIO_TCSR_SS_XPU_SP_INTR0_SP_XPU_SP_INTR0_SHFT                                                                      0xf
#define HWIO_TCSR_SS_XPU_SP_INTR0_PIMEM_MPU_XPU_SP_INTR0_BMSK                                                            0x4000
#define HWIO_TCSR_SS_XPU_SP_INTR0_PIMEM_MPU_XPU_SP_INTR0_SHFT                                                               0xe
#define HWIO_TCSR_SS_XPU_SP_INTR0_PIMEM_APU_XPU_SP_INTR0_BMSK                                                            0x2000
#define HWIO_TCSR_SS_XPU_SP_INTR0_PIMEM_APU_XPU_SP_INTR0_SHFT                                                               0xd
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_Q6_XPU_SP_INTR0_BMSK                                                               0x1000
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_Q6_XPU_SP_INTR0_SHFT                                                                  0xc
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_XPU_SP_INTR0_BMSK                                                                   0x800
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_XPU_SP_INTR0_SHFT                                                                     0xb
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_QUP_XPU_SP_INTR0_BMSK                                                               0x400
#define HWIO_TCSR_SS_XPU_SP_INTR0_SSC_QUP_XPU_SP_INTR0_SHFT                                                                 0xa
#define HWIO_TCSR_SS_XPU_SP_INTR0_SEC_CTRL_XPU_SP_INTR0_BMSK                                                              0x200
#define HWIO_TCSR_SS_XPU_SP_INTR0_SEC_CTRL_XPU_SP_INTR0_SHFT                                                                0x9
#define HWIO_TCSR_SS_XPU_SP_INTR0_DCC_XPU_SP_INTR0_BMSK                                                                   0x100
#define HWIO_TCSR_SS_XPU_SP_INTR0_DCC_XPU_SP_INTR0_SHFT                                                                     0x8
#define HWIO_TCSR_SS_XPU_SP_INTR0_OCIMEM_RPU_XPU_SP_INTR0_BMSK                                                             0x80
#define HWIO_TCSR_SS_XPU_SP_INTR0_OCIMEM_RPU_XPU_SP_INTR0_SHFT                                                              0x7
#define HWIO_TCSR_SS_XPU_SP_INTR0_CRYPTO0_XPU_SP_INTR0_BMSK                                                                0x40
#define HWIO_TCSR_SS_XPU_SP_INTR0_CRYPTO0_XPU_SP_INTR0_SHFT                                                                 0x6
#define HWIO_TCSR_SS_XPU_SP_INTR0_TCSR_MUTEX_XPU_SP_INTR0_BMSK                                                             0x20
#define HWIO_TCSR_SS_XPU_SP_INTR0_TCSR_MUTEX_XPU_SP_INTR0_SHFT                                                              0x5
#define HWIO_TCSR_SS_XPU_SP_INTR0_QUPV3_NORTH_XPU_SP_INTR0_BMSK                                                            0x10
#define HWIO_TCSR_SS_XPU_SP_INTR0_QUPV3_NORTH_XPU_SP_INTR0_SHFT                                                             0x4
#define HWIO_TCSR_SS_XPU_SP_INTR0_TCSR_REGS_XPU_SP_INTR0_BMSK                                                               0x8
#define HWIO_TCSR_SS_XPU_SP_INTR0_TCSR_REGS_XPU_SP_INTR0_SHFT                                                               0x3
#define HWIO_TCSR_SS_XPU_SP_INTR0_QUPV3_SOUTH_XPU_SP_INTR0_BMSK                                                             0x4
#define HWIO_TCSR_SS_XPU_SP_INTR0_QUPV3_SOUTH_XPU_SP_INTR0_SHFT                                                             0x2
#define HWIO_TCSR_SS_XPU_SP_INTR0_RPM_MPU_XPU_SP_INTR0_BMSK                                                                 0x2
#define HWIO_TCSR_SS_XPU_SP_INTR0_RPM_MPU_XPU_SP_INTR0_SHFT                                                                 0x1
#define HWIO_TCSR_SS_XPU_SP_INTR0_PMIC_ARB_XPU_SP_INTR0_BMSK                                                                0x1
#define HWIO_TCSR_SS_XPU_SP_INTR0_PMIC_ARB_XPU_SP_INTR0_SHFT                                                                0x0

#define HWIO_TCSR_SS_XPU_SP_INTR1_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00021004)
#define HWIO_TCSR_SS_XPU_SP_INTR1_RMSK                                                                                  0x7ffff
#define HWIO_TCSR_SS_XPU_SP_INTR1_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR1_ADDR, HWIO_TCSR_SS_XPU_SP_INTR1_RMSK)
#define HWIO_TCSR_SS_XPU_SP_INTR1_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR1_ADDR, m)
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_50_BMSK                                                                       0x40000
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_50_SHFT                                                                          0x12
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_49_BMSK                                                                       0x20000
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_49_SHFT                                                                          0x11
#define HWIO_TCSR_SS_XPU_SP_INTR1_SDC1_ICE_XPU_SP_INTR1_BMSK                                                            0x10000
#define HWIO_TCSR_SS_XPU_SP_INTR1_SDC1_ICE_XPU_SP_INTR1_SHFT                                                               0x10
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_NORTH_XPU_SP_INTR1_BMSK                                                           0x8000
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_NORTH_XPU_SP_INTR1_SHFT                                                              0xf
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_46_BMSK                                                                        0x4000
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_46_SHFT                                                                           0xe
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_45_BMSK                                                                        0x2000
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_45_SHFT                                                                           0xd
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_44_BMSK                                                                        0x1000
#define HWIO_TCSR_SS_XPU_SP_INTR1_RESERVE_44_SHFT                                                                           0xc
#define HWIO_TCSR_SS_XPU_SP_INTR1_IPA_XPU_SP_INTR1_BMSK                                                                   0x800
#define HWIO_TCSR_SS_XPU_SP_INTR1_IPA_XPU_SP_INTR1_SHFT                                                                     0xb
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_EAST_XPU_SP_INTR1_BMSK                                                             0x400
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_EAST_XPU_SP_INTR1_SHFT                                                               0xa
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_SOUTH_XPU_SP_INTR1_BMSK                                                            0x200
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_SOUTH_XPU_SP_INTR1_SHFT                                                              0x9
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_WEST_XPU_SEC_INTR1_BMSK                                                            0x100
#define HWIO_TCSR_SS_XPU_SP_INTR1_TLMM_WEST_XPU_SEC_INTR1_SHFT                                                              0x8
#define HWIO_TCSR_SS_XPU_SP_INTR1_MDSS_XPU_SP_INTR1_BMSK                                                                   0x80
#define HWIO_TCSR_SS_XPU_SP_INTR1_MDSS_XPU_SP_INTR1_SHFT                                                                    0x7
#define HWIO_TCSR_SS_XPU_SP_INTR1_UFS_CARD_ICE_XPU_SP_INTR1_BMSK                                                           0x40
#define HWIO_TCSR_SS_XPU_SP_INTR1_UFS_CARD_ICE_XPU_SP_INTR1_SHFT                                                            0x6
#define HWIO_TCSR_SS_XPU_SP_INTR1_TITAN_XPU_SP_INTR1_BMSK                                                                  0x20
#define HWIO_TCSR_SS_XPU_SP_INTR1_TITAN_XPU_SP_INTR1_SHFT                                                                   0x5
#define HWIO_TCSR_SS_XPU_SP_INTR1_SPDM_XPU_SP_INTR1_BMSK                                                                   0x10
#define HWIO_TCSR_SS_XPU_SP_INTR1_SPDM_XPU_SP_INTR1_SHFT                                                                    0x4
#define HWIO_TCSR_SS_XPU_SP_INTR1_QXM_MSS_NAV_XPU_SP_INTR1_BMSK                                                             0x8
#define HWIO_TCSR_SS_XPU_SP_INTR1_QXM_MSS_NAV_XPU_SP_INTR1_SHFT                                                             0x3
#define HWIO_TCSR_SS_XPU_SP_INTR1_QNM_AGGRE2_XPU_SP_INTR1_BMSK                                                              0x4
#define HWIO_TCSR_SS_XPU_SP_INTR1_QNM_AGGRE2_XPU_SP_INTR1_SHFT                                                              0x2
#define HWIO_TCSR_SS_XPU_SP_INTR1_QNM_AGGRE1_XPU_SP_INTR1_BMSK                                                              0x2
#define HWIO_TCSR_SS_XPU_SP_INTR1_QNM_AGGRE1_XPU_SP_INTR1_SHFT                                                              0x1
#define HWIO_TCSR_SS_XPU_SP_INTR1_OCIMEM_XPU3_XPU_SP_INTR1_BMSK                                                             0x1
#define HWIO_TCSR_SS_XPU_SP_INTR1_OCIMEM_XPU3_XPU_SP_INTR1_SHFT                                                             0x0

#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x00021008)
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_RMSK                                                                        0xffffffff
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_ADDR, HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SP_INTR0_ENABLE_BMSK                    0x80000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_DTP_QHS_NON_BROADCAST_MPU_MAINO_XPU_SP_INTR0_ENABLE_SHFT                          0x1f
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_BOOT_ROM_XPU_SP_INTR0_ENABLE_BMSK                                           0x40000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_BOOT_ROM_XPU_SP_INTR0_ENABLE_SHFT                                                 0x1e
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SP_INTR0_ENABLE_BMSK                        0x20000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_DTP_QHS_BROADCAST_MPU_MAINO_XPU_SP_INTR0_ENABLE_SHFT                              0x1d
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC3_XPU_SP_INTR0_ENABLE_BMSK                                              0x10000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC3_XPU_SP_INTR0_ENABLE_SHFT                                                    0x1c
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC2_XPU_SP_INTR0_ENABLE_BMSK                                               0x8000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC2_XPU_SP_INTR0_ENABLE_SHFT                                                    0x1b
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC1_XPU_SP_INTR0_ENABLE_BMSK                                               0x4000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC1_XPU_SP_INTR0_ENABLE_SHFT                                                    0x1a
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC0_XPU_SP_INTR0_ENABLE_BMSK                                               0x2000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_LLCC0_XPU_SP_INTR0_ENABLE_SHFT                                                    0x19
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_UFS_XPU_SP_INTR0_ENABLE_BMSK                                                 0x1000000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_UFS_XPU_SP_INTR0_ENABLE_SHFT                                                      0x18
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_RESERVE_23_BMSK                                                               0x800000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_RESERVE_23_SHFT                                                                   0x17
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_SDC_XPU_SP_INTR0_ENABLE_BMSK                                              0x400000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_SDC_XPU_SP_INTR0_ENABLE_SHFT                                                  0x16
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_GCC_XPU_SP_INTR0_ENABLE_BMSK                                                  0x200000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_GCC_XPU_SP_INTR0_ENABLE_SHFT                                                      0x15
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_MEMNOC_XPU_SP_INTR0_ENABLE_BMSK                                               0x100000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_MEMNOC_XPU_SP_INTR0_ENABLE_SHFT                                                   0x14
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QM_XPU_SP_INTR0_ENABLE_BMSK                                                    0x80000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QM_XPU_SP_INTR0_ENABLE_SHFT                                                       0x13
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QNM_SNOC_XPU_SP_INTR0_ENABLE_BMSK                                              0x40000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QNM_SNOC_XPU_SP_INTR0_ENABLE_SHFT                                                 0x12
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QHS_CNOC_XPU_SP_INTR0_ENABLE_BMSK                                              0x20000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QHS_CNOC_XPU_SP_INTR0_ENABLE_SHFT                                                 0x11
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QHM_AOSS_XPU_SP_INTR0_ENABLE_BMSK                                              0x10000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QHM_AOSS_XPU_SP_INTR0_ENABLE_SHFT                                                 0x10
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SP_XPU_SP_INTR0_ENABLE_BMSK                                                     0x8000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SP_XPU_SP_INTR0_ENABLE_SHFT                                                        0xf
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_PIMEM_MPU_XPU_SP_INTR0_ENABLE_BMSK                                              0x4000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_PIMEM_MPU_XPU_SP_INTR0_ENABLE_SHFT                                                 0xe
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_PIMEM_APU_XPU_SP_INTR0_ENABLE_BMSK                                              0x2000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_PIMEM_APU_XPU_SP_INTR0_ENABLE_SHFT                                                 0xd
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_Q6_XPU_SP_INTR0_ENABLE_BMSK                                                 0x1000
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_Q6_XPU_SP_INTR0_ENABLE_SHFT                                                    0xc
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_XPU_SP_INTR0_ENABLE_BMSK                                                     0x800
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_XPU_SP_INTR0_ENABLE_SHFT                                                       0xb
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_QUP_XPU_SP_INTR0_ENABLE_BMSK                                                 0x400
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SSC_QUP_XPU_SP_INTR0_ENABLE_SHFT                                                   0xa
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SEC_CTRL_XPU_SP_INTR0_ENABLE_BMSK                                                0x200
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_SEC_CTRL_XPU_SP_INTR0_ENABLE_SHFT                                                  0x9
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_DCC_XPU_SP_INTR0_ENABLE_BMSK                                                     0x100
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_DCC_XPU_SP_INTR0_ENABLE_SHFT                                                       0x8
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_OCIMEM_RPU_XPU_SP_INTR0_ENABLE_BMSK                                               0x80
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_OCIMEM_RPU_XPU_SP_INTR0_ENABLE_SHFT                                                0x7
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_CRYPTO0_XPU_SP_INTR0_ENABLE_BMSK                                                  0x40
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_CRYPTO0_XPU_SP_INTR0_ENABLE_SHFT                                                   0x6
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_TCSR_MUTEX_XPU_SP_INTR0_ENABLE_BMSK                                               0x20
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_TCSR_MUTEX_XPU_SP_INTR0_ENABLE_SHFT                                                0x5
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QUPV3_NORTH_XPU_SP_INTR0_ENABLE_BMSK                                              0x10
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QUPV3_NORTH_XPU_SP_INTR0_ENABLE_SHFT                                               0x4
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_TCSR_REGS_XPU_SP_INTR0_ENABLE_BMSK                                                 0x8
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_TCSR_REGS_XPU_SP_INTR0_ENABLE_SHFT                                                 0x3
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QUPV3_SOUTH_XPU_SP_INTR0_ENABLE_BMSK                                               0x4
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_QUPV3_SOUTH_XPU_SP_INTR0_ENABLE_SHFT                                               0x2
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_RPM_MPU_XPU_SP_INTR0_ENABLE_BMSK                                                   0x2
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_RPM_MPU_XPU_SP_INTR0_ENABLE_SHFT                                                   0x1
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_PMIC_ARB_XPU_SP_INTR0_ENABLE_BMSK                                                  0x1
#define HWIO_TCSR_SS_XPU_SP_INTR0_ENABLE_PMIC_ARB_XPU_SP_INTR0_ENABLE_SHFT                                                  0x0

#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x0002100c)
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RMSK                                                                           0x7ffff
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_ADDR, HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RMSK)
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_ADDR, m)
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_ADDR,v)
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_ADDR,m,v,HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_IN)
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_50_BMSK                                                                0x40000
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_50_SHFT                                                                   0x12
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_49_BMSK                                                                0x20000
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_49_SHFT                                                                   0x11
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_SDC1_ICE_XPU_SP_INTR1_ENABLE_BMSK                                              0x10000
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_SDC1_ICE_XPU_SP_INTR1_ENABLE_SHFT                                                 0x10
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_NORTH_XPU_SP_INTR1_ENABLE_BMSK                                             0x8000
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_NORTH_XPU_SP_INTR1_ENABLE_SHFT                                                0xf
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_46_BMSK                                                                 0x4000
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_46_SHFT                                                                    0xe
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_45_BMSK                                                                 0x2000
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_45_SHFT                                                                    0xd
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_44_BMSK                                                                 0x1000
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_RESERVE_44_SHFT                                                                    0xc
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_IPA_XPU_SP_INTR1_ENABLE_BMSK                                                     0x800
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_IPA_XPU_SP_INTR1_ENABLE_SHFT                                                       0xb
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_EAST_XPU_SP_INTR1_ENABLE_BMSK                                               0x400
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_EAST_XPU_SP_INTR1_ENABLE_SHFT                                                 0xa
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_SOUTH_XPU_SP_INTR1_ENABLE_BMSK                                              0x200
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_SOUTH_XPU_SP_INTR1_ENABLE_SHFT                                                0x9
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_BMSK                                              0x100
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TLMM_WEST_XPU_SEC_INTR1_ENABLE_SHFT                                                0x8
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_MDSS_XPU_SP_INTR1_ENABLE_BMSK                                                     0x80
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_MDSS_XPU_SP_INTR1_ENABLE_SHFT                                                      0x7
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_UFS_CARD_ICE_XPU_SP_INTR1_ENABLE_BMSK                                             0x40
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_UFS_CARD_ICE_XPU_SP_INTR1_ENABLE_SHFT                                              0x6
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TITAN_XPU_SP_INTR1_ENABLE_BMSK                                                    0x20
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_TITAN_XPU_SP_INTR1_ENABLE_SHFT                                                     0x5
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_SPDM_XPU_SP_INTR1_ENABLE_BMSK                                                     0x10
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_SPDM_XPU_SP_INTR1_ENABLE_SHFT                                                      0x4
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_QXM_MSS_NAV_XPU_SP_INTR1_ENABLE_BMSK                                               0x8
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_QXM_MSS_NAV_XPU_SP_INTR1_ENABLE_SHFT                                               0x3
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_QNM_AGGRE2_XPU_SP_INTR1_ENABLE_BMSK                                                0x4
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_QNM_AGGRE2_XPU_SP_INTR1_ENABLE_SHFT                                                0x2
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_QNM_AGGRE1_XPU_SP_INTR1_ENABLE_BMSK                                                0x2
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_QNM_AGGRE1_XPU_SP_INTR1_ENABLE_SHFT                                                0x1
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_OCIMEM_XPU3_XPU_SP_INTR1_ENABLE_BMSK                                               0x1
#define HWIO_TCSR_SS_XPU_SP_INTR1_ENABLE_OCIMEM_XPU3_XPU_SP_INTR1_ENABLE_SHFT                                               0x0

#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_ADDR                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x00022000)
#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_RMSK                                                                          0x1
#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_ADDR, HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_RMSK)
#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_ADDR, m)
#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_ADDR,v)
#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_ADDR,m,v,HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_IN)
#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_DBGOVR_COMPILER_MEM_ACC_SEL_BMSK                                              0x1
#define HWIO_TCSR_DBGOVR_COMPILER_MEM_ACC_SEL_DBGOVR_COMPILER_MEM_ACC_SEL_SHFT                                              0x0

#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_ADDR                                                                     (TCSR_TCSR_REGS_REG_BASE      + 0x00022004)
#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_RMSK                                                                            0x1
#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_ADDR, HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_RMSK)
#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_ADDR, m)
#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_ADDR,v)
#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_ADDR,m,v,HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_IN)
#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_DBGOVR_CUSTOM_MEM_ACC_SEL_BMSK                                                  0x1
#define HWIO_TCSR_DBGOVR_CUSTOM_MEM_ACC_SEL_DBGOVR_CUSTOM_MEM_ACC_SEL_SHFT                                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00022010)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_DBGOVR_VALUE_COMPILER_MEM_ACC_0_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_0_DBGOVR_VALUE_COMPILER_MEM_ACC_0_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00022014)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_DBGOVR_VALUE_COMPILER_MEM_ACC_1_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_1_DBGOVR_VALUE_COMPILER_MEM_ACC_1_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00022018)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_DBGOVR_VALUE_COMPILER_MEM_ACC_2_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_2_DBGOVR_VALUE_COMPILER_MEM_ACC_2_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0002201c)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_DBGOVR_VALUE_COMPILER_MEM_ACC_3_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_3_DBGOVR_VALUE_COMPILER_MEM_ACC_3_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00022020)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_DBGOVR_VALUE_COMPILER_MEM_ACC_4_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_4_DBGOVR_VALUE_COMPILER_MEM_ACC_4_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00022024)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_DBGOVR_VALUE_COMPILER_MEM_ACC_5_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_5_DBGOVR_VALUE_COMPILER_MEM_ACC_5_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00022028)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_DBGOVR_VALUE_COMPILER_MEM_ACC_6_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_6_DBGOVR_VALUE_COMPILER_MEM_ACC_6_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_ADDR                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0002202c)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_RMSK                                                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_ADDR, HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_IN)
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_DBGOVR_VALUE_COMPILER_MEM_ACC_7_BMSK                                     0xff
#define HWIO_TCSR_DBGOVR_VALUE_COMPILER_MEM_ACC_7_DBGOVR_VALUE_COMPILER_MEM_ACC_7_SHFT                                      0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00022030)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE1_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00022034)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE2_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00022038)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE3_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x0002203c)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE4_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00022040)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE5_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00022044)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE6_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00022048)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE7_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x0002204c)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE8_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_ADDR                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00022050)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_RMSK                                                                   0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_BMSK                                 0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE9_SHFT                                  0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022054)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE10_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022058)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE11_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x0002205c)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE12_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022060)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE13_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022064)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE14_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022068)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE15_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x0002206c)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE16_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022070)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE17_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022074)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE18_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022078)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE19_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x0002207c)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE20_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022080)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE21_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022084)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE22_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022088)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE23_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x0002208c)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE24_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00022090)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE25_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x0002209c)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE26_SHFT                                0x0

#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_ADDR                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x000220a0)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_RMSK                                                                  0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_IN          \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_ADDR, HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_RMSK)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_INM(m)      \
        in_dword_masked(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_ADDR, m)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_OUT(v)      \
        out_dword(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_ADDR,v)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_ADDR,m,v,HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_IN)
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_BMSK                               0xff
#define HWIO_TCSR_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_DBGOVR_VALUE_CUSTOM_MEM_ACC_TYPE27_SHFT                                0x0

#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x00023000)
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_RMSK                                                                               0x3
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_IN          \
        in_dword_masked(HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_ADDR, HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_RMSK)
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_INM(m)      \
        in_dword_masked(HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_ADDR, m)
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_OUT(v)      \
        out_dword(HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_ADDR,v)
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_ADDR,m,v,HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_IN)
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_A1NOC_SP_BYPASS_CHECK_TYPE_BMSK                                                    0x2
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_A1NOC_SP_BYPASS_CHECK_TYPE_SHFT                                                    0x1
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_A1NOC_MSA_BYPASS_CHECK_TYPE_BMSK                                                   0x1
#define HWIO_TCSR_A1NOC_BYPASS_CHECKTYPE_A1NOC_MSA_BYPASS_CHECK_TYPE_SHFT                                                   0x0

#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_ADDR                                                                        (TCSR_TCSR_REGS_REG_BASE      + 0x00023004)
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_RMSK                                                                               0x3
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_IN          \
        in_dword_masked(HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_ADDR, HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_RMSK)
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_INM(m)      \
        in_dword_masked(HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_ADDR, m)
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_OUT(v)      \
        out_dword(HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_ADDR,v)
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_ADDR,m,v,HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_IN)
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_A2NOC_SP_BYPASS_CHECK_TYPE_BMSK                                                    0x2
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_A2NOC_SP_BYPASS_CHECK_TYPE_SHFT                                                    0x1
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_A2NOC_MSA_BYPASS_CHECK_TYPE_BMSK                                                   0x1
#define HWIO_TCSR_A2NOC_BYPASS_CHECKTYPE_A2NOC_MSA_BYPASS_CHECK_TYPE_SHFT                                                   0x0

#define HWIO_TCSR_WCSS_TESTBUS_SEL_ADDR                                                                              (TCSR_TCSR_REGS_REG_BASE      + 0x00024000)
#define HWIO_TCSR_WCSS_TESTBUS_SEL_RMSK                                                                                    0xff
#define HWIO_TCSR_WCSS_TESTBUS_SEL_IN          \
        in_dword_masked(HWIO_TCSR_WCSS_TESTBUS_SEL_ADDR, HWIO_TCSR_WCSS_TESTBUS_SEL_RMSK)
#define HWIO_TCSR_WCSS_TESTBUS_SEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_WCSS_TESTBUS_SEL_ADDR, m)
#define HWIO_TCSR_WCSS_TESTBUS_SEL_OUT(v)      \
        out_dword(HWIO_TCSR_WCSS_TESTBUS_SEL_ADDR,v)
#define HWIO_TCSR_WCSS_TESTBUS_SEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_WCSS_TESTBUS_SEL_ADDR,m,v,HWIO_TCSR_WCSS_TESTBUS_SEL_IN)
#define HWIO_TCSR_WCSS_TESTBUS_SEL_WCSS_TESTBUS_SEL_BMSK                                                                   0xff
#define HWIO_TCSR_WCSS_TESTBUS_SEL_WCSS_TESTBUS_SEL_SHFT                                                                    0x0

#define HWIO_TCSR_WCSS_AHBBM_CTRL_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00024004)
#define HWIO_TCSR_WCSS_AHBBM_CTRL_RMSK                                                                                      0x7
#define HWIO_TCSR_WCSS_AHBBM_CTRL_IN          \
        in_dword_masked(HWIO_TCSR_WCSS_AHBBM_CTRL_ADDR, HWIO_TCSR_WCSS_AHBBM_CTRL_RMSK)
#define HWIO_TCSR_WCSS_AHBBM_CTRL_INM(m)      \
        in_dword_masked(HWIO_TCSR_WCSS_AHBBM_CTRL_ADDR, m)
#define HWIO_TCSR_WCSS_AHBBM_CTRL_OUT(v)      \
        out_dword(HWIO_TCSR_WCSS_AHBBM_CTRL_ADDR,v)
#define HWIO_TCSR_WCSS_AHBBM_CTRL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_WCSS_AHBBM_CTRL_ADDR,m,v,HWIO_TCSR_WCSS_AHBBM_CTRL_IN)
#define HWIO_TCSR_WCSS_AHBBM_CTRL_AHBBM_SOFT_RESET_BMSK                                                                     0x4
#define HWIO_TCSR_WCSS_AHBBM_CTRL_AHBBM_SOFT_RESET_SHFT                                                                     0x2
#define HWIO_TCSR_WCSS_AHBBM_CTRL_AHBBM_CLKGATE_DISABLE_BMSK                                                                0x2
#define HWIO_TCSR_WCSS_AHBBM_CTRL_AHBBM_CLKGATE_DISABLE_SHFT                                                                0x1
#define HWIO_TCSR_WCSS_AHBBM_CTRL_AHBBM_ROOT_CLK_ENABLE_BMSK                                                                0x1
#define HWIO_TCSR_WCSS_AHBBM_CTRL_AHBBM_ROOT_CLK_ENABLE_SHFT                                                                0x0

#define HWIO_TCSR_KRYO_MUX_SEL_ADDR                                                                                  (TCSR_TCSR_REGS_REG_BASE      + 0x00025008)
#define HWIO_TCSR_KRYO_MUX_SEL_RMSK                                                                                         0x3
#define HWIO_TCSR_KRYO_MUX_SEL_IN          \
        in_dword_masked(HWIO_TCSR_KRYO_MUX_SEL_ADDR, HWIO_TCSR_KRYO_MUX_SEL_RMSK)
#define HWIO_TCSR_KRYO_MUX_SEL_INM(m)      \
        in_dword_masked(HWIO_TCSR_KRYO_MUX_SEL_ADDR, m)
#define HWIO_TCSR_KRYO_MUX_SEL_OUT(v)      \
        out_dword(HWIO_TCSR_KRYO_MUX_SEL_ADDR,v)
#define HWIO_TCSR_KRYO_MUX_SEL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_KRYO_MUX_SEL_ADDR,m,v,HWIO_TCSR_KRYO_MUX_SEL_IN)
#define HWIO_TCSR_KRYO_MUX_SEL_KRYO_MUX_SEL_BMSK                                                                            0x3
#define HWIO_TCSR_KRYO_MUX_SEL_KRYO_MUX_SEL_SHFT                                                                            0x0

#define HWIO_TCSR_APSS_BHS_EN_ADDR                                                                                   (TCSR_TCSR_REGS_REG_BASE      + 0x0002500c)
#define HWIO_TCSR_APSS_BHS_EN_RMSK                                                                                         0xff
#define HWIO_TCSR_APSS_BHS_EN_IN          \
        in_dword_masked(HWIO_TCSR_APSS_BHS_EN_ADDR, HWIO_TCSR_APSS_BHS_EN_RMSK)
#define HWIO_TCSR_APSS_BHS_EN_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_BHS_EN_ADDR, m)
#define HWIO_TCSR_APSS_BHS_EN_OUT(v)      \
        out_dword(HWIO_TCSR_APSS_BHS_EN_ADDR,v)
#define HWIO_TCSR_APSS_BHS_EN_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_APSS_BHS_EN_ADDR,m,v,HWIO_TCSR_APSS_BHS_EN_IN)
#define HWIO_TCSR_APSS_BHS_EN_APSS_BHS_EN_BMSK                                                                             0xff
#define HWIO_TCSR_APSS_BHS_EN_APSS_BHS_EN_SHFT                                                                              0x0

#define HWIO_TCSR_APSS_BHS_EN_STATUS_ADDR                                                                            (TCSR_TCSR_REGS_REG_BASE      + 0x00025010)
#define HWIO_TCSR_APSS_BHS_EN_STATUS_RMSK                                                                                  0xff
#define HWIO_TCSR_APSS_BHS_EN_STATUS_IN          \
        in_dword_masked(HWIO_TCSR_APSS_BHS_EN_STATUS_ADDR, HWIO_TCSR_APSS_BHS_EN_STATUS_RMSK)
#define HWIO_TCSR_APSS_BHS_EN_STATUS_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_BHS_EN_STATUS_ADDR, m)
#define HWIO_TCSR_APSS_BHS_EN_STATUS_APSS_BHS_EN_STATUS_BMSK                                                               0xff
#define HWIO_TCSR_APSS_BHS_EN_STATUS_APSS_BHS_EN_STATUS_SHFT                                                                0x0

#define HWIO_TCSR_APSS_SPARE_REG0_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00025014)
#define HWIO_TCSR_APSS_SPARE_REG0_RMSK                                                                               0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG0_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG0_ADDR, HWIO_TCSR_APSS_SPARE_REG0_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG0_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG0_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG0_OUT(v)      \
        out_dword(HWIO_TCSR_APSS_SPARE_REG0_ADDR,v)
#define HWIO_TCSR_APSS_SPARE_REG0_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_APSS_SPARE_REG0_ADDR,m,v,HWIO_TCSR_APSS_SPARE_REG0_IN)
#define HWIO_TCSR_APSS_SPARE_REG0_SPARE_REG0_BMSK                                                                    0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG0_SPARE_REG0_SHFT                                                                           0x0

#define HWIO_TCSR_APSS_SPARE_REG1_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00025018)
#define HWIO_TCSR_APSS_SPARE_REG1_RMSK                                                                               0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG1_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG1_ADDR, HWIO_TCSR_APSS_SPARE_REG1_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG1_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG1_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG1_OUT(v)      \
        out_dword(HWIO_TCSR_APSS_SPARE_REG1_ADDR,v)
#define HWIO_TCSR_APSS_SPARE_REG1_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_APSS_SPARE_REG1_ADDR,m,v,HWIO_TCSR_APSS_SPARE_REG1_IN)
#define HWIO_TCSR_APSS_SPARE_REG1_SPARE_REG1_BMSK                                                                    0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG1_SPARE_REG1_SHFT                                                                           0x0

#define HWIO_TCSR_APSS_SPARE_REG2_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x0002501c)
#define HWIO_TCSR_APSS_SPARE_REG2_RMSK                                                                               0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG2_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG2_ADDR, HWIO_TCSR_APSS_SPARE_REG2_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG2_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG2_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG2_OUT(v)      \
        out_dword(HWIO_TCSR_APSS_SPARE_REG2_ADDR,v)
#define HWIO_TCSR_APSS_SPARE_REG2_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_APSS_SPARE_REG2_ADDR,m,v,HWIO_TCSR_APSS_SPARE_REG2_IN)
#define HWIO_TCSR_APSS_SPARE_REG2_SPARE_REG2_BMSK                                                                    0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG2_SPARE_REG2_SHFT                                                                           0x0

#define HWIO_TCSR_APSS_SPARE_REG3_ADDR                                                                               (TCSR_TCSR_REGS_REG_BASE      + 0x00025020)
#define HWIO_TCSR_APSS_SPARE_REG3_RMSK                                                                               0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG3_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG3_ADDR, HWIO_TCSR_APSS_SPARE_REG3_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG3_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG3_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG3_OUT(v)      \
        out_dword(HWIO_TCSR_APSS_SPARE_REG3_ADDR,v)
#define HWIO_TCSR_APSS_SPARE_REG3_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_APSS_SPARE_REG3_ADDR,m,v,HWIO_TCSR_APSS_SPARE_REG3_IN)
#define HWIO_TCSR_APSS_SPARE_REG3_SPARE_REG3_BMSK                                                                    0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG3_SPARE_REG3_SHFT                                                                           0x0

#define HWIO_TCSR_APSS_SPARE_REG_RD_0_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x00025024)
#define HWIO_TCSR_APSS_SPARE_REG_RD_0_RMSK                                                                           0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_0_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_0_ADDR, HWIO_TCSR_APSS_SPARE_REG_RD_0_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG_RD_0_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_0_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG_RD_0_SPARE_REG_RD_0_BMSK                                                            0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_0_SPARE_REG_RD_0_SHFT                                                                   0x0

#define HWIO_TCSR_APSS_SPARE_REG_RD_1_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x00025028)
#define HWIO_TCSR_APSS_SPARE_REG_RD_1_RMSK                                                                           0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_1_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_1_ADDR, HWIO_TCSR_APSS_SPARE_REG_RD_1_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG_RD_1_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_1_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG_RD_1_SPARE_REG_RD_1_BMSK                                                            0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_1_SPARE_REG_RD_1_SHFT                                                                   0x0

#define HWIO_TCSR_APSS_SPARE_REG_RD_2_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x0002502c)
#define HWIO_TCSR_APSS_SPARE_REG_RD_2_RMSK                                                                           0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_2_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_2_ADDR, HWIO_TCSR_APSS_SPARE_REG_RD_2_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG_RD_2_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_2_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG_RD_2_SPARE_REG_RD_2_BMSK                                                            0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_2_SPARE_REG_RD_2_SHFT                                                                   0x0

#define HWIO_TCSR_APSS_SPARE_REG_RD_3_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x00025030)
#define HWIO_TCSR_APSS_SPARE_REG_RD_3_RMSK                                                                           0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_3_IN          \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_3_ADDR, HWIO_TCSR_APSS_SPARE_REG_RD_3_RMSK)
#define HWIO_TCSR_APSS_SPARE_REG_RD_3_INM(m)      \
        in_dword_masked(HWIO_TCSR_APSS_SPARE_REG_RD_3_ADDR, m)
#define HWIO_TCSR_APSS_SPARE_REG_RD_3_SPARE_REG_RD_3_BMSK                                                            0xffffffff
#define HWIO_TCSR_APSS_SPARE_REG_RD_3_SPARE_REG_RD_3_SHFT                                                                   0x0

#define HWIO_TCSR_BOOT_IMEM_START_ADDRESS_ADDR                                                                       (TCSR_TCSR_REGS_REG_BASE      + 0x00013100)
#define HWIO_TCSR_BOOT_IMEM_START_ADDRESS_RMSK                                                                       0xffffffff
#define HWIO_TCSR_BOOT_IMEM_START_ADDRESS_IN          \
        in_dword_masked(HWIO_TCSR_BOOT_IMEM_START_ADDRESS_ADDR, HWIO_TCSR_BOOT_IMEM_START_ADDRESS_RMSK)
#define HWIO_TCSR_BOOT_IMEM_START_ADDRESS_INM(m)      \
        in_dword_masked(HWIO_TCSR_BOOT_IMEM_START_ADDRESS_ADDR, m)
#define HWIO_TCSR_BOOT_IMEM_START_ADDRESS_BOOT_IMEM_START_ADDRESS_BMSK                                               0xffffffff
#define HWIO_TCSR_BOOT_IMEM_START_ADDRESS_BOOT_IMEM_START_ADDRESS_SHFT                                                      0x0

#define HWIO_TCSR_BOOT_IMEM_SIZE_ADDR                                                                                (TCSR_TCSR_REGS_REG_BASE      + 0x00013200)
#define HWIO_TCSR_BOOT_IMEM_SIZE_RMSK                                                                                0xffffffff
#define HWIO_TCSR_BOOT_IMEM_SIZE_IN          \
        in_dword_masked(HWIO_TCSR_BOOT_IMEM_SIZE_ADDR, HWIO_TCSR_BOOT_IMEM_SIZE_RMSK)
#define HWIO_TCSR_BOOT_IMEM_SIZE_INM(m)      \
        in_dword_masked(HWIO_TCSR_BOOT_IMEM_SIZE_ADDR, m)
#define HWIO_TCSR_BOOT_IMEM_SIZE_BOOT_IMEM_SIZE_BMSK                                                                 0xffffffff
#define HWIO_TCSR_BOOT_IMEM_SIZE_BOOT_IMEM_SIZE_SHFT                                                                        0x0

#define HWIO_TCSR_BOOT_IMEM_DISABLE_ADDR                                                                             (TCSR_TCSR_REGS_REG_BASE      + 0x00013300)
#define HWIO_TCSR_BOOT_IMEM_DISABLE_RMSK                                                                                    0x1
#define HWIO_TCSR_BOOT_IMEM_DISABLE_IN          \
        in_dword_masked(HWIO_TCSR_BOOT_IMEM_DISABLE_ADDR, HWIO_TCSR_BOOT_IMEM_DISABLE_RMSK)
#define HWIO_TCSR_BOOT_IMEM_DISABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_BOOT_IMEM_DISABLE_ADDR, m)
#define HWIO_TCSR_BOOT_IMEM_DISABLE_OUT(v)      \
        out_dword(HWIO_TCSR_BOOT_IMEM_DISABLE_ADDR,v)
#define HWIO_TCSR_BOOT_IMEM_DISABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_BOOT_IMEM_DISABLE_ADDR,m,v,HWIO_TCSR_BOOT_IMEM_DISABLE_IN)
#define HWIO_TCSR_BOOT_IMEM_DISABLE_BOOT_IMEM_DISABLE_BMSK                                                                  0x1
#define HWIO_TCSR_BOOT_IMEM_DISABLE_BOOT_IMEM_DISABLE_SHFT                                                                  0x0

#define HWIO_TCSR_BIAS_REF_LS_EN_ADDR                                                                                (TCSR_TCSR_REGS_REG_BASE      + 0x00026000)
#define HWIO_TCSR_BIAS_REF_LS_EN_RMSK                                                                                      0x3f
#define HWIO_TCSR_BIAS_REF_LS_EN_IN          \
        in_dword_masked(HWIO_TCSR_BIAS_REF_LS_EN_ADDR, HWIO_TCSR_BIAS_REF_LS_EN_RMSK)
#define HWIO_TCSR_BIAS_REF_LS_EN_INM(m)      \
        in_dword_masked(HWIO_TCSR_BIAS_REF_LS_EN_ADDR, m)
#define HWIO_TCSR_BIAS_REF_LS_EN_OUT(v)      \
        out_dword(HWIO_TCSR_BIAS_REF_LS_EN_ADDR,v)
#define HWIO_TCSR_BIAS_REF_LS_EN_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_BIAS_REF_LS_EN_ADDR,m,v,HWIO_TCSR_BIAS_REF_LS_EN_IN)
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_3_AUXBUF_EN_BMSK                                                              0x20
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_3_AUXBUF_EN_SHFT                                                               0x5
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_3_ATEST_EN_BMSK                                                               0x10
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_3_ATEST_EN_SHFT                                                                0x4
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_2_AUXBUF_EN_BMSK                                                               0x8
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_2_AUXBUF_EN_SHFT                                                               0x3
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_2_ATEST_EN_BMSK                                                                0x4
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_2_ATEST_EN_SHFT                                                                0x2
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_1_AUXBUF_EN_BMSK                                                               0x2
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_1_AUXBUF_EN_SHFT                                                               0x1
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_1_ATEST_EN_BMSK                                                                0x1
#define HWIO_TCSR_BIAS_REF_LS_EN_BIAS_REF_LS_1_ATEST_EN_SHFT                                                                0x0

#define HWIO_TCSR_REFGEN_QLINK_ENABLE_ADDR                                                                           (TCSR_TCSR_REGS_REG_BASE      + 0x0002c000)
#define HWIO_TCSR_REFGEN_QLINK_ENABLE_RMSK                                                                                  0x1
#define HWIO_TCSR_REFGEN_QLINK_ENABLE_IN          \
        in_dword_masked(HWIO_TCSR_REFGEN_QLINK_ENABLE_ADDR, HWIO_TCSR_REFGEN_QLINK_ENABLE_RMSK)
#define HWIO_TCSR_REFGEN_QLINK_ENABLE_INM(m)      \
        in_dword_masked(HWIO_TCSR_REFGEN_QLINK_ENABLE_ADDR, m)
#define HWIO_TCSR_REFGEN_QLINK_ENABLE_OUT(v)      \
        out_dword(HWIO_TCSR_REFGEN_QLINK_ENABLE_ADDR,v)
#define HWIO_TCSR_REFGEN_QLINK_ENABLE_OUTM(m,v) \
        out_dword_masked_ns(HWIO_TCSR_REFGEN_QLINK_ENABLE_ADDR,m,v,HWIO_TCSR_REFGEN_QLINK_ENABLE_IN)
#define HWIO_TCSR_REFGEN_QLINK_ENABLE_REFGEN_QLINK_ENABLE_BMSK                                                              0x1
#define HWIO_TCSR_REFGEN_QLINK_ENABLE_REFGEN_QLINK_ENABLE_SHFT                                                              0x0

/*----------------------------------------------------------------------------
 * MODULE: LPASS_CSR
 *--------------------------------------------------------------------------*/

#define LPASS_CSR_REG_BASE                                                                              (LPASS_BASE      + 0x00cc0000)

#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_ADDR                                             (LPASS_CSR_REG_BASE      + 0x0001a008)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_RMSK                                                    0x1
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_IN          \
        in_dword_masked(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_ADDR, HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_RMSK)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_INM(m)      \
        in_dword_masked(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_ADDR, m)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_OUT(v)      \
        out_dword(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_ADDR,v)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_ADDR,m,v,HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_IN)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_TIMEBASE_EN_BMSK                                        0x1
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_TIMEBASE_CTL_TIMEBASE_EN_SHFT                                        0x0

#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_ADDR                                        (LPASS_CSR_REG_BASE      + 0x0001c008)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_RMSK                                               0x1
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_IN          \
        in_dword_masked(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_ADDR, HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_RMSK)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_INM(m)      \
        in_dword_masked(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_ADDR, m)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_OUT(v)      \
        out_dword(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_ADDR,v)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_OUTM(m,v) \
        out_dword_masked_ns(HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_ADDR,m,v,HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_IN)
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_TIMEBASE_EN_BMSK                                   0x1
#define HWIO_LPASS_AUDIO_CORE_BUS_TIMEOUT_AHBL_TIMEBASE_CTL_TIMEBASE_EN_SHFT                                   0x0


#endif /* __ABTIMEOUT_HWIO_H__ */
