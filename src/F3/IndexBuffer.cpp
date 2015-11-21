#include "IndexBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

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
