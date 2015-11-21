#include "Viewport.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

Viewport::Viewport(
	DepthTarget& depth,
	RenderTarget& target,
	std::size_t x,
	std::size_t y,
	std::size_t width,
	std::size_t height
)
: ID(0)
, x(x)
, y(y)
, width(width)
, height(height)
, clearBits(0)
{
	if (target.ID == 0) {
		clearBits = GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT;
		ID = 0;
	} else {
		clearBits = GL_COLOR_BUFFER_BIT;
		glGenFramebuffers(1, &ID);
		if (ID <= 0) throw Error("Failed to create viewport.", __FILE__, __LINE__);
		glBindFramebuffer(GL_FRAMEBUFFER, ID);
		if (glIsTexture(target.ID)) {
			glFramebufferTexture2D(
				GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D,
				target.ID, 0
			);
		} else {
			glFramebufferRenderbuffer(
				GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
				GL_RENDERBUFFER, target.ID
			);
		}
		if (glIsTexture(depth.ID)) {
			glFramebufferTexture2D(
				GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D,
				depth.ID, 0
			);
		} else {
			glFramebufferRenderbuffer(
				GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT,
				GL_RENDERBUFFER, depth.ID
			);
		}
		if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
			glDeleteFramebuffers(1, &ID);
			throw Error("Failed to create viewport.", __FILE__, __LINE__);
		} else if (glGetError() != GL_NO_ERROR) {
			glDeleteFramebuffers(1, &ID);
			throw Error("Failed to create viewport.", __FILE__, __LINE__);
		}
	}
}

Viewport::Viewport(
	RenderTarget& target,
	std::size_t x,
	std::size_t y,
	std::size_t width,
	std::size_t height
)
: ID(0)
, x(x)
, y(y)
, width(width)
, height(height)
, clearBits(0)
{
	if (target.ID == 0) {
		clearBits = GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT;
		ID = 0;
	} else {
		clearBits = GL_COLOR_BUFFER_BIT;
		glGenFramebuffers(1, &ID);
		if (ID <= 0) throw Error("Failed to create viewport.", __FILE__, __LINE__);
		glBindFramebuffer(GL_FRAMEBUFFER, ID);
		if (glIsTexture(target.ID)) {
			glFramebufferTexture2D(
				GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D,
				target.ID, 0
			);
		} else {
			glFramebufferRenderbuffer(
				GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
				GL_RENDERBUFFER, target.ID
			);
		}
		if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
			glDeleteFramebuffers(1, &ID);
			throw Error("Failed to create viewport.", __FILE__, __LINE__);
		} else if (glGetError() != GL_NO_ERROR) {
			glDeleteFramebuffers(1, &ID);
			throw Error("Failed to create viewport.", __FILE__, __LINE__);
		}
	}
}

Viewport::Viewport(
	DepthTarget& depth,
	RenderTarget& target,
	std::size_t width,
	std::size_t height
)
: Viewport(depth, target, 0, 0, width, height)
{}

Viewport::Viewport(
	RenderTarget& target,
	std::size_t width,
	std::size_t height
)
: Viewport(target, 0, 0, width, height)
{}

Viewport::~Viewport()
{
	if (ID > 0) glDeleteFramebuffers(1, &ID);
}

void Viewport::clear() const
{
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
	glViewport(x, y, width, height);
	glClear(clearBits);
}
