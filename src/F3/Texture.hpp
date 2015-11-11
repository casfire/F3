#ifndef _F3_TEXTURE_
#define _F3_TEXTURE_

#include <cstddef>
#include <cstdint>
#include <string>

namespace F3 {
	
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
			std::size_t channels, const std::uint8_t* pixels,
			TextureFilter filter = TextureFilter::NEAREST,
			bool compress = true
		);
		
		Texture(
			const std::string& filename,
			TextureFilter filter = TextureFilter::NEAREST,
			bool compress = true
		);
		
		Texture(
			const void* memory, std::size_t length,
			TextureFilter filter = TextureFilter::NEAREST,
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
