#ifndef _F3_GEOMETRYSHADER_
#define _F3_GEOMETRYSHADER_

#include "Shader.hpp"
#include "Filename.hpp"
#include <istream>

namespace F3 {
	
	class GeometryShader : public Shader {
	public:
		
		GeometryShader(const char* source);
		GeometryShader(std::istream& source);
		GeometryShader(const Filename& file);
		
	};
	
}

#endif
