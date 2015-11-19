#include "Texture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include "stb_image.h"

using namespace F3;
using namespace GL;

// Texture

Texture::Texture(
	std::size_t width,
	std::size_t height,
	std::size_t channels
)
: ID(0)
, width(width)
, height(height)
, channels(channels)
{
	glGenTextures(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate texture.", __FILE__, __LINE__);
	} else if (channels > 4) {
		throw Error("More than 4 channels.", __FILE__, __LINE__);
	}
}

Texture::~Texture()
{
	glDeleteTextures(1, &ID);
}

std::size_t Texture::getWidth() const
{
	return width;
}

std::size_t Texture::getHeight() const
{
	return height;
}

std::size_t Texture::getChannels() const
{
	return channels;
}

// StaticTexture

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

StaticTexture::StaticTexture(
	std::size_t width,
	std::size_t height,
	std::size_t channels,
	const std::uint8_t* pixels,
	StaticTextureFilter filter
)
: Texture(width, height, channels)
{
	if (channels == 0) throw Error("Zero channels.", __FILE__, __LINE__);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, glFormat[channels - 1], width, height,
		0, glFormat[channels - 1], GL_UNSIGNED_BYTE, pixels
	);
	std::size_t f = static_cast<std::size_t>(filter);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, minFilter[f]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, magFilter[f]);
	if (f == 3 && ext_GL_EXT_texture_filter_anisotropic) {
		float max;
		glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &max);
		glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, max);
	}
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create static texture.", __FILE__, __LINE__);
	}
}

StaticTexture::StaticTexture(
	const std::string& filename,
	StaticTextureFilter filter
)
: Texture(0, 0, 0)
{
	unsigned char *data; int w, h, c;
	data = stbi_load(filename.c_str(), &w, &h, &c, 0);
	if (data == nullptr) {
		throw IOException(
			"Failed to load " + filename + ":\n"
			+ std::string(stbi_failure_reason())
		);
	}
	width = w; height = h; channels = c;
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, glFormat[channels - 1], width, height,
		0, glFormat[channels - 1], GL_UNSIGNED_BYTE, data
	);
	std::size_t f = static_cast<std::size_t>(filter);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, minFilter[f]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, magFilter[f]);
	if (f == 3 && ext_GL_EXT_texture_filter_anisotropic) {
		float max;
		glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &max);
		glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, max);
	}
	glBindTexture(GL_TEXTURE_2D, 0);
	stbi_image_free(data);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create static texture.", __FILE__, __LINE__);
	}
}

// RenderTexture

RenderTexture::RenderTexture(
	std::size_t width,
	std::size_t height,
	std::size_t channels,
	RenderTextureFilter filter,
	RenderTextureFormat format
)
: Texture(width, height, channels)
{
	if (channels == 0) throw Error("Zero channels.", __FILE__, __LINE__);
	glBindTexture(GL_TEXTURE_2D, ID);
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

// DepthTexture

DepthTexture::DepthTexture(
	std::size_t width,
	std::size_t height
)
: Texture(width, height, 1)
{
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, width, height,
		0, GL_DEPTH_COMPONENT, GL_UNSIGNED_BYTE, nullptr
	);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create depth texture.", __FILE__, __LINE__);
	}
}
