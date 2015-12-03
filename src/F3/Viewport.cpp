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

static bool cull[] = { false, true, true };
static unsigned int cullFront[] = { 0, GL_CCW, GL_CW };
static unsigned int depthTestFunc[] = {
	GL_ALWAYS, GL_NEVER, GL_LESS, GL_GREATER
};
static unsigned int stencilTestFunc[] = {
	GL_ALWAYS, GL_NEVER,
	GL_LESS,   GL_LEQUAL,
	GL_EQUAL,  GL_NOTEQUAL,
	GL_GEQUAL, GL_GREATER,
};
static unsigned int stencilWrite[] = {
	GL_KEEP,      GL_ZERO,
	GL_REPLACE,   GL_INCR,
	GL_INCR_WRAP, GL_DECR,
	GL_DECR_WRAP, GL_INVERT,
};

void Viewport::setCullTest(CullTest test)
{
	std::size_t t = static_cast<std::size_t>(test);
	state.cull = cull[t];
	state.cullFront = cullFront[t];
}

void Viewport::setDepthTest(DepthTest test)
{
	std::size_t t = static_cast<std::size_t>(test);
	state.depthTestFunc = depthTestFunc[t];
}

void Viewport::setDepthClamping(bool enabled)
{
	state.depthClamp = enabled;
}

void Viewport::setDepthWrite(bool enabled)
{
	state.depthWrite = enabled;
}

void Viewport::setStencilTest(
	StencilTest test, 
	std::uint8_t ref,
	std::uint8_t mask
) {
	std::size_t t = static_cast<std::size_t>(test);
	state.stencilTestFunc = stencilTestFunc[t];
	state.stencilTestRef = ref;
	state.stencilTestMask = mask;
}

void Viewport::setStencilWrite(
	StencilWrite stencilFail,
	StencilWrite stencilPassDepthFail,
	StencilWrite stencilPassDepthPass,
	std::uint8_t mask
) {
	state.stencilWriteSfail = stencilWrite[
		static_cast<std::size_t>(stencilFail)
	];
	state.stencilWriteDfail = stencilWrite[
		static_cast<std::size_t>(stencilPassDepthFail)
	];
	state.stencilWriteDpass = stencilWrite[
		static_cast<std::size_t>(stencilPassDepthPass)
	];
	state.stencilWriteMask = mask;
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

void Viewport::render(const Renderable* obj, std::size_t count) const
{
	if (state.cull) {
		glEnable(GL_CULL_FACE);
		glFrontFace(state.cullFront);
	} else {
		glDisable(GL_CULL_FACE);
	}
	if (state.depth) {
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(state.depthTestFunc);
		if (state.depthClamp) {
			glEnable(GL_DEPTH_CLAMP);
		} else {
			glDisable(GL_DEPTH_CLAMP);
		}
		if (state.depthWrite) {
			glDepthMask(GL_TRUE);
		} else {
			glDepthMask(GL_FALSE);
		}
	} else {
		glDisable(GL_DEPTH_TEST);
	}
	if (state.stencil) {
		glEnable(GL_STENCIL_TEST);
		glStencilFunc(
			state.stencilTestFunc,
			state.stencilTestRef,
			state.stencilTestMask
		);
		glStencilMask(state.stencilWriteMask);
		glStencilOp(
			state.stencilWriteSfail,
			state.stencilWriteDfail,
			state.stencilWriteDpass
		);
	} else {
		glDisable(GL_STENCIL_TEST);
	}
	glBindFramebuffer(GL_FRAMEBUFFER, ID);
	glViewport(x, y, width, height);
	for (std::size_t i = 0; i < count; i++) {
		glBindVertexArray(obj[i].VAO);
		glUseProgram(obj[i].PID);
		for (std::size_t u = 0; u < obj[i].uniforms; u++) if (obj[i].uniform[u].update) {
			obj[i].uniform[u].update = false;
			switch (obj[i].uniform[u].uni) {
			case Renderable::uni::FLT1:
				glUniform1fv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLfloat*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::FLT2:
				glUniform2fv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLfloat*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::FLT3:
				glUniform3fv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLfloat*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::FLT4:
				glUniform4fv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLfloat*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::INT1:
				glUniform1iv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::INT2:
				glUniform2iv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::INT3:
				glUniform3iv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::INT4:
				glUniform4iv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::UNT1:
				glUniform1uiv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLuint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::UNT2:
				glUniform2uiv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLuint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::UNT3:
				glUniform3uiv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLuint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::UNT4:
				glUniform4uiv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					static_cast<const GLuint*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::MAT2:
				glUniformMatrix2fv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count,
					GL_FALSE, static_cast<const GLfloat*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::MAT3:
				glUniformMatrix3fv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count, GL_FALSE,
					static_cast<const GLfloat*>(obj[i].uniform[u].value)
				);
				break;
			case Renderable::uni::MAT4:
				glUniformMatrix4fv(
					obj[i].uniform[u].loc, obj[i].uniform[u].count, GL_FALSE,
					static_cast<const GLfloat*>(obj[i].uniform[u].value)
				);
				break;
			}
		}
		for (std::size_t s = 0; s < obj[i].samplers; s++) {
			glActiveTexture(obj[i].sampler[s].unit);
			glBindTexture(GL_TEXTURE_2D, obj[i].sampler[s].tex);
			glBindSampler(obj[i].sampler[s].unit, obj[i].sampler[s].sam);
		}
		if (obj[i].indices) {
			glDrawElements(
				obj[i].elements.mode,
				obj[i].elements.count,
				obj[i].elements.type,
				obj[i].elements.indices
			);
		} else {
			glDrawArrays(
				obj[i].arrays.mode,
				obj[i].arrays.first,
				obj[i].arrays.count
			);
		}
	}
}

void Viewport::render(const Renderable& obj) const
{
	render(&obj, 1);
}
