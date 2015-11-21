#include "VertexStaticBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

VertexStaticBuffer::VertexStaticBuffer(
	const void* data, std::size_t size, std::size_t count
)
: VertexBuffer(size, count)
{
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, size * count, data, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create static vertex buffer.", __FILE__, __LINE__);
	}
}

VertexStaticBuffer::VertexStaticBuffer(
	std::istream& data, std::size_t size, std::size_t count
)
: VertexBuffer(size, count)
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
