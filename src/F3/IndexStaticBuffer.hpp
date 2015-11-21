#ifndef _F3_INDEXSTATICBUFFER_
#define _F3_INDEXSTATICBUFFER_

#include "IndexBuffer.hpp"
#include <cstddef>
#include <cstdint>
#include <istream>

namespace F3 {
	
	class IndexStaticBuffer : public IndexBuffer {
	public:
		
		IndexStaticBuffer(const void*   data, std::size_t count, IndexFormat format);
		IndexStaticBuffer(std::istream& data, std::size_t count, IndexFormat format);
		
		IndexStaticBuffer(const std::uint8_t*  data, std::size_t count);
		IndexStaticBuffer(const std::uint16_t* data, std::size_t count);
		IndexStaticBuffer(const std::uint32_t* data, std::size_t count);
		
	};
	
}

#endif
