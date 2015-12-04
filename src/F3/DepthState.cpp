#include "DepthState.hpp"
#include "opengl.hpp"
#include <cstddef>

using namespace F3;
using namespace GL;

static const GLenum func[] = {
	GL_ALWAYS,
	GL_NEVER,
	GL_LESS,
	GL_LEQUAL,
	GL_EQUAL,
	GL_NOTEQUAL,
	GL_GEQUAL, 
	GL_GREATER,
};

DepthState::DepthState(
	Compare test,
	bool write,
	bool clamp
)
: test(test)
, write(write)
, clamp(clamp)
{}

void DepthState::enable() const
{
	glDepthFunc(func[static_cast<std::size_t>(test)]);
	glDepthMask(write);
	if (clamp) {
		glEnable(GL_DEPTH_CLAMP);
	} else {
		glDisable(GL_DEPTH_CLAMP);
	}
}

bool DepthState::operator==(const DepthState& obj) const
{
	return
		test == obj.test &&
		write == obj.write &&
		clamp == obj.clamp;
}
