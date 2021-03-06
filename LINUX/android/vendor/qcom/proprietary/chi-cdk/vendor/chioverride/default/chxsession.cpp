////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2017 Qualcomm Technologies, Inc.
// All Rights Reserved.
// Confidential and Proprietary - Qualcomm Technologies, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file  chxsession.cpp
/// @brief CHX session class implementation
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <assert.h>

#include "chxextensionmodule.h"
#include "chxincs.h"
#include "chxpipeline.h"
#include "chxsession.h"
#include "chxusecaseutils.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Session::Create
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Session* Session::Create(
    Pipeline**    ppPipelines,
    UINT32        numPipelines,
    ChiCallBacks* pChiCallbacks,
    VOID*         pPrivateData)
{
    CDKResult result = CDKResultSuccess;

    Session* pSession = CHX_NEW Session();

    if (NULL != pSession)
    {
        result = pSession->Initialize(ppPipelines, numPipelines, pChiCallbacks, pPrivateData);

        if (CDKResultSuccess != result)
        {
            CHX_DELETE(pSession);
            pSession = NULL;
        }
    }

    return pSession;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Session::Destroy
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
VOID Session::Destroy(
    BOOL isForced)
{
    if (NULL != m_hSession)
    {
        ExtensionModule::GetInstance()->DestroySession(m_hSession, isForced);

        m_hSession = NULL;
    }
    if (NULL != m_pPipelineInfo)
    {
        CHX_DELETE(m_pPipelineInfo);
        m_pPipelineInfo = NULL;
    }

    CHX_DELETE(this);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Session::Initialize
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CDKResult Session::Initialize(
    Pipeline**          ppPipelines,
    UINT32              numPipelines,
    ChiCallBacks*       pCallbacks,
    VOID*               pPrivateData,
    CHISESSIONFLAGS     flags)
{
    CDKResult         result = CDKResultSuccess;
    SessionCreateData sessionCreateData;

    ChxUtils::Memset(&sessionCreateData, 0, sizeof(sessionCreateData));

    m_numPipelines                         = numPipelines;
    sessionCreateData.numPipelines         = numPipelines;
    sessionCreateData.pPipelineInfo        = CHX_NEW CHIPIPELINEINFO[numPipelines];
    m_pPipelineInfo                        = sessionCreateData.pPipelineInfo;
    sessionCreateData.pCallbacks           = pCallbacks;
    sessionCreateData.pPrivateCallbackData = pPrivateData;
    sessionCreateData.flags                = flags;

    for (UINT i = 0; i < numPipelines; i++)
    {
        m_pPipelines[i]                    = ppPipelines[i];
        sessionCreateData.pPipelineInfo[i] = ppPipelines[i]->GetPipelineInfo();
    }

    m_hSession = ExtensionModule::GetInstance()->CreateSession(&sessionCreateData);

    if (NULL == m_hSession)
    {
        result = CDKResultEFailed;
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Session::Initialize
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CDKResult Session::Finalize()
{
    CDKResult result = CDKResultSuccess;

    return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Session::GetPipelineIndex
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
UINT32 Session::GetPipelineIndex(UINT32 cameraId)
{
    UINT32 cameraIndex = CDKInvalidId;
    for (UINT32 i = 0; i < m_numPipelines; i++)
    {
        if (cameraId == m_pPipelines[i]->GetCameraId())
        {
            cameraIndex = i;
        }
    }
    return cameraIndex;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Session::GetCameraId
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
UINT32 Session::GetCameraId(UINT32 pipelineIndex)
{
    return m_pPipelines[pipelineIndex]->GetCameraId();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Session::~Session
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Session::~Session()
{
}
