//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018 NVIDIA Corporation. All rights reserved.



#ifndef MODULE_PARTICLE_IOS_H
#define MODULE_PARTICLE_IOS_H

#include "Apex.h"
#include <limits.h>

namespace nvidia
{
namespace apex
{

PX_PUSH_PACK_DEFAULT

class ParticleIosAsset;
class ParticleIosAssetAuthoring;
class CudaTestManager;
class Scene;

/**
\brief ParticleIOS Module - Manages PhysX 3.0 PxParticleSystem and PxParticleFluid simulations
*/
class ModuleParticleIos : public Module
{
protected:
	virtual											~ModuleParticleIos() {}

public:
	/// Get ParticleIOS authoring type name
	virtual const char*								getParticleIosTypeName() = 0;
};


PX_POP_PACK

}
} // namespace nvidia

#endif // MODULE_PARTICLE_IOS_H
