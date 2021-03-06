/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CHRE_PLATFORM_SLPI_SYSTEM_TIME_H_
#define CHRE_PLATFORM_SLPI_SYSTEM_TIME_H_

#include <cstdint>

namespace chre {

/**
 * Sets the estimated offset between the host and SLPI clock.
 *
 * @param offset The current estimated offset in nanoseconds.
 */
void setEstimatedHostTimeOffset(int64_t offset);

/**
 * Sends a time sync request if the time since last time sync request exceeds a
 * predefined threshold.
 */
void requestTimeSyncIfStale();

/**
 * Updates the timestamp tracking the last time a time sync was requested by
 * CHRE. Only to be called if a TimeSyncRequest message was scheduled to be
 * sent.
 */
void updateLastTimeSyncRequest();

}  // namespace chre

#endif  // CHRE_PLATFORM_SLPI_SYSTEM_TIME_H_
