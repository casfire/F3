#include "DepthTarget.hpp"

using namespace F3;

DepthTarget::DepthTarget(
	unsigned int ID,
	std::size_t width,
	std::size_t height
)
: ID(ID)
, width(width)
, height(height)
{}

DepthTarget::~DepthTarget()
{}

std::size_t DepthTarget::getWidth() const
{
	return width;
}

std::size_t DepthTarget::getHeight() const
{
	return height;
}
