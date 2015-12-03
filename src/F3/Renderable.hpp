#ifndef _F3_RENDERABLE_
#define _F3_RENDERABLE_

#include <cstddef>

namespace F3 {
	
	class Renderable {
	public:
		
		~Renderable();
		
	private:
		
		friend class Viewport;
		
		Renderable(const Renderable&) = delete;
		Renderable& operator=(const Renderable&) = delete;
		Renderable(unsigned int PID);
		
		unsigned int VAO, PID;
		bool indices;
		union {
			struct {
				unsigned int mode;
				int count;
				unsigned int type;
				const void* indices;
			} elements;
			struct {
				unsigned int mode;
				int first;
				int count;
			} arrays;
		};
		
		enum class uni {
			FLT1, FLT2, FLT3, FLT4,
			INT1, INT2, INT3, INT4,
			UNT1, UNT2, UNT3, UNT4,
			MAT2, MAT3, MAT4,
		};
		
		struct uniform {
			uni uni;
			int loc;
			int count;
			bool update;
			const void* value;
		};
		
		struct sampler {
			unsigned int unit;
			unsigned int tex;
			unsigned int sam;
		};
		
		std::size_t samplers;
		sampler* sampler;
		
		std::size_t uniforms;
		uniform* uniform;
		
	};
	
}

#endif
