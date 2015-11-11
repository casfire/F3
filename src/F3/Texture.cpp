#include "Texture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include "stb_image.h"

using namespace F3;
using namespace GL;

inline GLenum getFormat(std::size_t channels, bool compress) {
	switch (channels) {
	case 1: return compress ? GL_COMPRESSED_RED  : GL_RED;
	case 2: return compress ? GL_COMPRESSED_RG   : GL_RG;
	case 3: return compress ? GL_COMPRESSED_RGB  : GL_RGB;
	case 4: return compress ? GL_COMPRESSED_RGBA : GL_RGBA;
	default: throw Error("Invalid number of channels.", __FILE__, __LINE__);
	}
}

inline void setFilter(TextureFilter filter) {
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	switch (filter) {
	case TextureFilter::NEAREST:
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);	
		break;
	case TextureFilter::BILINEAR:
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		break;
	case TextureFilter::TRILINEAR:
		glGenerateMipmap(GL_TEXTURE_2D);
		glTexParameteri(
			GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR
		);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		break;
	case TextureFilter::ANISOTROPIC:
		glGenerateMipmap(GL_TEXTURE_2D);
		glTexParameteri(
			GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR
		);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		if (ext_GL_EXT_texture_filter_anisotropic) {
			float max;
			glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &max);
			glTexParameterf(
				GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, max
			);
		}
		break;
	default:
		throw Error("Invalid texture filter.", __FILE__, __LINE__);
		break;
	}
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

Texture::Texture(
	std::size_t width, std::size_t height, std::size_t channels,
	const std::uint8_t* pixels, TextureFilter filter, bool compress
) : ID(0), width(width), height(height), channels(channels) {
	GLint  internal = getFormat(channels, compress);
	GLenum external = getFormat(channels, false);
	glGenTextures(1, &ID);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, internal, width, height,
		0, external, GL_UNSIGNED_BYTE, pixels
	);
	setFilter(filter);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create texture.", __FILE__, __LINE__);
	}
}

Texture::Texture(
	const std::string& filename,
	TextureFilter filter, bool compress
) : ID(0) {
	unsigned char *data; int w, h, c;
	data = stbi_load(filename.c_str(), &w, &h, &c, 0);
	if (data == nullptr) {
		throw Exception(
			"Failed to load " + filename + ":\n"
			+ std::string(stbi_failure_reason())
		);
	}
	width = w; height = h; channels = c;
	GLint  internal = getFormat(channels, compress);
	GLenum external = getFormat(channels, false);
	glGenTextures(1, &ID);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, internal, width, height,
		0, external, GL_UNSIGNED_BYTE, data
	);
	setFilter(filter);
	glBindTexture(GL_TEXTURE_2D, 0);
	stbi_image_free(data);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create texture.", __FILE__, __LINE__);
	}
}

Texture::Texture(
	const void* memory, std::size_t length,
	TextureFilter filter, bool compress
) : ID(0) {
	unsigned char *data; int w, h, c;
	data = stbi_load_from_memory(
		reinterpret_cast<const stbi_uc*>(memory),
		length, &w, &h, &c, 0
	);
	if (data == nullptr) {
		throw Exception(
			"Failed to load texture:\n"
			+ std::string(stbi_failure_reason())
		);
	}
	width = w; height = h; channels = c;
	GLint  internal = getFormat(channels, compress);
	GLenum external = getFormat(channels, false);
	glGenTextures(1, &ID);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, internal, width, height,
		0, external, GL_UNSIGNED_BYTE, data
	);
	setFilter(filter);
	glBindTexture(GL_TEXTURE_2D, 0);
	stbi_image_free(data);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create texture.", __FILE__, __LINE__);
	}
}

Texture::~Texture()
{
	glDeleteTextures(1, &ID);
}
