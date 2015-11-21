#ifndef _F3_INDEXBUFFER_
#define _F3_INDEXBUFFER_

#include <cstddef>
#include <cstdint>

namespace F3 {
	
	enum class IndexFormat {
		UINT8  = sizeof(std::uint8_t ),
		UINT16 = sizeof(std::uint16_t),
		UINT32 = sizeof(std::uint32_t),
	};
	
	class IndexBuffer {
	public:
		
		virtual ~IndexBuffer();
		std::size_t getCount() const;
		IndexFormat getFormat() const;
		
	private:
		
		IndexBuffer(const IndexBuffer&) = delete;
		IndexBuffer& operator=(const IndexBuffer&) = delete;
		IndexBuffer(std::size_t count, IndexFormat format);
		friend class IndexStaticBuffer;
		friend class IndexStreamBuffer;
		
		unsigned int ID;
		std::size_t count;
		IndexFormat format;
		
	};
	
}

#endif
