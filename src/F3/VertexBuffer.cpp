#include "VertexBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

VertexBuffer::VertexBuffer(std::size_t size, std::size_t count)
: ID(0), size(size), count(count)
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

std::size_t VertexBuffer::getVertexSize() const
{
	return size;
}

std::size_t VertexBuffer::getVertexCount() const
{
	return count;
}
