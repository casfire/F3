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
		INT8,  UINT8,
		INT16, UINT16,
		INT32, UINT32,
		FLOAT, DOUBLE,
		HALF_FLOAT
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
		) : buffer(buffer), length(length),
			type(type), offset(offset)
		{}
		
	};
	
}

#endif // _F3_ATTRIBUTE_
