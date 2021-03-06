/*==============================================================================

    D A L I N T E R R U P T   C O N T R O L L E R    



  DESCRIPTION
   This file is autogenerated for interrupt controller config for this platform.

          Copyright (c) 2014-2017 QUALCOMM Technologies Incorporated.
                 All Rights Reserved.
              QUALCOMM Proprietary/GTDR

  ===========================================================================*/


#include "DALReg.h"
#include "DDIInterruptController.h"
#include "InterruptControllerInterface.h"

static InterruptConfigType InterruptConfigs[] = 
{
  {6,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_3_irq"},
  {7,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"vapss_hcp_noc_err_internal"},
  {9,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"vapss_dma_noc_err_internal"},
  {11,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"vapss_tcm_noc_err_internal"},
  {12,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vapss_vma_err"},
  {14,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[0]"},
  {16,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vapss_ubwcdma_err"},
  {18,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_in018"},
  {19,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_in019"},
  {20,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vapss_vma"},
  {21,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[1]"},
  {23,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_2_csid_irq"},
  {24,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vapss_vma_strm"},
  {25,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"intr_npu_master1_ecc_nxsingle_bit_err_irq"},
  {28,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vapss_ubwcdma"},
  {29,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[2]"},
  {31,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_cti"},
  {32,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"mss_ipc_out_irq[13]"},
  {33,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"aop_ipc[18]"},
  {34,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"APSS_cdspIPCInterrupt[2]"},
  {35,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"mss_ipc_out_irq[12]"},
  {39,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"aop_ipc[20]"},
  {41,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"turing_rsc_rsc_error"},
  {42,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_3_csid_irq"},
  {46,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"bus"},
  {47,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[3]"},
  {48,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"mss_ipc_out_irq[14]"},
  {55,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[4]"},
  {56,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"aop_ipc[19]"},
  {58,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_wdog"},
  {59,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"APSS_cdspIPCInterrupt[1]"},
  {60,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cci_2_irq"},
  {61,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"turing_rsc_core_comp"},
  {69,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"o_cdsp_bwmon_intr"},
  {71,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[5]"},
  {72,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"APSS_cdspIPCInterrupt[0]"},
  {74,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[19]"},
  {78,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cci_3_irq"},
  {79,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[6]"},
  {83,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"mdp_vsync_e"},
  {86,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[7]"},
  {105,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"ssc_irq_out_compute[0]"},
  {109,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[8]"},
  {112,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[9]"},
  {117,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[10]"},
  {121,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"lpass_irq_out_cdsp[2]"},
  {122,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"crypto_core_irq[2]"},
  {127,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[11]"},
  {133,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"turing_qsm_vapss_hcp_q6_interrupt"},
  {136,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"lpass_irq_out_cdsp[0]"},
  {137,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"lpass_irq_out_cdsp[1]"},
  {138,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[12]"},
  {139,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"turing_qos_q6_interrupt"},
  {144,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"ssc_irq_out_compute[1]"},
  {145,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"ssc_irq_out_compute[2]"},
  {152,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[13]"},
  {153,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"ssc_sdc_ipc_irq_out_compute[0]"},
  {154,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"ssc_sdc_ipc_irq_out_compute[1]"},
  {155,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"ssc_sdc_ipc_irq_out_compute[2]"},
  {158,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[14]"},
  {163,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[15]"},
  {168,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[16]"},
  {169,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"mdp_vsync_p"},
  {170,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"camss_dsp_streaming_0"},
  {171,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"camss_dsp_streaming_1"},
  {175,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[17]"},
  {178,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vapss_gds_hw_ctrl_sequence_abort"},
  {179,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"mdp_vsync_s"},
  {181,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"compute_pdc_irq_out[18]"},
  {184,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cdm_2_irq"},
  {185,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"q6ss_in185"},
  {187,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cdm_1_irq"},
  {188,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_1_csid_irq"},
  {189,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_1_irq"},
  {190,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"turing_qsm_vapss_dma_q6_interrupt"},
  {195,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cci_1_irq"},
  {196,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"intr_npu_master1_wdog_bite_irq"},
  {197,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"intr_npu_master1_caldp_wdt_irq"},
  {200,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"iris2dsp_irq"},
  {201,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_bps_cdm_irq"},
  {202,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_bps_irq"},
  {203,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_camnoc_irq"},
  {204,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cci_0_irq"},
  {205,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cdm_0_irq"},
  {206,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_fd_irq"},
  {207,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_icp_irq"},
  {208,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_0_csid_irq"},
  {209,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_0_irq"},
  {210,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_1_csid_irq"},
  {211,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_1_irq"},
  {212,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_0_csid_irq"},
  {213,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_0_irq"},
  {214,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_0_cdm_irq"},
  {215,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_0_irq"},
  {216,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_1_cdm_irq"},
  {217,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_1_irq"},
  {218,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_jpeg_0_irq"},
  {219,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_jpeg_3_irq"},
  {220,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_lrme_irq"},
  {221,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_cpr"},
  {INVALID_INTERRUPT,DALINTRCTRL_ENABLE_DEFAULT_SETTINGS,""}
};


InterruptPlatformDataType  pInterruptControllerConfigData[] =
{
  {
    InterruptConfigs,
    222,
  }
};
