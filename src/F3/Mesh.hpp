#ifndef _F3_MESH_
#define _F3_MESH_

#include <cstddef>
#include "Attribute.hpp"
#include "IndexBuffer.hpp"

namespace F3 {
	
	enum class MeshType {
		POINTS,
		LINES, LINE_STRIP, LINE_LOOP,
		TRIANGLES, TRIANGLE_STRIP, TRIANGLE_FAN,
		QUADS, QUAD_STRIP
	};
	
	struct Mesh {
		
		const Attribute position;
		const IndexBuffer* const indices;
		const std::size_t start, count;
		const MeshType type;
		
		Mesh(
			const Attribute& position,
			std::size_t start, std::size_t count,
			MeshType type = MeshType::TRIANGLES
		);
		
		Mesh(
			const Attribute& position,
			const IndexBuffer& indices,
			std::size_t start, std::size_t count,
			MeshType type = MeshType::TRIANGLES
		);
		
		Mesh(
			const Attribute& position,
			MeshType type = MeshType::TRIANGLES
		);
		
		Mesh(
			const Attribute& position,
			const IndexBuffer& indices,
			MeshType type = MeshType::TRIANGLES
		);
		
	};
	
}

#endif // _F3_MESH_
