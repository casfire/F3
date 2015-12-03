#include "DepthStencilTexture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

DepthStencilTexture::DepthStencilTexture(
	std::size_t width,
	std::size_t height
)
: TextureTarget(width, height, 4)
, DepthTarget(TextureTarget::ID, width, height)
, StencilTarget(TextureTarget::ID, width, height)
{
	glBindTexture(GL_TEXTURE_2D, TextureTarget::ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, GL_DEPTH24_STENCIL8, width, height,
		0, GL_DEPTH_STENCIL, GL_UNSIGNED_BYTE, nullptr
	);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create depth/stencil texture.", __FILE__, __LINE__);
	}
}
