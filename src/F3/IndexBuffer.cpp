#include "IndexBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include <cstring>

using namespace F3;
using namespace GL;

// IndexBuffer

IndexBuffer::IndexBuffer(std::size_t count, IndexFormat format)
: ID(0), count(count), format(format)
{
	glGenBuffers(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate index buffer.", __FILE__, __LINE__);
	}
}

IndexBuffer::~IndexBuffer()
{
	glDeleteBuffers(1, &ID);
}

std::size_t IndexBuffer::getCount() const
{
	return count;
}

IndexFormat IndexBuffer::getFormat() const
{
	return format;
}

// IndexStaticBuffer

IndexStaticBuffer::IndexStaticBuffer(
	const void* data, std::size_t count, IndexFormat format
) : IndexBuffer(count, format)
{
	std::size_t size = count * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create index buffer.", __FILE__, __LINE__);
	}
}

IndexStaticBuffer::IndexStaticBuffer(
	std::istream& data, std::size_t count, IndexFormat format
) : IndexBuffer(count, format)
{
	std::size_t size = count * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, nullptr, GL_STATIC_DRAW);
	void* map = glMapBuffer(GL_ELEMENT_ARRAY_BUFFER, GL_WRITE_ONLY);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to map index buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), size);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(size)) {
		glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw IOException("Failed to read index buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER)) {
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap index buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create index buffer.", __FILE__, __LINE__);
	}
}

IndexStaticBuffer::IndexStaticBuffer(
	const std::uint8_t*  data, std::size_t count
) : IndexStaticBuffer(data, count, IndexFormat::UINT8)
{}

IndexStaticBuffer::IndexStaticBuffer(
	const std::uint16_t* data, std::size_t count
) : IndexStaticBuffer(data, count, IndexFormat::UINT16)
{}

IndexStaticBuffer::IndexStaticBuffer(
	const std::uint32_t* data, std::size_t count
) : IndexStaticBuffer(data, count, IndexFormat::UINT32)
{}

// IndexStreamBuffer

IndexStreamBuffer::IndexStreamBuffer(
	std::size_t count, IndexFormat format
) : IndexStreamBuffer(nullptr, count, format)
{}

IndexStreamBuffer::IndexStreamBuffer(
	const void* data, std::size_t count, IndexFormat format
) : IndexBuffer(count, format)
{
	std::size_t size = count * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STREAM_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create index buffer.", __FILE__, __LINE__);
	}
}

IndexStreamBuffer::IndexStreamBuffer(
	std::istream& data, std::size_t count, IndexFormat format
) : IndexBuffer(count, format)
{
	std::size_t size = count * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, nullptr, GL_STREAM_DRAW);
	void* map = glMapBuffer(GL_ELEMENT_ARRAY_BUFFER, GL_WRITE_ONLY);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to map index buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), size);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(size)) {
		glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw IOException("Failed to read index buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER)) {
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap index buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create index buffer.", __FILE__, __LINE__);
	}
}

IndexStreamBuffer::IndexStreamBuffer(
	const std::uint8_t* data, std::size_t count
) : IndexStreamBuffer(data, count, IndexFormat::UINT8)
{}

IndexStreamBuffer::IndexStreamBuffer(
	const std::uint16_t* data, std::size_t count
) : IndexStreamBuffer(data, count, IndexFormat::UINT16)
{}

IndexStreamBuffer::IndexStreamBuffer(
	const std::uint32_t* data, std::size_t count
) : IndexStreamBuffer(data, count, IndexFormat::UINT32)
{}

void IndexStreamBuffer::update(const void* data)
{
	std::size_t size = count * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, nullptr, GL_STREAM_DRAW);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STREAM_DRAW);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update index buffer.", __FILE__, __LINE__);
	}
}

void IndexStreamBuffer::update(std::istream& data)
{
	std::size_t size = count * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, nullptr, GL_STREAM_DRAW);
	void* map = glMapBuffer(GL_ELEMENT_ARRAY_BUFFER, GL_WRITE_ONLY);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to map index buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), size);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(size)) {
		glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw IOException("Failed to read index buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER)) {
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap index buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update index buffer.", __FILE__, __LINE__);
	}
}

void IndexStreamBuffer::update(
	const void* data, std::size_t start, std::size_t count
) {
	std::size_t size = count * static_cast<std::size_t>(format);
	std::size_t offset = start * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	void* map = glMapBufferRange(
		GL_ELEMENT_ARRAY_BUFFER, offset, size,
		GL_MAP_WRITE_BIT | GL_MAP_INVALIDATE_RANGE_BIT
	);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to map index buffer.", __FILE__, __LINE__);
	}
	std::memcpy(map, data, size);
	if (!glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER)) {
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap index buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update index buffer.", __FILE__, __LINE__);
	}
}

void IndexStreamBuffer::update(
	std::istream& data, std::size_t start, std::size_t count
) {
	std::size_t size = count * static_cast<std::size_t>(format);
	std::size_t offset = start * static_cast<std::size_t>(format);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	void* map = glMapBufferRange(
		GL_ELEMENT_ARRAY_BUFFER, offset, size,
		GL_MAP_WRITE_BIT | GL_MAP_INVALIDATE_RANGE_BIT
	);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to map index buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), size);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(size)) {
		glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw IOException("Failed to read index buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ELEMENT_ARRAY_BUFFER)) {
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap index buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update index buffer.", __FILE__, __LINE__);
	}
}

void IndexStreamBuffer::resize(std::size_t count)
{
	IndexBuffer::count = count;
}

// IndexArray

template <typename T> inline IndexFormat getIF();
template <> inline IndexFormat getIF<std::uint8_t >() { return IndexFormat::UINT8;  }
template <> inline IndexFormat getIF<std::uint16_t>() { return IndexFormat::UINT16; }
template <> inline IndexFormat getIF<std::uint32_t>() { return IndexFormat::UINT32; }

template <typename T>
IndexArray<T>::IndexArray(std::size_t count)
: IndexStreamBuffer(count, getIF<T>()), array(count)
{}

template <typename T>
IndexArray<T>::IndexArray(const T* data, std::size_t count)
: IndexStreamBuffer(data, count, getIF<T>()), array(data, data + count)
{}

template <typename T>
void IndexArray<T>::resize(std::size_t count)
{
	IndexStreamBuffer::resize(count);
	array.resize(count);
}

template <typename T>
const T& IndexArray<T>::operator[](std::size_t index) const
{
	return array[index];
}

template <typename T>
T& IndexArray<T>::operator[](std::size_t index)
{
	return array[index];
}

template <typename T>
const T* IndexArray<T>::getRawData() const
{
	return array.data();
}

template <typename T>
T* IndexArray<T>::getRawData()
{
	return array.data();
}

template <typename T>
void IndexArray<T>::update()
{
	IndexStreamBuffer::update(array.data());
}

template <typename T>
void IndexArray<T>::update(std::size_t start, std::size_t count)
{
	IndexStreamBuffer::update(&array[start], start, count);
}

template class IndexArray<std::uint8_t >;
template class IndexArray<std::uint16_t>;
template class IndexArray<std::uint32_t>;
