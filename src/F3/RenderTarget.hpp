#ifndef _F3_RENDERTARGET_
#define _F3_RENDERTARGET_

#include <cstddef>

namespace F3 {
	
	class RenderTarget {
	public:
		
		virtual ~RenderTarget();
		
		std::size_t getWidth() const;
		std::size_t getHeight() const;
		std::size_t getChannels() const;
		
	private:
		
		friend class RenderTexture;
		friend class RenderBuffer;
		friend class Viewport;
		
		RenderTarget(const RenderTarget&) = delete;
		RenderTarget& operator=(const RenderTarget&) = delete;
		RenderTarget(
			unsigned int ID,
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
