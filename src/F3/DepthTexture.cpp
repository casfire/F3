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
, DepthTarget(TextureTarget::ID)
{
	glBindTexture(GL_TEXTURE_2D, TextureTarget::ID);
	GLenum f = glFormat[static_cast<std::size_t>(format)];
	glTexImage2D(
		GL_TEXTURE_2D, 0, f, width, height,
		0, f, GL_UNSIGNED_BYTE, nullptr
	);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create depth texture.", __FILE__, __LINE__);
	}
}