#ifndef _F3_SAMPLER_
#define _F3_SAMPLER_

#include "TextureTarget.hpp"

namespace F3 {
	
	enum class SamplerFilter {
		NEAREST     = 0,
		BILINEAR    = 1,
		TRILINEAR   = 2,
		ANISOTROPIC = 3,
	};
	
	enum class SamplerEdge {
		REPEAT = 0,
		MIRROR = 1,
		CLAMP  = 2,
	};
	
	class Sampler {
	public:
		
		Sampler(
			const TextureTarget& texture,
			SamplerFilter filter,
			SamplerEdge edge
		);
		
		Sampler(
			const TextureTarget& texture,
			SamplerFilter filter,
			float r, float g, float b, float a = 1.f
		);
		
		~Sampler();
		
		const TextureTarget& getTexture() const;
		
	private:
		
		Sampler(const Sampler&) = delete;
		Sampler& operator=(const Sampler&) = delete;
		
		const TextureTarget& texture;
		unsigned int ID;
		
	};
	
}

#endif
