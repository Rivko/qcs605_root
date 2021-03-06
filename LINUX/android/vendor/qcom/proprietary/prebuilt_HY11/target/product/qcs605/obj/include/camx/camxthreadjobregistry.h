////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2016-2017 Qualcomm Technologies, Inc.
// All Rights Reserved.
// Confidential and Proprietary - Qualcomm Technologies, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file camxthreadjobregistry.h
///
/// @brief Provides job registration and associated utilities
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CAMXTHREADJOBREGISTRY_H
#define CAMXTHREADJOBREGISTRY_H

#include "camxincs.h"
#include "camxtypes.h"
#include "camxosutils.h"
#include "camxatomic.h"
#include "camxthreadcommon.h"

CAMX_NAMESPACE_BEGIN

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// @brief JobRegistry holds and keeps track of all registered jobs in the thread library
///
/// JobRegistry holds and keeps track of all registered jobs in the thread library
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class JobRegistry
{
public:
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// JobRegistry
    ///
    /// @brief  Constructor for JobRegistry object.
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    JobRegistry() = default;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// ~JobRegistry
    ///
    /// @brief  Destructor for JobRegistry object
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ~JobRegistry();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// RegisterNewJob
    ///
    /// @brief  Register a job family to the thread library. A job family is the set of jobs with the same function name and
    ///         address, and priority
    ///
    /// @param  jobFuncAddr  Job function address
    /// @param  pJobFuncName Job function name
    /// @param  flushDoneCb  Flush done callback, if the job family is flushed
    /// @param  priority     Priority of all jobs in the family
    /// @param  isSerialize  If the jobs in the family executes in serial fashion
    /// @param  phJob        Handle to the job family, returned from the library
    ///
    /// @return Success or EFailed
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CamxResult RegisterNewJob(
        JobFunc     jobFuncAddr,
        const CHAR* pJobFuncName,
        JobCb       flushDoneCb,
        JobPriority priority,
        BOOL        isSerialize,
        JobHandle*  phJob);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// UnregisterJob
    ///
    /// @brief  Un-register a job family from the thread library.
    ///
    /// @param  jobFuncAddr  Job function address
    /// @param  pJobFuncName Job function name
    /// @param  hJob         Handle to the job family
    ///
    /// @return Success or EFailed
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CamxResult UnregisterJob(
        JobFunc     jobFuncAddr,
        const CHAR* pJobFuncName,
        JobHandle   hJob);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// ValidateJob
    ///
    /// @brief  Check if a job was previously registered or not
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BOOL ValidateJob(
        JobHandle  hJob) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///  GetJobPriority
    ///
    /// @brief  Return priority of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return Priority of the job family
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE JobPriority GetJobPriority(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return pRegisteredJob->priority;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetJobFunc
    ///
    /// @brief  Return function address of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return Address of the job function of the job family
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE JobFunc GetJobFunc(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return pRegisteredJob->funcAddr;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetJobName
    ///
    /// @brief  Return function address of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return string representing job name
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE CHAR* GetJobName(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return pRegisteredJob->name;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// IncrementJobCount
    ///
    /// @brief  Increment job count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID IncrementJobCount(
        JobHandle  hJob)
    {
        m_pRegistryLock->Lock();

        if (TRUE == IsJobAlreadyRegistered(&hJob))
        {
            RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);

            CamxAtomicIncU(&pRegisteredJob->jobCount);
        }

        m_pRegistryLock->Unlock();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// DecrementJobCount
    ///
    /// @brief  Decrement job count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID DecrementJobCount(
        JobHandle  hJob)
    {
        m_pRegistryLock->Lock();

        if (TRUE == IsJobAlreadyRegistered(&hJob))
        {
            RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
            CamxAtomicDecU(&pRegisteredJob->jobCount);
        }

        m_pRegistryLock->Unlock();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetJobCount
    ///
    /// @brief  Retrieve current job count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE UINT32 GetJobCount(
        JobHandle  hJob) const
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return CamxAtomicLoadU32(&pRegisteredJob->jobCount);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// IncrementInflightCount
    ///
    /// @brief  Increment inflight count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID IncrementInflightCount(
        JobHandle  hJob)
    {

        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        CamxAtomicIncU(&pRegisteredJob->inflightCount);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// DecrementInflightCount
    ///
    /// @brief  Decrement inflight count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID DecrementInflightCount(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        CamxAtomicDecU(&pRegisteredJob->inflightCount);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetInflightCount
    ///
    /// @brief  Retrieve inflight count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE UINT32 GetInflightCount(
        JobHandle  hJob) const
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return CamxAtomicLoadU32(&pRegisteredJob->inflightCount);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// IncrementHoldCount
    ///
    /// @brief  Increment hold count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID IncrementHoldCount(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        CamxAtomicIncU(&pRegisteredJob->holdCount);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// DecrementHoldCount
    ///
    /// @brief  Decrement hold count of a registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID DecrementHoldCount(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        CamxAtomicDecU(&pRegisteredJob->holdCount);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetHoldCount
    ///
    /// @brief  Retrieve count of jobs on hold
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE UINT32 GetHoldCount(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return CamxAtomicLoadU32(&pRegisteredJob->holdCount);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetFlushStatus
    ///
    /// @brief  Get the current flush status of the registered job
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return FlushStatus
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE FlushStatus GetFlushStatus(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return CamxAtomicLoadU8(&pRegisteredJob->flushStatus);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// SetFlushStatus
    ///
    /// @brief  Set the current flush status of the registered job
    ///
    /// @param  hJob   Handle to previously registered job
    /// @param  val    Value to set
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID SetFlushStatus(
        JobHandle   hJob,
        FlushStatus val)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        CamxAtomicStoreU8(&pRegisteredJob->flushStatus, val);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetFlushBlockStatus
    ///
    /// @brief  Get the blocking status for the current flush request of the registered job
    ///
    /// @param  pRegisteredJob Pointer to previously registered job
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE BOOL GetFlushBlockStatus(
        RegisteredJob* pRegisteredJob)
    {
        return static_cast<BOOL>(CamxAtomicLoad32(&pRegisteredJob->blockFlush));
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// SetFlushBlockStatus
    ///
    /// @brief  Set the blocking status for the current flush request of the registered job
    ///
    /// @param  pRegisteredJob   Pointer to previously registered job
    /// @param  blockStatus      Value to set
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID SetFlushBlockStatus(
        RegisteredJob* pRegisteredJob,
        BOOL blockStatus)
    {
        CamxAtomicStore32(&pRegisteredJob->blockFlush, blockStatus);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// IsSerial
    ///
    /// @brief  Check if a registered job is serial in nature
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE BOOL IsSerial(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return pRegisteredJob->isSerial;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// AreJobsOnHold
    ///
    /// @brief  Check if jobs of this family are on hold because another job is running
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE BOOL AreJobsOnHold(
        JobHandle  hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        return (CamxAtomicLoadU32(&pRegisteredJob->holdCount) > 0 ? TRUE : FALSE);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetRegisteredJob
    ///
    /// @brief  Get handle to a registered job based on a slot index
    ///
    /// @param  slot Slot index guaranteed to be within limits (MaxRegisteredJobs)
    ///
    /// @return Job handle at the slot or 0 (if it was empty)
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE JobHandle GetRegisteredJob(
        UINT32 slot)
    {
        return m_registeredJobs[slot].hRegister;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// StartFlush
    ///
    /// @brief  Start the flush sequence of a registered job type/family
    ///
    /// @param  hJob        Handle to the job returned from RegisterJobFamily
    /// @param  pUserData   User data passed back in flushDoneCB, which thread library doesn't look into
    /// @param  isBlocking  If the caller of the flush blocks on its completion
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    VOID StartFlush(
        JobHandle   hJob,
        VOID*       pUserData,
        BOOL        isBlocking);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// WaitOutFlush
    ///
    /// @brief  Wait till the flush of a job type is complete
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    VOID WaitOutFlush(
        JobHandle hJob);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// CheckFlushDone
    ///
    /// @brief  Check if a job is being flushed. If there are pending jobs in the queue, return FALSE,
    ///         else call flush done and return TRUE
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BOOL CheckFlushDone(
        JobHandle hJob);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// SignalFlushDone
    ///
    /// @brief  Check if a job is being flushed. If there are pending jobs in the queue, return FALSE,
    ///         else call flush done and return TRUE
    ///
    /// @param  hJob Handle to previously registered job
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    VOID SignalFlushDone(
        JobHandle hJob);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// CheckAllFlushDone
    ///
    /// @brief  Go through each registered job, check is it is being flushed, call flush done if appropriate
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    VOID CheckAllFlushDone();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// CheckJobsOnHold
    ///
    /// @brief  Search through the job registry and check if a job of a family was put on hold
    ///         but no job of the family was in flight
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BOOL CheckJobsOnHold();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// CheckAllFlushRequested
    ///
    /// @brief  Go through each registered job, check if it is being flushed,
    ///         but one or more of it's runtime jobs still in one of the job queues
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BOOL CheckAllFlushRequested();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// OnJobAdded
    ///
    /// @brief  Job is added to the priority queue. Update the last job pointer in the job registry
    ///
    /// @param  pJob    The job being added
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID OnJobAdded(
        RuntimeJob* pJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(pJob->hJob);

        if (NULL != pRegisteredJob->pLastJob)
        {
            pRegisteredJob->pLastJob->pNext = pJob;
        }
        else
        {
            pRegisteredJob->pFirstJob = pJob;
        }

        pRegisteredJob->pLastJob        = pJob;
        pRegisteredJob->pLastJob->pNext = NULL;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// OnGetFirstJob
    ///
    /// @brief  Job is removed from the priority queue. Update the first job pointer in the job registry
    ///
    /// @param  hJob    Handle to the current job
    ///
    /// @return Pointer to the first runtime job in the family, corresponding to hJob
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE RuntimeJob* OnGetFirstJob(
        JobHandle hJob)
    {
        RegisteredJob* pRegisteredJob = GetJobByHandle(hJob);
        RuntimeJob*    pFirstJob      = pRegisteredJob->pFirstJob;

        if (NULL != pFirstJob)
        {
            pRegisteredJob->pFirstJob = pFirstJob->pNext;
        }

        if (NULL == pRegisteredJob->pFirstJob)
        {
            pRegisteredJob->pLastJob = NULL;
        }

        return pFirstJob;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Initialize
    ///
    /// @brief  Initialize a newly created JobRegistry object
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CamxResult Initialize();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// FlushJobSubmitLock
    ///
    /// @brief  Take the lock to sync flush and job submission
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID FlushJobSubmitLock()
    {
        m_pFlushJobSubmitLock->Lock();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// FlushJobSubmitUnLock
    ///
    /// @brief  Take the lock to sync flush and job submission
    ///
    /// @return None
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CAMX_INLINE VOID FlushJobSubmitUnLock()
    {
        m_pFlushJobSubmitLock->Unlock();
    }


private:
    // Disable copy constructor and assignment operator
    JobRegistry(const JobRegistry&) = delete;
    JobRegistry& operator=(const JobRegistry&) = delete;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// GetJobByHandle
    ///
    /// @brief  Utility function to return pointer to the registered job given a job handle
    ///
    /// @param  hJob Job handle
    ///
    /// @return Pointer to registered job
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    static RegisteredJob* GetJobByHandle(
        JobHandle hJob)
    {
        return reinterpret_cast<RegisteredJob*>(hJob);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// IsJobAlreadyRegistered
    ///
    /// @brief  Check to see if an incoming job is already registered or not
    ///
    /// @param  phJob  Job Handle
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BOOL IsJobAlreadyRegistered(
        JobHandle* phJob);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// IsFreeSlotAvailable
    ///
    /// @brief  Check if a free slot is available in the job registry
    ///
    /// @param  pSlot Slot returned
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BOOL IsFreeSlotAvailable(
        UINT32* pSlot);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// CheckJobsStillRegistered
    ///
    /// @brief  This method checks whether there are currently registered jobs or not.
    ///
    /// @return TRUE or FALSE
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    BOOL CheckJobsStillRegistered();

    BOOL            m_registeredSlots[MaxRegisteredJobs];   ///< List of slots in the job registry
    RegisteredJob   m_registeredJobs[MaxRegisteredJobs];    ///< Array/list of registered jobs

    Mutex*          m_pRegistryLock;                        ///< Job Registry lock
    Mutex*          m_pFlushJobSubmitLock;                  ///< Job submit and flush sync lock
};

CAMX_NAMESPACE_END

#endif // CAMXTHREADJOBREGISTRY_H
