#include "IndexStreamBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include <cstring>

using namespace F3;
using namespace GL;

IndexStreamBuffer::IndexStreamBuffer(
	std::size_t count, IndexFormat format
)
: IndexStreamBuffer(nullptr, count, format)
{}

IndexStreamBuffer::IndexStreamBuffer(
	const void* data, std::size_t count, IndexFormat format
)
: IndexBuffer(count, format)
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
)
: IndexBuffer(count, format)
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
)
: IndexStreamBuffer(data, count, IndexFormat::UINT8)
{}

IndexStreamBuffer::IndexStreamBuffer(
	const std::uint16_t* data, std::size_t count
)
: IndexStreamBuffer(data, count, IndexFormat::UINT16)
{}

IndexStreamBuffer::IndexStreamBuffer(
	const std::uint32_t* data, std::size_t count
)
: IndexStreamBuffer(data, count, IndexFormat::UINT32)
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
