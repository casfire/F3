#include "F3.hpp"
#include "opengl.hpp"
#include <string>

using namespace GL;

void F3::Initialize() {
	try {
		
		glLoadFunctions();
		
		glDisable(GL_CULL_FACE);
		glCullFace(GL_BACK);
		glFrontFace(GL_CCW);
		
		glDisable(GL_DEPTH_TEST);
		glDepthFunc(GL_LESS);
		glDisable(GL_DEPTH_CLAMP);
		glDepthMask(GL_TRUE);
		
		glDisable(GL_STENCIL_TEST);
		glStencilFunc(GL_ALWAYS, 0, 0xFF);
		glStencilMask(0xFF);
		glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
		
	} catch (std::exception& e) {
		throw F3::Error(
			std::string("Failed to load OpenGL:\n") + e.what(),
			__FILE__, __LINE__
		);
	}
}
