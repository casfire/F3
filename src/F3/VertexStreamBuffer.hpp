#ifndef _F3_VERTEXSTREAMBUFFER_
#define _F3_VERTEXSTREAMBUFFER_

#include "VertexBuffer.hpp"
#include <cstddef>
#include <istream>

namespace F3 {
	
	class VertexStreamBuffer : public VertexBuffer {
	public:
		
		VertexStreamBuffer(
			std::size_t size,
			std::size_t count
		);
		
		VertexStreamBuffer(
			const void* data,
			std::size_t size,
			std::size_t count
		);
		
		VertexStreamBuffer(
			std::istream& data,
			std::size_t size,
			std::size_t count
		);
		
		void update(const void*   data);
		void update(std::istream& data);
		void update(const void*   data, std::size_t start, std::size_t count);
		void update(std::istream& data, std::size_t start, std::size_t count);
		virtual void resize(std::size_t count);
		
	};
	
}

#endif
