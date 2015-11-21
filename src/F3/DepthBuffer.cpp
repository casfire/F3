#include "DepthBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

static const GLenum glFormat[] = {
	GL_DEPTH_COMPONENT16,
	GL_DEPTH_COMPONENT24,
	GL_DEPTH_COMPONENT32,
};

DepthBuffer::DepthBuffer(
	std::size_t width,
	std::size_t height,
	DepthBufferFormat format
)
: DepthTarget(0, width, height)
{
	glGenRenderbuffers(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate depth buffer.", __FILE__, __LINE__);
	}
	glBindRenderbuffer(GL_RENDERBUFFER, ID);
	glRenderbufferStorage(
		GL_RENDERBUFFER,
		glFormat[static_cast<std::size_t>(format)],
		width, height
	);
	glBindRenderbuffer(GL_RENDERBUFFER, 0);
}

DepthBuffer::~DepthBuffer()
{
	glDeleteRenderbuffers(1, &ID);
}
