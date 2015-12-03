#ifndef _F3_DEPTHSTENCILBUFFER_
#define _F3_DEPTHSTENCILBUFFER_

#include "DepthTarget.hpp"
#include "StencilTarget.hpp"
#include <cstddef>

namespace F3 {
	
	class DepthStencilBuffer : public DepthTarget, StencilTarget {
	public:
		
		DepthStencilBuffer(
			std::size_t width,
			std::size_t height
		);
		
		~DepthStencilBuffer();
		
	};
	
}

#endif
