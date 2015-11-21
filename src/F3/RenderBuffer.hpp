#ifndef _F3_RENDERBUFFER_
#define _F3_RENDERBUFFER_

#include "RenderTarget.hpp"
#include <cstddef>

namespace F3 {
	
	enum class RenderBufferFormat {
		U8  = 0,
		U16 = 1,
		F16 = 2,
		F32 = 3,
	};
	
	class RenderBuffer : public RenderTarget {
	public:
		
		RenderBuffer(
			std::size_t width,
			std::size_t height,
			std::size_t channels,
			RenderBufferFormat format
		);
		
		~RenderBuffer();
	};
	
}

#endif
