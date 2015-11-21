#ifndef _F3_RENDERTEXTURE_
#define _F3_RENDERTEXTURE_

#include "RenderTarget.hpp"
#include "TextureTarget.hpp"
#include <cstddef>

namespace F3 {
	
	enum class RenderTextureFilter {
		NEAREST  = 0,
		BILINEAR = 1,
	};
	
	enum class RenderTextureFormat {
		U8  = 0,
		U16 = 1,
		F16 = 2,
		F32 = 3,
	};
	
	class RenderTexture : public TextureTarget, RenderTarget {
	public:
		
		RenderTexture(
			std::size_t width,
			std::size_t height,
			std::size_t channels,
			RenderTextureFilter filter,
			RenderTextureFormat format
		);
		
	};
	
}

#endif
