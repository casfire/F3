#include "TextureTarget.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

TextureTarget::TextureTarget(
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

TextureTarget::~TextureTarget()
{
	glDeleteTextures(1, &ID);
}

std::size_t TextureTarget::getWidth() const
{
	return width;
}

std::size_t TextureTarget::getHeight() const
{
	return height;
}

std::size_t TextureTarget::getChannels() const
{
	return channels;
}
