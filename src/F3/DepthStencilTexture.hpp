#ifndef _F3_DEPTHSTENCILTEXTURE_
#define _F3_DEPTHSTENCILTEXTURE_

#include "TextureTarget.hpp"
#include "DepthTarget.hpp"
#include "StencilTarget.hpp"
#include <cstddef>

namespace F3 {
	
	class DepthStencilTexture : public TextureTarget, DepthTarget, StencilTarget {
	public:
		
		DepthStencilTexture(
			std::size_t width,
			std::size_t height
		);
		
	};
	
}

#endif
