#ifndef _STENCILTEXTURE_
#define _STENCILTEXTURE_

#include "TextureTarget.hpp"
#include "StencilTarget.hpp"
#include <cstddef>

namespace F3 {
	
	class StencilTexture : public TextureTarget, StencilTarget {
	public:
		
		StencilTexture(
			std::size_t width,
			std::size_t height
		);
		
	};
	
}

#endif
