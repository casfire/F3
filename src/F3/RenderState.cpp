#include "RenderState.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

RenderState::RenderState(
	bool stencil,
	bool depth,
	bool blend,
	bool cull,
	bool scissor
)
: stencil(stencil)
, depth(depth)
, blend(blend)
, cull(cull)
, scissor(scissor)
{}

void RenderState::enable() const
{
	if (stencil) glEnable(GL_STENCIL_TEST); else glDisable(GL_STENCIL_TEST);
	if (depth) glEnable(GL_DEPTH_TEST); else glDisable(GL_DEPTH_TEST);
	if (blend) glEnable(GL_BLEND); else glDisable(GL_BLEND);
	if (cull) glEnable(GL_CULL_FACE); else glDisable(GL_CULL_FACE);
	if (scissor) glEnable(GL_SCISSOR_TEST); else glDisable(GL_SCISSOR_TEST);
}

bool RenderState::operator==(const RenderState& obj) const
{
	return
		stencil == obj.stencil &&
		depth   == obj.depth   &&
		blend   == obj.blend   &&
		cull    == obj.cull    &&
		scissor == obj.scissor;
}
