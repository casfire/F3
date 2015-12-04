#ifndef _F3_VIEWPORT_
#define _F3_VIEWPORT_

#include "DepthTarget.hpp"
#include "RenderTarget.hpp"
#include "StencilTarget.hpp"
#include "Renderable.hpp"
#include <cstddef>
#include <cstdint>

namespace F3 {
	
	class Viewport {
	public:
		
		Viewport(
			std::size_t width,
			std::size_t height,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		Viewport(
			const RenderTarget& target,
			std::size_t width = 0,
			std::size_t height = 0,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		Viewport(
			const StencilTarget& stencil,
			std::size_t width = 0,
			std::size_t height = 0,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		Viewport(
			const StencilTarget& stencil,
			const RenderTarget& target,
			std::size_t width = 0,
			std::size_t height = 0,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		Viewport(
			const DepthTarget& depth,
			std::size_t width = 0,
			std::size_t height = 0,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		Viewport(
			const DepthTarget& depth,
			const RenderTarget& target,
			std::size_t width = 0,
			std::size_t height = 0,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		Viewport(
			const DepthTarget& depth,
			const StencilTarget& stencil,
			std::size_t width = 0,
			std::size_t height = 0,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		Viewport(
			const DepthTarget& depth,
			const StencilTarget& stencil,
			const RenderTarget& target,
			std::size_t width = 0,
			std::size_t height = 0,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		~Viewport();
		
		void resize(
			std::size_t width,
			std::size_t height,
			std::size_t x = 0,
			std::size_t y = 0
		);
		
		void clear() const;
		void render(const Viewport& from, bool smooth = true) const;
		void render(const Renderable& obj) const;
		
	private:
		
		Viewport(const Viewport&) = delete;
		Viewport& operator=(const Viewport&) = delete;
		
		unsigned int ID;
		int x, y, width, height;
		unsigned int clearBits;
		
	};
	
}

#endif
