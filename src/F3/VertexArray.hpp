#ifndef _F3_VERTEXARRAY_
#define _F3_VERTEXARRAY_

#include "VertexStreamBuffer.hpp"
#include <cstddef>
#include <vector>

namespace F3 {
	
	template <typename T>
	class VertexArray : private VertexStreamBuffer {
	public:
		
		VertexArray(std::size_t count);
		VertexArray(const T* data, std::size_t count);
		
		using VertexBuffer::getVertexSize;
		using VertexBuffer::getVertexCount;
		
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
	
	template <typename T>
	VertexArray<T>::VertexArray(std::size_t count)
	: VertexStreamBuffer(sizeof(T), count), array(count)
	{}
	
	template <typename T>
	VertexArray<T>::VertexArray(const T* data, std::size_t count)
	: VertexStreamBuffer(data, sizeof(T), count), array(data, data + count)
	{}
	
	template <typename T>
	void VertexArray<T>::resize(std::size_t count)
	{
		VertexStreamBuffer::resize(count);
		array.resize(count);
	}
	
	template <typename T>
	const T& VertexArray<T>::operator[](std::size_t index) const
	{
		return array[index];
	}
	
	template <typename T>
	T& VertexArray<T>::operator[](std::size_t index)
	{
		return array[index];
	}
	
	template <typename T>
	const T* VertexArray<T>::getRawData() const
	{
		return array.data();
	}
	
	template <typename T>
	T* VertexArray<T>::getRawData()
	{
		return array.data();
	}
	
	template <typename T>
	void VertexArray<T>::update()
	{
		VertexStreamBuffer::update(array.data());
	}
	
	template <typename T>
	void VertexArray<T>::update(std::size_t start, std::size_t count)
	{
		VertexStreamBuffer::update(&array[start], start, count);
	}
	
}

#endif
