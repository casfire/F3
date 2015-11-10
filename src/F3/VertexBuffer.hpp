#ifndef _F3_VERTEXBUFFER_
#define _F3_VERTEXBUFFER_

#include <cstddef>
#include <istream>
#include <vector>

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

#endif // _F3_VERTEXBUFFER_
