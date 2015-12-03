#include "StencilTarget.hpp"

using namespace F3;

StencilTarget::StencilTarget(
	unsigned int ID,
	std::size_t width,
	std::size_t height
)
: ID(ID)
, width(width)
, height(height)
{}

StencilTarget::~StencilTarget()
{}

std::size_t StencilTarget::getWidth() const
{
	return width;
}

std::size_t StencilTarget::getHeight() const
{
	return height;
}
