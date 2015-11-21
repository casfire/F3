#include "IndexStaticBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

IndexStaticBuffer::IndexStaticBuffer(
	const void* data, std::size_t count, IndexFormat format
)
: IndexBuffer(count, format)
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
)
: IndexBuffer(count, format)
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

IndexStaticBuffer::IndexStaticBuffer(const std::uint8_t* data, std::size_t count)
: IndexStaticBuffer(data, count, IndexFormat::UINT8)
{}

IndexStaticBuffer::IndexStaticBuffer(const std::uint16_t* data, std::size_t count)
: IndexStaticBuffer(data, count, IndexFormat::UINT16)
{}

IndexStaticBuffer::IndexStaticBuffer(const std::uint32_t* data, std::size_t count)
: IndexStaticBuffer(data, count, IndexFormat::UINT32)
{}
