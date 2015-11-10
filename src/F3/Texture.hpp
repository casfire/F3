#ifndef _F3_TEXTURE_
#define _F3_TEXTURE_

#include <cstddef>

namespace F3 {
	
	enum class TextureFormat {
		UINT8, UINT16, UINT32, FLOAT
	};
	
	enum class TextureFilter {
		NEAREST,
		BILINEAR,
		TRILINEAR,
		ANISOTROPIC,
	};
	
	class Texture {
	public:
		
		Texture(
			std::size_t width, std::size_t height,
			std::size_t channels, const void* data,
			TextureFormat format, TextureFilter filter,
			bool compress = true
		);
		
		~Texture();
		
		std::size_t getWidth() const;
		std::size_t getHeight() const;
		std::size_t getChannels() const;
		
	private:
		
		Texture(const Texture&) = delete;
		Texture& operator=(const Texture&) = delete;
		
		unsigned int ID;
		std::size_t width, height, channels;
		
	};
	
}

#endif // _F3_TEXTURE_
