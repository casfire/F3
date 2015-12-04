#include "F3.hpp"
#include "opengl.hpp"
#include <string>

using namespace GL;

void F3::Initialize() {
	
	try {
		
		glLoadFunctions();
		
	} catch (std::exception& e) {
		throw Error(
			std::string("Failed to load OpenGL:\n") + e.what(),
			__FILE__, __LINE__
		);
	}
	
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to initialize OpenGL.", __FILE__, __LINE__);
	}
	
}
