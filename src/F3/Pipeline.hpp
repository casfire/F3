#ifndef _F3_PIPELINE_
#define _F3_PIPELINE_

#include "VertexShader.hpp"
#include "FragmentShader.hpp"
#include "GeometryShader.hpp"
#include <string>

namespace F3 {
	
	class Pipeline {
	public:
		
		Pipeline(
			const VertexShader& v,
			const FragmentShader& f
		);
		
		Pipeline(
			const VertexShader& v,
			const FragmentShader& f,
			const GeometryShader& g
		);
		
		~Pipeline();
		
		std::string getInfoLog() const;
		
	private:
		
		Pipeline(const Pipeline&) = delete;
		Pipeline& operator=(const Pipeline&) = delete;
		
		unsigned int ID;
		
	};
	
}

#endif
