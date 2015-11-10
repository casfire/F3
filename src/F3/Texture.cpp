#include "Texture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

inline GLint getType(TextureFormat format) {
	switch (format) {
	case TextureFormat::UINT8:  return GL_UNSIGNED_BYTE;
	case TextureFormat::UINT16: return GL_UNSIGNED_SHORT;
	case TextureFormat::UINT32: return GL_UNSIGNED_INT;
	case TextureFormat::FLOAT:  return GL_FLOAT;
	default: throw Error("Invalid texture format.", __FILE__, __LINE__);
	}
}

inline GLenum getFormat(std::size_t channels, bool compress) {
	switch (channels) {
	case 1: return compress ? GL_COMPRESSED_RED  : GL_RED;
	case 2: return compress ? GL_COMPRESSED_RG   : GL_RG;
	case 3: return compress ? GL_COMPRESSED_RGB  : GL_RGB;
	case 4: return compress ? GL_COMPRESSED_RGBA : GL_RGBA;
	default: throw Error("Invalid number of channels.", __FILE__, __LINE__);
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
	std::size_t width, std::size_t height,
	std::size_t channels, const void* data,
	TextureFormat format, TextureFilter filter,
	bool compress
) : ID(0), width(width), height(height), channels(channels) {
	GLint  internal = getFormat(channels, compress);
	GLenum external = getFormat(channels, false);
	GLenum type     = getType(format);
	glGenTextures(1, &ID);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, internal, width, height,
		0, external, type, data
	);
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
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create texture.", __FILE__, __LINE__);
	}
}

Texture::~Texture()
{
	glDeleteTextures(1, &ID);
}
