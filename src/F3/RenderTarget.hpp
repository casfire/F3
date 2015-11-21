#ifndef _F3_RENDERTARGET_
#define _F3_RENDERTARGET_

namespace F3 {
	
	class RenderTarget {
	private:
		
		friend class RenderTexture;
		
		RenderTarget(const RenderTarget&) = delete;
		RenderTarget& operator=(const RenderTarget&) = delete;
		RenderTarget(unsigned int ID);
		
		unsigned int ID;
		
	};
	
}

#endif
