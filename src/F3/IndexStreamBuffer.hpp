#ifndef _F3_INDEXSTREAMBUFFER_
#define _F3_INDEXSTREAMBUFFER_

#include "IndexBuffer.hpp"
#include <cstddef>
#include <cstdint>
#include <istream>

namespace F3 {
	
	class IndexStreamBuffer : public IndexBuffer {
	public:
		
		IndexStreamBuffer(std::size_t count, IndexFormat format);
		IndexStreamBuffer(const void*   data, std::size_t count, IndexFormat format);
		IndexStreamBuffer(std::istream& data, std::size_t count, IndexFormat format);
		IndexStreamBuffer(const std::uint8_t*  data, std::size_t count);
		IndexStreamBuffer(const std::uint16_t* data, std::size_t count);
		IndexStreamBuffer(const std::uint32_t* data, std::size_t count);
		
		void update(const void*   data);
		void update(std::istream& data);
		
		void update(const void*   data, std::size_t start, std::size_t count);
		void update(std::istream& data, std::size_t start, std::size_t count);
		
		virtual void resize(std::size_t count);
		
	};
	
}

#endif
