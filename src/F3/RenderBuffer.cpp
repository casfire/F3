#include "RenderBuffer.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

static const GLenum glFormat[] = {
	GL_R8,   GL_RG8,   GL_RGB8,   GL_RGBA8,
	GL_R16,  GL_RG16,  GL_RGB16,  GL_RGBA16,
	GL_R16F, GL_RG16F, GL_RGB16F, GL_RGBA16F,
	GL_R32F, GL_RG32F, GL_RGB32F, GL_RGBA32F,
};

RenderBuffer::RenderBuffer(
	std::size_t width,
	std::size_t height,
	std::size_t channels,
	RenderBufferFormat format
)
: RenderTarget(0, width, height, channels)
{
	if (channels == 0) throw Error("Zero channels.", __FILE__, __LINE__);
	if (channels >= 5) throw Error("More than 4 channels.", __FILE__, __LINE__);
	glGenRenderbuffers(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate depth buffer.", __FILE__, __LINE__);
	}
	glBindRenderbuffer(GL_RENDERBUFFER, ID);
	glRenderbufferStorage(
		GL_RENDERBUFFER,
		glFormat[static_cast<std::size_t>(format) * 4 + channels - 1],
		width, height
	);
	glBindRenderbuffer(GL_RENDERBUFFER, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create render buffer.", __FILE__, __LINE__);
	}
}

RenderBuffer::~RenderBuffer()
{
	glDeleteRenderbuffers(1, &ID);
}
