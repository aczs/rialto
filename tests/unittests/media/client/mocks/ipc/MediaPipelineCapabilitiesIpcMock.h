/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2022 Sky UK
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIREBOLT_RIALTO_CLIENT_MEDIA_PIPELINE_CAPABILITIES_IPC_MOCK_H_
#define FIREBOLT_RIALTO_CLIENT_MEDIA_PIPELINE_CAPABILITIES_IPC_MOCK_H_

#include "IMediaPipelineCapabilities.h"
#include <gmock/gmock.h>
#include <memory>
#include <string>
#include <vector>

namespace firebolt::rialto::client
{
class MediaPipelineCapabilitiesIpcMock : public IMediaPipelineCapabilities
{
public:
    MediaPipelineCapabilitiesIpcMock() = default;
    virtual ~MediaPipelineCapabilitiesIpcMock() = default;

    MOCK_METHOD(std::vector<std::string>, getSupportedMimeTypes, (MediaSourceType sourceType), (override));
    MOCK_METHOD(bool, isMimeTypeSupported, (const std::string &mimeType), (override));
    MOCK_METHOD(std::vector<std::string>, getSupportedProperties,
                (MediaSourceType mediaType, const std::vector<std::string> &propertyNames), (override));
};
} // namespace firebolt::rialto::client

#endif // FIREBOLT_RIALTO_CLIENT_MEDIA_PIPELINE_CAPABILITIES_IPC_MOCK_H_
