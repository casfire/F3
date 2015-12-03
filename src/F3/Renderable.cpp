#include "Renderable.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

Renderable::Renderable(
	unsigned int PID
)
: VAO(0)
, PID(PID)
, samplers(0)
, uniforms(0)
{
	glGenVertexArrays(1, &VAO);
	if (VAO <= 0) {
		throw Error("Failed to generate vertex array.", __FILE__, __LINE__);
	}
}

Renderable::~Renderable()
{
	glDeleteVertexArrays(1, &VAO);
}
