#include "Viewport.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

Viewport::Viewport(
	const DepthTarget& depth,
	const RenderTarget& target,
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
, clearBits(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
{
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
	glDrawBuffer(GL_COLOR_ATTACHMENT0);
	glReadBuffer(GL_COLOR_ATTACHMENT0);
	if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	} else if (glGetError() != GL_NO_ERROR) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	}
}

Viewport::Viewport(
	const RenderTarget& target,
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
, clearBits(GL_COLOR_BUFFER_BIT)
{
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
	glDrawBuffer(GL_COLOR_ATTACHMENT0);
	glReadBuffer(GL_COLOR_ATTACHMENT0);
	if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	} else if (glGetError() != GL_NO_ERROR) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	}
}

Viewport::Viewport(
	const DepthTarget& depth,
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
, clearBits(GL_DEPTH_BUFFER_BIT)
{
	glGenFramebuffers(1, &ID);
	if (ID <= 0) throw Error("Failed to create viewport.", __FILE__, __LINE__);
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
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
	glDrawBuffer(GL_NONE);
	glReadBuffer(GL_NONE);
	if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	} else if (glGetError() != GL_NO_ERROR) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	}
}

Viewport::Viewport(
	const DepthTarget& depth,
	const RenderTarget& target,
	std::size_t width,
	std::size_t height
)
: Viewport(depth, target, 0, 0, width, height)
{}

Viewport::Viewport(
	const RenderTarget& target,
	std::size_t width,
	std::size_t height
)
: Viewport(target, 0, 0, width, height)
{}

Viewport::Viewport(
	const DepthTarget& depth,
	std::size_t width,
	std::size_t height
)
: Viewport(depth, 0, 0, width, height)
{}

Viewport::Viewport(
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
, clearBits(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
{}

Viewport::Viewport(
	std::size_t width,
	std::size_t height
)
: Viewport(0, 0, width, height)
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

void Viewport::render(const Viewport& from, bool smooth) const
{
	glBindFramebuffer(GL_READ_FRAMEBUFFER, from.ID);
	glBindFramebuffer(GL_DRAW_FRAMEBUFFER, ID);
	glBlitFramebuffer(
		from.x, from.y, from.x + from.width, from.y + from.height,
		x, y, x + width, y + height,
		clearBits, smooth ? GL_NEAREST : GL_LINEAR
	);
}
