#ifndef _F3_ATTRIBUTE_
#define _F3_ATTRIBUTE_

#include <cstddef>
#include "VertexBuffer.hpp"

namespace F3 {
	
	enum class AttributeLength {
		VEC1 = 1,
		VEC2 = 2,
		VEC3 = 3,
		VEC4 = 4,
	};
	
	enum class AttributeType {
		I8  = 0,
		U8  = 1,
		I16 = 2,
		U16 = 3,
		I32 = 4,
		U32 = 5,
		F16 = 6,
		F32 = 7,
		F64 = 8,
	};
	
	struct Attribute {
		
		const VertexBuffer& buffer;
		const AttributeLength length;
		const AttributeType type;
		const std::size_t offset;
		
		Attribute(
			const VertexBuffer& buffer,
			AttributeLength length,
			AttributeType type,
			std::size_t offset
		);
		
	};
	
}

#endif
