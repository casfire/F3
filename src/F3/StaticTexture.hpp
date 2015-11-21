#ifndef _F3_STATICTEXTURE_
#define _F3_STATICTEXTURE_

#include "TextureTarget.hpp"
#include <cstddef>
#include <cstdint>
#include <string>

namespace F3 {
	
	enum class StaticTextureFilter {
		NEAREST     = 0,
		BILINEAR    = 1,
		TRILINEAR   = 2,
		ANISOTROPIC = 3,
	};
	
	class StaticTexture : public TextureTarget {
	public:
		
		StaticTexture(
			std::size_t width,
			std::size_t height,
			std::size_t channels,
			const std::uint8_t* pixels,
			StaticTextureFilter filter
		);
		
		StaticTexture(
			const std::string& filename,
			StaticTextureFilter filter
		);
		
	};
	
}

#endif
