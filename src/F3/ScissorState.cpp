#include "ScissorState.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

ScissorState::ScissorState(
	std::size_t width,
	std::size_t height,
	std::size_t x,
	std::size_t y
)
: x(x)
, y(y)
, width(width)
, height(height)
{}

void ScissorState::enable() const
{
	glScissor(x, y, width, height);
}

bool ScissorState::operator==(const ScissorState& obj) const
{
	return
		x == obj.x &&
		y == obj.y &&
		width == obj.width &&
		height == obj.height;
}
