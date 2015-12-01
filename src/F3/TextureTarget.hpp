#ifndef _F3_TEXTURETARGET_
#define _F3_TEXTURETARGET_

#include <cstddef>

namespace F3 {
	
	class TextureTarget {
	public:
		
		virtual ~TextureTarget();
		
		std::size_t getWidth() const;
		std::size_t getHeight() const;
		std::size_t getChannels() const;
		
	private:
		
		friend class StaticTexture;
		friend class RenderTexture;
		friend class DepthTexture;
		friend class Sampler;
		
		TextureTarget(const TextureTarget&) = delete;
		TextureTarget& operator=(const TextureTarget&) = delete;
		TextureTarget(
			std::size_t width,
			std::size_t height,
			std::size_t channels
		);
		
		unsigned int ID;
		std::size_t width;
		std::size_t height;
		std::size_t channels;
		
	};
	
}

#endif
