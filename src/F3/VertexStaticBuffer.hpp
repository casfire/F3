#ifndef _F3_VERTEXSTATICBUFFER_
#define _F3_VERTEXSTATICBUFFER_

#include "VertexBuffer.hpp"
#include <cstddef>
#include <istream>

namespace F3 {
	
	class VertexStaticBuffer : public VertexBuffer {
	public:
		
		VertexStaticBuffer(
			const void* data,
			std::size_t size,
			std::size_t count
		);
		
		VertexStaticBuffer(
			std::istream& data,
			std::size_t size,
			std::size_t count
		);
		
	};
	
}

#endif
