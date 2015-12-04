#ifndef _F3_RENDERSTATE_
#define _F3_RENDERSTATE_

namespace F3 {
	
	class RenderState {
	public:
		
		RenderState(
			bool stencil = false,
			bool depth   = false,
			bool blend   = false,
			bool cull    = false,
			bool scissor = false
		);
		
		void enable() const;
		bool operator==(const RenderState& obj) const;
		
	private:
		
		bool stencil;
		bool depth;
		bool blend;
		bool cull;
		bool scissor;
			
	};
	
}

#endif
