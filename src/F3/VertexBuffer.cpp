#include "VertexBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include <cstring>

using namespace F3;
using namespace GL;

// VertexBuffer

VertexBuffer::VertexBuffer(
	std::size_t size, std::size_t count, const VertexFormat& format
) : ID(0), format(format), size(size), count(count)
{
	glGenBuffers(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate vertex buffer.", __FILE__, __LINE__);
	}
}

VertexBuffer::~VertexBuffer()
{
	glDeleteBuffers(1, &ID);
}

const VertexFormat& VertexBuffer::getFormat() const
{
	return format;
}

std::size_t VertexBuffer::getVertexSize() const
{
	return size;
}

std::size_t VertexBuffer::getVertexCount() const
{
	return count;
}

// VertexStaticBuffer

VertexStaticBuffer::VertexStaticBuffer(
	const void* data, std::size_t size, std::size_t count,
	const VertexFormat& format
) : VertexBuffer(size, count, format)
{
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, size * count, data, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create vertex buffer.", __FILE__, __LINE__);
	}
}

VertexStaticBuffer::VertexStaticBuffer(
	std::istream& data, std::size_t size, std::size_t count,
	const VertexFormat& format
) : VertexBuffer(size, count, format)
{
	std::size_t len = size * count;
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, len, nullptr, GL_STATIC_DRAW);
	void* map = glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to map vertex buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), len);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(len)) {
		glUnmapBuffer(GL_ARRAY_BUFFER);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw IOException("Failed to read vertex buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ARRAY_BUFFER)) {
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap vertex buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create vertex buffer.", __FILE__, __LINE__);
	}
}

// VertexStreamBuffer

VertexStreamBuffer::VertexStreamBuffer(
	std::size_t size, std::size_t count,
	const VertexFormat& format
) : VertexStreamBuffer(nullptr, size, count, format)
{}

VertexStreamBuffer::VertexStreamBuffer(
	const void* data, std::size_t size, std::size_t count,
	const VertexFormat& format
) : VertexBuffer(size, count, format)
{
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, size * count, data, GL_STREAM_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create vertex buffer.", __FILE__, __LINE__);
	}
}

VertexStreamBuffer::VertexStreamBuffer(
	std::istream& data, std::size_t size, std::size_t count,
	const VertexFormat& format
) : VertexBuffer(size, count, format)
{
	std::size_t len = size * count;
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, len, nullptr, GL_STREAM_DRAW);
	void* map = glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to map vertex buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), len);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(len)) {
		glUnmapBuffer(GL_ARRAY_BUFFER);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw IOException("Failed to read vertex buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ARRAY_BUFFER)) {
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap vertex buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create vertex buffer.", __FILE__, __LINE__);
	}
}

void VertexStreamBuffer::update(const void* data)
{
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, size * count, nullptr, GL_STREAM_DRAW);
	glBufferData(GL_ARRAY_BUFFER, size * count, data, GL_STREAM_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update vertex buffer.", __FILE__, __LINE__);
	}
}

void VertexStreamBuffer::update(std::istream& data)
{
	std::size_t len = size * count;
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, len, nullptr, GL_STREAM_DRAW);
	void* map = glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to map vertex buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), len);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(len)) {
		glUnmapBuffer(GL_ARRAY_BUFFER);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw IOException("Failed to read vertex buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ARRAY_BUFFER)) {
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap vertex buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update vertex buffer.", __FILE__, __LINE__);
	}
}

void VertexStreamBuffer::update(
	const void* data, std::size_t start, std::size_t count
) {
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	void* map = glMapBufferRange(
		GL_ARRAY_BUFFER, size * start, size * count,
		GL_MAP_WRITE_BIT | GL_MAP_INVALIDATE_RANGE_BIT
	);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to map index buffer.", __FILE__, __LINE__);
	}
	std::memcpy(map, data, size * count);
	if (!glUnmapBuffer(GL_ARRAY_BUFFER)) {
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap index buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update index buffer.", __FILE__, __LINE__);
	}
}

void VertexStreamBuffer::update(
	std::istream& data, std::size_t start, std::size_t count
) {
	std::size_t len = size * count;
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	void* map = glMapBufferRange(
		GL_ARRAY_BUFFER, size * start, len,
		GL_MAP_WRITE_BIT | GL_MAP_INVALIDATE_RANGE_BIT
	);
	if (map == nullptr) {
		glGetError();
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to map index buffer.", __FILE__, __LINE__);
	}
	data.read(reinterpret_cast<char*>(map), len);
	if (data.fail() || data.gcount() != static_cast<std::streamsize>(len)) {
		glUnmapBuffer(GL_ARRAY_BUFFER);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw IOException("Failed to read index buffer from stream.");
	}
	if (!glUnmapBuffer(GL_ARRAY_BUFFER)) {
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		throw Error("Failed to unmap index buffer.", __FILE__, __LINE__);
	}
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to update index buffer.", __FILE__, __LINE__);
	}
}

void VertexStreamBuffer::resize(std::size_t count)
{
	VertexBuffer::count = count;
}
