#include "F3.hpp"
#include "opengl.hpp"
#include <string>

void F3::LoadFunctions() {
	try {
		GL::glLoadFunctions();
	} catch (std::exception& e) {
		throw F3::Error(
			std::string("Failed to load OpenGL:\n") + e.what(),
			__FILE__, __LINE__
		);
	}
}
