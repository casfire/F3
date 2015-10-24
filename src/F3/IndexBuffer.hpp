#ifndef _F3_INDEXBUFFER_
#define _F3_INDEXBUFFER_

#include <cstddef>
#include <cstdint>
#include <istream>
#include <vector>

namespace F3 {
	
	enum class IndexFormat {
		UINT8  = sizeof(uint8_t ),
		UINT16 = sizeof(uint16_t),
		UINT32 = sizeof(uint32_t),
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
	
	class IndexStaticBuffer : public IndexBuffer {
	public:
		
		IndexStaticBuffer(const void*   data, std::size_t count, IndexFormat format);
		IndexStaticBuffer(std::istream& data, std::size_t count, IndexFormat format);
		explicit IndexStaticBuffer(const std::uint8_t*  data, std::size_t count);
		explicit IndexStaticBuffer(const std::uint16_t* data, std::size_t count);
		explicit IndexStaticBuffer(const std::uint32_t* data, std::size_t count);
		
	};
	
	class IndexStreamBuffer : public IndexBuffer {
	public:
		
		IndexStreamBuffer(std::size_t count, IndexFormat format);
		IndexStreamBuffer(const void*   data, std::size_t count, IndexFormat format);
		IndexStreamBuffer(std::istream& data, std::size_t count, IndexFormat format);
		explicit IndexStreamBuffer(const std::uint8_t*  data, std::size_t count);
		explicit IndexStreamBuffer(const std::uint16_t* data, std::size_t count);
		explicit IndexStreamBuffer(const std::uint32_t* data, std::size_t count);
		
		void update(const void*   data);
		void update(std::istream& data);
		void update(const void*   data, std::size_t start, std::size_t count);
		void update(std::istream& data, std::size_t start, std::size_t count);
		virtual void resize(std::size_t count);
		
	};
	
	template <typename T>
	class IndexArray : private IndexStreamBuffer {
	public:
		
		IndexArray(std::size_t count);
		IndexArray(const T* data, std::size_t count);
		
		using IndexBuffer::getCount;
		using IndexBuffer::getFormat;
		
		void resize(std::size_t count) override;
		const T& operator[](std::size_t index) const;
		T& operator[](std::size_t index);
		const T* getRawData() const;
		T* getRawData();
		
		void update();
		void update(std::size_t start, std::size_t count);
		
	private:
		
		std::vector<T> array;
		
	};
	
	typedef IndexArray<std::uint8_t > IndexArrayUint8;
	typedef IndexArray<std::uint16_t> IndexArrayUint16;
	typedef IndexArray<std::uint32_t> IndexArrayUint32;
	
}

#endif // _F3_INDEXBUFFER_
