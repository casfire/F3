#ifndef _F3_STENCILTARGET_
#define _F3_STENCILTARGET_

#include <cstddef>

namespace F3 {
	
	class StencilTarget {
	public:
		
		virtual ~StencilTarget();
		
		std::size_t getWidth() const;
		std::size_t getHeight() const;
		
	private:
		
		friend class StencilTexture;
		friend class StencilBuffer;
		friend class DepthStencilTexture;
		friend class DepthStencilBuffer;
		friend class Viewport;
		
		StencilTarget(const StencilTarget&) = delete;
		StencilTarget& operator=(const StencilTarget&) = delete;
		StencilTarget(
			unsigned int ID,
			std::size_t width,
			std::size_t height
		);
		
		unsigned int ID;
		std::size_t width;
		std::size_t height;
		
	};
	
}

#endif
