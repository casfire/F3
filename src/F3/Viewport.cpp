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
, width(width == 0 ? target.getWidth() : width)
, height(height == 0 ? target.getHeight() : height)
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
, width(width == 0 ? stencil.getWidth() : width)
, height(height == 0 ? stencil.getHeight() : height)
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
, width(width == 0 ? target.getWidth() : width)
, height(height == 0 ? target.getHeight() : height)
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
, width(width == 0 ? depth.getWidth() : width)
, height(height == 0 ? depth.getHeight() : height)
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
, width(width == 0 ? target.getWidth() : width)
, height(height == 0 ? target.getHeight() : height)
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
, width(width == 0 ? stencil.getWidth() : width)
, height(height == 0 ? stencil.getHeight() : height)
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
, width(width == 0 ? target.getWidth() : width)
, height(height == 0 ? target.getHeight() : height)
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

void Viewport::render(const Renderable& obj) const
{
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
	glViewport(x, y, width, height);
	glBindVertexArray(obj.VAO);
	glUseProgram(obj.PID);
	for (std::size_t u = 0; u < obj.uniforms; u++) if (obj.uniform[u].update) {
		obj.uniform[u].update = false;
		switch (obj.uniform[u].uni) {
		case Renderable::uni::FLT1:
			glUniform1fv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLfloat*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::FLT2:
			glUniform2fv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLfloat*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::FLT3:
			glUniform3fv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLfloat*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::FLT4:
			glUniform4fv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLfloat*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::INT1:
			glUniform1iv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::INT2:
			glUniform2iv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::INT3:
			glUniform3iv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::INT4:
			glUniform4iv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::UNT1:
			glUniform1uiv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLuint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::UNT2:
			glUniform2uiv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLuint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::UNT3:
			glUniform3uiv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLuint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::UNT4:
			glUniform4uiv(
				obj.uniform[u].loc, obj.uniform[u].count,
				static_cast<const GLuint*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::MAT2:
			glUniformMatrix2fv(
				obj.uniform[u].loc, obj.uniform[u].count,
				GL_FALSE, static_cast<const GLfloat*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::MAT3:
			glUniformMatrix3fv(
				obj.uniform[u].loc, obj.uniform[u].count, GL_FALSE,
				static_cast<const GLfloat*>(obj.uniform[u].value)
			);
			break;
		case Renderable::uni::MAT4:
			glUniformMatrix4fv(
				obj.uniform[u].loc, obj.uniform[u].count, GL_FALSE,
				static_cast<const GLfloat*>(obj.uniform[u].value)
			);
			break;
		}
	}
	for (std::size_t s = 0; s < obj.samplers; s++) {
		glActiveTexture(obj.sampler[s].unit);
		glBindTexture(GL_TEXTURE_2D, obj.sampler[s].tex);
		glBindSampler(obj.sampler[s].unit, obj.sampler[s].sam);
	}
	if (obj.indices) {
		glDrawElements(
			obj.elements.mode,
			obj.elements.count,
			obj.elements.type,
			obj.elements.indices
		);
	} else {
		glDrawArrays(
			obj.arrays.mode,
			obj.arrays.first,
			obj.arrays.count
		);
	}
}
