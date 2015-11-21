#ifndef _F3_DEPTHTARGET_
#define _F3_DEPTHTARGET_

#include <cstddef>

namespace F3 {
	
	class DepthTarget {
	public:
		
		virtual ~DepthTarget();
		
		std::size_t getWidth() const;
		std::size_t getHeight() const;
		
	private:
		
		friend class DepthTexture;
		friend class DepthBuffer;
		friend class Viewport;
		
		DepthTarget(const DepthTarget&) = delete;
		DepthTarget& operator=(const DepthTarget&) = delete;
		DepthTarget(
			unsigned int ID,
			std::size_t width,
			std::size_t height
		);
		
		unsigned int ID;
		std::size_t width;
		std::size_t height;
		
	};
	
}

#endif
