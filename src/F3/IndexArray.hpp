#ifndef _F3_INDEXARRAY_
#define _F3_INDEXARRAY_

#include "IndexStreamBuffer.hpp"
#include <cstddef>
#include <cstdint>
#include <vector>

namespace F3 {
	
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

#endif
