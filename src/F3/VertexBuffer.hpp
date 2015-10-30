#ifndef _F3_VERTEXBUFFER_
#define _F3_VERTEXBUFFER_

#include <cstddef>
#include <istream>
#include <vector>

namespace F3 {
	
	enum class AttributeType {
		VEC1_INT8,   VEC2_INT8,   VEC3_INT8,   VEC4_INT8,
		VEC1_UINT8,  VEC2_UINT8,  VEC3_UINT8,  VEC4_UINT8,
		VEC1_INT16,  VEC2_INT16,  VEC3_INT16,  VEC4_INT16,
		VEC1_UINT16, VEC2_UINT16, VEC3_UINT16, VEC4_UINT16,
		VEC1_INT32,  VEC2_INT32,  VEC3_INT32,  VEC4_INT32,
		VEC1_UINT32, VEC2_UINT32, VEC3_UINT32, VEC4_UINT32,
		VEC1_FLOAT,  VEC2_FLOAT,  VEC3_FLOAT,  VEC4_FLOAT,
		VEC1_DOUBLE, VEC2_DOUBLE, VEC3_DOUBLE, VEC4_DOUBLE,
		VEC1_HALF_FLOAT, VEC2_HALF_FLOAT,
		VEC3_HALF_FLOAT, VEC4_HALF_FLOAT,
	};
	
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
	
	struct Attribute {
		
		const VertexBuffer& buffer;
		const AttributeType type;
		const std::size_t offset;
		
		Attribute(
			const VertexBuffer& buffer,
			AttributeType type, std::size_t offset
		) : buffer(buffer), type(type), offset(offset) {}
		
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
		
		VertexStreamBuffer(std::size_t size, std::size_t count);
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
