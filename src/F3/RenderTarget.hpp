#ifndef _F3_RENDERTARGET_
#define _F3_RENDERTARGET_

namespace F3 {
	
	class RenderTarget {
	public:
		
		virtual ~RenderTarget();
		
	private:
		
		friend class RenderTexture;
		friend class RenderWindow;
		friend class Viewport;
		
		RenderTarget(const RenderTarget&) = delete;
		RenderTarget& operator=(const RenderTarget&) = delete;
		RenderTarget(unsigned int ID);
		
		unsigned int ID;
		
	};
	
}

#endif
