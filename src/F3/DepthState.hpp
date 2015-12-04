#ifndef _F3_DEPTHSTATE_
#define _F3_DEPTHSTATE_

namespace F3 {
	
	class DepthState {
	public:
		
		enum Compare {
			ALWAYS   = 0,
			NEVER    = 1,
			LESS     = 2,
			LEQUAL   = 3,
			EQUAL    = 4,
			NOTEQUAL = 5,
			GEQUAL   = 6, 
			GREATER  = 7,
		};
		
		DepthState(
			Compare test = LESS,
			bool write = true,
			bool clamp = false
		);
		
		void enable() const;
		bool operator==(const DepthState& obj) const;
		
	private:
		
		Compare test;
		bool write, clamp;
		
	};
	
}

#endif
