#ifndef _F3_DEPTHTEXTURE_
#define _F3_DEPTHTEXTURE_

#include "TextureTarget.hpp"
#include "DepthTarget.hpp"
#include <cstddef>

namespace F3 {
	
	enum class DepthTextureFormat {
		U16 = 0,
		U24 = 1,
		U32 = 2,
	};
	
	class DepthTexture : public TextureTarget, DepthTarget {
	public:
		
		DepthTexture(
			std::size_t width,
			std::size_t height,
			DepthTextureFormat format
		);
		
	};
	
}

#endif
