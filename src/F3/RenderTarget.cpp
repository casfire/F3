#include "RenderTarget.hpp"

using namespace F3;

RenderTarget::RenderTarget(
	unsigned int ID,
	std::size_t width,
	std::size_t height,
	std::size_t channels
)
: ID(ID)
, width(width)
, height(height)
, channels(channels)
{}

RenderTarget::~RenderTarget()
{}

std::size_t RenderTarget::getWidth() const
{
	return width;
}

std::size_t RenderTarget::getHeight() const
{
	return height;
}

std::size_t RenderTarget::getChannels() const
{
	return channels;
}
