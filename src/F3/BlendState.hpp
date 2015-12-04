#ifndef _F3_BLENDSTATE_
#define _F3_BLENDSTATE_

#include <cstdint>

namespace F3 {
	
	class BlendState {
	public:
		
		enum Equation {
			ADD = 0, // + Src * SrcFactor + Dst * DstFactor
			SUB = 1, // + Src * SrcFactor - Dst * DstFactor
			REV = 2, // - Src * SrcFactor + Dst * DstFactor
			MIN = 3, // min(Src * SrcFactor, Dst * DstFactor)
			MAX = 4, // max(Src * SrcFactor, Dst * DstFactor)
		};
		
		enum Factor {
			ZERO                = 0,
			ONE                 = 1,
			SRC_COLOR           = 2,
			DST_COLOR           = 3,
			REF_COLOR           = 4,
			SRC_ALPHA           = 5,
			DST_ALPHA           = 6,
			REF_ALPHA           = 7,
			ONE_MINUS_SRC_COLOR = 8,
			ONE_MINUS_DST_COLOR = 9,
			ONE_MINUS_REF_COLOR = 10,
			ONE_MINUS_SRC_ALPHA = 11,
			ONE_MINUS_DST_ALPHA = 12,
			ONE_MINUS_REF_ALPHA = 13,
		};
		
		BlendState(
			Factor srcRGB   = ONE,
			Factor srcAlpha = ONE,
			Factor dstRGB   = ZERO,
			Factor dstAlpha = ZERO,
			Equation equationRGB   = ADD,
			Equation equationAlpha = ADD,
			std::uint8_t r = 0x00,
			std::uint8_t g = 0x00,
			std::uint8_t b = 0x00,
			std::uint8_t a = 0x00
		);
		
		BlendState(
			Factor src = ONE,
			Factor dst = ZERO,
			Equation equation = ADD,
			std::uint8_t r = 0x00,
			std::uint8_t g = 0x00,
			std::uint8_t b = 0x00,
			std::uint8_t a = 0x00
		);
		
		void enable() const;
		bool operator==(const BlendState& obj) const;
		
	private:
		
		Factor srcRGB, srcAlpha;
		Factor dstRGB, dstAlpha;
		Equation equationRGB;
		Equation equationAlpha;
		std::uint32_t color;
		
	};
	
}

#endif
