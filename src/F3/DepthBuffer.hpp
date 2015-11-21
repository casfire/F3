#ifndef _F3_DEPTHBUFFER_
#define _F3_DEPTHBUFFER_

#include "DepthTarget.hpp"
#include <cstddef>

namespace F3 {
	
	enum class DepthBufferFormat {
		U16 = 0,
		U24 = 1,
		U32 = 2,
	};
	
	class DepthBuffer : public DepthTarget {
	public:
		
		DepthBuffer(
			std::size_t width,
			std::size_t height,
			DepthBufferFormat format
		);
		
		~DepthBuffer();
		
	};
	
}

#endif
