#ifndef _F3_DEPTHTARGET_
#define _F3_DEPTHTARGET_

namespace F3 {
	
	class DepthTarget {
	public:
		
		virtual ~DepthTarget();
		
	private:
		
		friend class DepthTexture;
		
		DepthTarget(const DepthTarget&) = delete;
		DepthTarget& operator=(const DepthTarget&) = delete;
		DepthTarget(unsigned int ID);
		
		unsigned int ID;
		
	};
	
}

#endif
