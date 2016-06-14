/** @file
    @brief Header

    @date 2016

    @author
    Sensics, Inc.
    <http://sensics.com>

*/

// Copyright 2016 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// 	http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef INCLUDED_DistortionMeshType_h_GUID_657E9D48_4288_4BA4_8D00_8E4513402FD9
#define INCLUDED_DistortionMeshType_h_GUID_657E9D48_4288_4BA4_8D00_8E4513402FD9

// Internal Includes
// - none

// Library/third-party includes
// - none

// Standard includes
// - none

namespace osvr {
namespace renderkit {

    /// Describes the type of mesh to be constructed for distortion correction.
    typedef enum { SQUARE, RADIAL } DistortionMeshType;

} // namespace renderkit
} // namespace osvr

#endif // INCLUDED_DistortionMeshType_h_GUID_657E9D48_4288_4BA4_8D00_8E4513402FD9

