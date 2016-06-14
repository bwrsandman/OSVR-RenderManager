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

#ifndef INCLUDED_DistortionMeshVertex_h_GUID_9B86F8DA_5FD3_47AD_824F_7AD1EA085111
#define INCLUDED_DistortionMeshVertex_h_GUID_9B86F8DA_5FD3_47AD_824F_7AD1EA085111

// Internal Includes
#include "Float2.h"

// Library/third-party includes
// - none

// Standard includes
// - none

namespace osvr {
namespace renderkit {

    /// Describes a vertex 2D position plus three 2D texture coordinates.
    class DistortionMeshVertex {
    public:
        DistortionMeshVertex(Float2 const& pos,
                             Float2 const& texRed, Float2 const& texGreen,
                             Float2 const& texBlue)
            : m_pos(pos), m_texRed(texRed), m_texGreen(texGreen),
            m_texBlue(texBlue) {}

        // Flips a texture coordinate that is in the range 0..1 so that
        // it is inverted about 0.5 to be in the range 1..0.  Useful for
        // flipping OpenGL Y coordinates into Direct3D ones.
        static float flipTexCoord(float c) { return 1.0f - c; }

        Float2 m_pos;             //< X,Y
        Float2 m_texRed;          //< U,V
        Float2 m_texGreen;        //< U,V
        Float2 m_texBlue;         //< U,V
    };

} // namespace renderkit
} // namespace osvr

#endif // INCLUDED_DistortionMeshVertex_h_GUID_9B86F8DA_5FD3_47AD_824F_7AD1EA085111

