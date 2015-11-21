#include "StaticTexture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include "stb_image.h"

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
	0, GL_RED, GL_RG, GL_RGB, GL_RGBA
};

StaticTexture::StaticTexture(
	std::size_t width,
	std::size_t height,
	std::size_t channels,
	const std::uint8_t* pixels,
	StaticTextureFilter filter
)
: TextureTarget(width, height, channels)
{
	if (channels == 0) throw Error("Zero channels.", __FILE__, __LINE__);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, glFormat[channels], width, height,
		0, glFormat[channels], GL_UNSIGNED_BYTE, pixels
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
: TextureTarget(0, 0, 0)
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
		GL_TEXTURE_2D, 0, glFormat[channels], width, height,
		0, glFormat[channels], GL_UNSIGNED_BYTE, data
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
