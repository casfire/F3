#ifndef _F3_VIEWPORT_
#define _F3_VIEWPORT_

#include "DepthTarget.hpp"
#include "RenderTarget.hpp"
#include "StencilTarget.hpp"
#include "Renderable.hpp"
#include <cstddef>
#include <cstdint>

namespace F3 {
	
	enum class DepthTest {
		ALWAYS  = 0,
		NEVER   = 1,
		LESS    = 2,
		GREATER = 3,
	};
	
	enum class CullTest {
		DISABLE = 0,
		CW      = 1,
		CCW     = 2,
	};
	
	enum class StencilTest {
		ALWAYS   = 0,
		NEVER    = 1,
		LESS     = 2,
		LEQUAL   = 3,
		EQUAL    = 4,
		NOTEQUAL = 5,
		GEQUAL   = 6,
		GREATER  = 7,
	};
	
	enum class StencilWrite {
		KEEP      = 0,
		ZERO      = 1,
		REPLACE   = 2,
		INCR      = 3,
		INCR_WRAP = 4,
		DECR      = 5,
		DECR_WRAP = 6,
		INVERT    = 7,
	};
	
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
		
		void setCullTest      (CullTest test);
		void setDepthTest     (DepthTest test);
		void setDepthClamping (bool enabled);
		void setDepthWrite    (bool enabled);
		void setStencilTest(
			StencilTest test, 
			std::uint8_t ref,
			std::uint8_t mask = 0xFF
		);
		void setStencilWrite(
			StencilWrite stencilFail,
			StencilWrite stencilPassDepthFail,
			StencilWrite stencilPassDepthPass,
			std::uint8_t mask = 0xFF
		);
		
		void clear() const;
		void render(const Viewport& from, bool smooth = true) const;
		void render(const Renderable* obj, std::size_t count) const;
		void render(const Renderable& obj) const;
		
	private:
		
		Viewport(const Viewport&) = delete;
		Viewport& operator=(const Viewport&) = delete;
		
		unsigned int ID;
		int x, y, width, height;
		unsigned int clearBits;
		
		struct state {
			bool cull, depth, stencil;
			unsigned int cullFront;
			unsigned int depthTestFunc;
			bool depthClamp, depthWrite;
			int          stencilTestRef;
			unsigned int stencilTestFunc;
			unsigned int stencilTestMask;
			unsigned int stencilWriteMask;
			unsigned int stencilWriteSfail;
			unsigned int stencilWriteDfail;
			unsigned int stencilWriteDpass;
		} state;
		
	};
	
}

#endif
