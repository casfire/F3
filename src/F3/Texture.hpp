#ifndef _F3_TEXTURE_
#define _F3_TEXTURE_

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
	
	class Texture {
	public:
		
		virtual ~Texture();
		
		std::size_t getWidth() const;
		std::size_t getHeight() const;
		std::size_t getChannels() const;
		
	private:
		
		friend class StaticTexture;
		friend class RenderTexture;
		
		Texture(const Texture&) = delete;
		Texture& operator=(const Texture&) = delete;
		Texture(
			std::size_t width,
			std::size_t height,
			std::size_t channels
		);
		
		unsigned int ID;
		std::size_t width;
		std::size_t height;
		std::size_t channels;
		
	};
	
	class StaticTexture : public Texture {
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
	
	class RenderTexture : public Texture {
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

#endif // _F3_TEXTURE_
