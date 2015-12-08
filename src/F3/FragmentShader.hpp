#ifndef _F3_FRAGMENTSHADER_
#define _F3_FRAGMENTSHADER_

#include "Shader.hpp"
#include "Filename.hpp"
#include <istream>

namespace F3 {
	
	class FragmentShader : public Shader {
	public:
		
		FragmentShader(const char* source);
		FragmentShader(std::istream& source);
		FragmentShader(const Filename& file);
		
	};
	
}

#endif
