#include "Attribute.hpp"

using namespace F3;

Attribute::Attribute(
	const VertexBuffer& buffer,
	AttributeLength length,
	AttributeType type,
	std::size_t offset
)
: buffer(buffer)
, length(length)
, type(type)
, offset(offset)
{}
