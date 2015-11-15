#include "Mesh.hpp"
#include "Exception.hpp"

using namespace F3;

Mesh::Mesh(
	const Attribute& position,
	std::size_t start, std::size_t count,
	MeshType type
) : position(position), indices(nullptr),
	start(start), count(count), type(type)
{
	if (count + start > position.buffer.getVertexCount()) {
		throw Error("Invalid mesh range.", __FILE__, __LINE__);
	}
}

Mesh::Mesh(
	const Attribute& position,
	const IndexBuffer& indices,
	std::size_t start, std::size_t count,
	MeshType type
) : position(position), indices(&indices),
	start(start), count(count), type(type)
{
	if (count + start > indices.getCount()) {
		throw Error("Invalid mesh range.", __FILE__, __LINE__);
	}
}

Mesh::Mesh(
	const Attribute& position,
	MeshType type
) : position(position), indices(nullptr),
	start(0), count(position.buffer.getVertexCount()), type(type)
{
	if (count + start > position.buffer.getVertexCount()) {
		throw Error("Invalid mesh range.", __FILE__, __LINE__);
	}
}

Mesh::Mesh(
	const Attribute& position,
	const IndexBuffer& indices,
	MeshType type
) : position(position), indices(&indices),
	start(0), count(indices.getCount()), type(type)
{
	if (count + start > indices.getCount()) {
		throw Error("Invalid mesh range.", __FILE__, __LINE__);
	}
}
