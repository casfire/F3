#include "StencilTexture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

StencilTexture::StencilTexture(
	std::size_t width,
	std::size_t height
)
: TextureTarget(width, height, 1)
, StencilTarget(TextureTarget::ID, width, height)
{
	glBindTexture(GL_TEXTURE_2D, TextureTarget::ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0,  GL_STENCIL_INDEX8, width, height,
		0,  GL_STENCIL_INDEX, GL_UNSIGNED_BYTE, nullptr
	);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create stencil texture.", __FILE__, __LINE__);
	}
}
