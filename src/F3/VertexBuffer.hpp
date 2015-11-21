#ifndef _F3_VERTEXBUFFER_
#define _F3_VERTEXBUFFER_

#include <cstddef>

namespace F3 {
	
	class VertexBuffer {
	public:
		
		virtual ~VertexBuffer();
		std::size_t getVertexSize() const;
		std::size_t getVertexCount() const;
		
	private:
		
		VertexBuffer(const VertexBuffer&) = delete;
		VertexBuffer& operator=(const VertexBuffer&) = delete;
		VertexBuffer(std::size_t size, std::size_t count);
		friend class VertexStaticBuffer;
		friend class VertexStreamBuffer;
		
		unsigned int ID;
		std::size_t size, count;
		
	};
	
}

#endif
