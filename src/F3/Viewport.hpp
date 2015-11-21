#ifndef _F3_VIEWPORT_
#define _F3_VIEWPORT_

#include "DepthTarget.hpp"
#include "RenderTarget.hpp"
#include <cstddef>

namespace F3 {
	
	class Viewport {
	public:
		
		Viewport(
			DepthTarget& depth,
			RenderTarget& target,
			std::size_t x,
			std::size_t y,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			RenderTarget& target,
			std::size_t x,
			std::size_t y,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			DepthTarget& depth,
			RenderTarget& target,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			RenderTarget& target,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			std::size_t x,
			std::size_t y,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			std::size_t width,
			std::size_t height
		);
		
		~Viewport();
		
		void clear() const;
		
	private:
		
		Viewport(const Viewport&) = delete;
		Viewport& operator=(const Viewport&) = delete;
		
		unsigned int ID;
		int x, y, width, height;
		int clearBits;
		
	};
	
}

#endif
