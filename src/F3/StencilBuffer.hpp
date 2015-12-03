#ifndef _F3_STENCILBUFFER_
#define _F3_STENCILBUFFER_

#include "StencilTarget.hpp"
#include <cstddef>

namespace F3 {
	
	class StencilBuffer : public StencilTarget {
	public:
		
		StencilBuffer(
			std::size_t width,
			std::size_t height
		);
		
		~StencilBuffer();
		
	};
	
}

#endif
