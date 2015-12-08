#ifndef _F3_VERTEXSHADER_
#define _F3_VERTEXSHADER_

#include "Shader.hpp"
#include "Filename.hpp"
#include <istream>

namespace F3 {
	
	class VertexShader : public Shader {
	public:
		
		VertexShader(const char* source);
		VertexShader(std::istream& source);
		VertexShader(const Filename& file);
		
	};
	
}

#endif
