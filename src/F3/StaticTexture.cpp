#include "StaticTexture.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include "stb_image.h"

using namespace F3;
using namespace GL;

static const GLenum glFormat[] = {
	0, GL_RED, GL_RG, GL_RGB, GL_RGBA
};

StaticTexture::StaticTexture(
	std::size_t width,
	std::size_t height,
	std::size_t channels,
	const std::uint8_t* pixels
)
: TextureTarget(width, height, channels)
{
	if (channels == 0) throw Error("Zero channels.", __FILE__, __LINE__);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(
		GL_TEXTURE_2D, 0, glFormat[channels], width, height,
		0, glFormat[channels], GL_UNSIGNED_BYTE, pixels
	);
	glBindTexture(GL_TEXTURE_2D, 0);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create static texture.", __FILE__, __LINE__);
	}
}

StaticTexture::StaticTexture(
	const std::string& filename
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
	glBindTexture(GL_TEXTURE_2D, 0);
	stbi_image_free(data);
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create static texture.", __FILE__, __LINE__);
	}
}
