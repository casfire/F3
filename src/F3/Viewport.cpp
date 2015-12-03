#include "Viewport.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

inline void attachTarget(unsigned int ID, GLenum attachment) {
	if (glIsTexture(ID)) {
		glFramebufferTexture2D(
			GL_FRAMEBUFFER, attachment, GL_TEXTURE_2D,
			ID, 0
		);
	} else {
		glFramebufferRenderbuffer(
			GL_FRAMEBUFFER, attachment,
			GL_RENDERBUFFER, ID
		);
	}
}

inline void checkFramebuffer(unsigned int ID) {
	if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	} else if (glGetError() != GL_NO_ERROR) {
		glDeleteFramebuffers(1, &ID);
		throw Error("Failed to create viewport.", __FILE__, __LINE__);
	}
}

Viewport::Viewport(
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
)
: ID(0)
, x(x)
, y(y)
, width(width)
, height(height)
, clearBits(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT)
{}

Viewport::Viewport(
	const RenderTarget& target,
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
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
	attachTarget(target.ID, GL_COLOR_ATTACHMENT0);
	glDrawBuffer(GL_COLOR_ATTACHMENT0);
	glReadBuffer(GL_COLOR_ATTACHMENT0);
	checkFramebuffer(ID);
}

Viewport::Viewport(
	const StencilTarget& stencil,
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
)
: ID(0)
, x(x)
, y(y)
, width(width)
, height(height)
, clearBits(GL_STENCIL_BUFFER_BIT)
{
	glGenFramebuffers(1, &ID);
	if (ID <= 0) throw Error("Failed to create viewport.", __FILE__, __LINE__);
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
	attachTarget(stencil.ID, GL_STENCIL_ATTACHMENT);
	glDrawBuffer(GL_NONE);
	glReadBuffer(GL_NONE);
	checkFramebuffer(ID);
}

Viewport::Viewport(
	const StencilTarget& stencil,
	const RenderTarget& target,
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
)
: ID(0)
, x(x)
, y(y)
, width(width)
, height(height)
, clearBits(GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT)
{
	glGenFramebuffers(1, &ID);
	if (ID <= 0) throw Error("Failed to create viewport.", __FILE__, __LINE__);
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
	attachTarget(target.ID, GL_COLOR_ATTACHMENT0);
	attachTarget(stencil.ID, GL_STENCIL_ATTACHMENT);
	glDrawBuffer(GL_COLOR_ATTACHMENT0);
	glReadBuffer(GL_COLOR_ATTACHMENT0);
	checkFramebuffer(ID);
}

Viewport::Viewport(
	const DepthTarget& depth,
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
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
	attachTarget(depth.ID, GL_DEPTH_ATTACHMENT);
	glDrawBuffer(GL_NONE);
	glReadBuffer(GL_NONE);
	checkFramebuffer(ID);
}

Viewport::Viewport(
	const DepthTarget& depth,
	const RenderTarget& target,
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
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
	attachTarget(target.ID, GL_COLOR_ATTACHMENT0);
	attachTarget(depth.ID, GL_DEPTH_ATTACHMENT);
	glDrawBuffer(GL_COLOR_ATTACHMENT0);
	glReadBuffer(GL_COLOR_ATTACHMENT0);
	checkFramebuffer(ID);
}

Viewport::Viewport(
	const DepthTarget& depth,
	const StencilTarget& stencil,
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
)
: ID(0)
, x(x)
, y(y)
, width(width)
, height(height)
, clearBits(GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT)
{
	glGenFramebuffers(1, &ID);
	if (ID <= 0) throw Error("Failed to create viewport.", __FILE__, __LINE__);
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
	if (depth.ID == stencil.ID) {
		attachTarget(depth.ID, GL_DEPTH_STENCIL_ATTACHMENT);
	} else {
		attachTarget(stencil.ID, GL_STENCIL_ATTACHMENT);
		attachTarget(depth.ID, GL_DEPTH_ATTACHMENT);
	}
	glDrawBuffer(GL_NONE);
	glReadBuffer(GL_NONE);
	checkFramebuffer(ID);
}

Viewport::Viewport(
	const DepthTarget& depth,
	const StencilTarget& stencil,
	const RenderTarget& target,
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
)
: ID(0)
, x(x)
, y(y)
, width(width)
, height(height)
, clearBits(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT)
{
	glGenFramebuffers(1, &ID);
	if (ID <= 0) throw Error("Failed to create viewport.", __FILE__, __LINE__);
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
	attachTarget(target.ID, GL_COLOR_ATTACHMENT0);
	if (depth.ID == stencil.ID) {
		attachTarget(depth.ID, GL_DEPTH_STENCIL_ATTACHMENT);
	} else {
		attachTarget(stencil.ID, GL_STENCIL_ATTACHMENT);
		attachTarget(depth.ID, GL_DEPTH_ATTACHMENT);
	}
	glDrawBuffer(GL_COLOR_ATTACHMENT0);
	glReadBuffer(GL_COLOR_ATTACHMENT0);
	checkFramebuffer(ID);
}

Viewport::~Viewport()
{
	if (ID > 0) glDeleteFramebuffers(1, &ID);
}

void Viewport::resize(
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
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
		clearBits, smooth ? GL_LINEAR : GL_NEAREST
	);
}
