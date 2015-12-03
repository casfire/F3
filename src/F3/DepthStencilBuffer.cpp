#include "DepthStencilBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

DepthStencilBuffer::DepthStencilBuffer(
	std::size_t width,
	std::size_t height
)
: DepthTarget(0, width, height)
, StencilTarget(0, width, height)
{
	glGenRenderbuffers(1, &(DepthTarget::ID));
	if (DepthTarget::ID <= 0) {
		throw Error("Failed to generate depth/stencil buffer.", __FILE__, __LINE__);
	}
	StencilTarget::ID = DepthTarget::ID;
	glBindRenderbuffer(GL_RENDERBUFFER, DepthTarget::ID);
	glRenderbufferStorage(
		GL_RENDERBUFFER,
		GL_DEPTH24_STENCIL8,
		width, height
	);
	glBindRenderbuffer(GL_RENDERBUFFER, 0);
}

DepthStencilBuffer::~DepthStencilBuffer()
{
	glDeleteRenderbuffers(1, &(DepthTarget::ID));
}
