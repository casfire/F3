#include "DepthTexture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

static const GLenum glFormat[] = {
	GL_DEPTH_COMPONENT16,
	GL_DEPTH_COMPONENT24,
	GL_DEPTH_COMPONENT32,
};

DepthTexture::DepthTexture(
	std::size_t width,
	std::size_t height,
	DepthTextureFormat format
)
: TextureTarget(width, height, 1)
, DepthTarget(TextureTarget::ID, width, height)
{
	glBindTexture(GL_TEXTURE_2D, TextureTarget::ID);
	GLenum f = glFormat[static_cast<std::size_t>(format)];
	glTexImage2D(
		GL_TEXTURE_2D, 0, f, width, height,
		0, GL_DEPTH_COMPONENT, GL_UNSIGNED_BYTE, nullptr
	);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create depth texture.", __FILE__, __LINE__);
	}
}

DepthTexture::DepthTexture(
	std::size_t width,
	std::size_t height
)
: TextureTarget(width, height, 1)
, DepthTarget(TextureTarget::ID, width, height)
{
	glBindTexture(GL_TEXTURE_2D, TextureTarget::ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, width, height,
		0, GL_DEPTH_COMPONENT, GL_UNSIGNED_BYTE, nullptr
	);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create depth texture.", __FILE__, __LINE__);
	}
}
