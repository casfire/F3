#ifndef _F3_SHADER_
#define _F3_SHADER_

#include "Filename.hpp"
#include <istream>
#include <string>

namespace F3 {
	
	class Shader {
	public:
		
		virtual ~Shader();
		
		std::string getInfoLog() const;
		std::string getSource() const;
		
	private:
		
		friend class VertexShader;
		friend class FragmentShader;
		friend class GeometryShader;
		friend class Pipeline;
		
		Shader(const Shader&) = delete;
		Shader& operator=(const Shader&) = delete;
		Shader(unsigned int type);
		void compile(const char* source);
		void compile(std::istream& stream);
		void compile(const Filename& file);
		
		unsigned int ID;
		
	};
	
}

#endif
