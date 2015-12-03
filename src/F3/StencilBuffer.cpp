#include "StencilBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

StencilBuffer::StencilBuffer(
	std::size_t width,
	std::size_t height
)
: StencilTarget(0, width, height)
{
	glGenRenderbuffers(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate stencil buffer.", __FILE__, __LINE__);
	}
	glBindRenderbuffer(GL_RENDERBUFFER, ID);
	glRenderbufferStorage(
		GL_RENDERBUFFER,
		GL_STENCIL_INDEX,
		width, height
	);
	glBindRenderbuffer(GL_RENDERBUFFER, 0);
}

StencilBuffer::~StencilBuffer()
{
	glDeleteRenderbuffers(1, &ID);
}
