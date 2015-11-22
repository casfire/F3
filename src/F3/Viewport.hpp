#ifndef _F3_VIEWPORT_
#define _F3_VIEWPORT_

#include "DepthTarget.hpp"
#include "RenderTarget.hpp"
#include <cstddef>

namespace F3 {
	
	class Viewport {
	public:
		
		Viewport(
			const DepthTarget& depth,
			const RenderTarget& target,
			std::size_t x,
			std::size_t y,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			const RenderTarget& target,
			std::size_t x,
			std::size_t y,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			const DepthTarget& depth,
			std::size_t x,
			std::size_t y,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			const DepthTarget& depth,
			const RenderTarget& target,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			const RenderTarget& target,
			std::size_t width,
			std::size_t height
		);
		
		Viewport(
			const DepthTarget& depth,
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
		
		void resize(
			std::size_t x,
			std::size_t y,
			std::size_t width,
			std::size_t height
		);
		
		void resize(
			std::size_t width,
			std::size_t height
		);
		
		void clear() const;
		void render(const Viewport& from, bool smooth = true) const;
		
	private:
		
		Viewport(const Viewport&) = delete;
		Viewport& operator=(const Viewport&) = delete;
		
		unsigned int ID;
		int x, y, width, height;
		unsigned int clearBits;
		
	};
	
}

#endif
