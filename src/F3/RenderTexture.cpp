#include "RenderTexture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

static const GLenum minFilter[] = {
	GL_NEAREST,
	GL_LINEAR,
	GL_LINEAR_MIPMAP_LINEAR,
	GL_LINEAR_MIPMAP_LINEAR,
};

static const GLenum magFilter[] = {
	GL_NEAREST,
	GL_LINEAR,
	GL_LINEAR,
	GL_LINEAR,
};

static const GLenum glFormat[] = {
	GL_RED,  GL_RG,    GL_RGB,    GL_RGBA,
	GL_R8,   GL_RG8,   GL_RGB8,   GL_RGBA8,
	GL_R16,  GL_RG16,  GL_RGB16,  GL_RGBA16,
	GL_R16F, GL_RG16F, GL_RGB16F, GL_RGBA16F,
	GL_R32F, GL_RG32F, GL_RGB32F, GL_RGBA32F,
};

RenderTexture::RenderTexture(
	std::size_t width,
	std::size_t height,
	std::size_t channels,
	RenderTextureFilter filter,
	RenderTextureFormat format
)
: TextureTarget(width, height, channels)
, RenderTarget(TextureTarget::ID)
{
	if (channels == 0) throw Error("Zero channels.", __FILE__, __LINE__);
	glBindTexture(GL_TEXTURE_2D, TextureTarget::ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0,
		glFormat[4 + static_cast<std::size_t>(format) * 4 + channels - 1],
		width, height, 0, glFormat[channels - 1], GL_UNSIGNED_BYTE, nullptr
	);
	std::size_t f = static_cast<std::size_t>(filter);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, minFilter[f]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, magFilter[f]);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create render texture.", __FILE__, __LINE__);
	}
}
