#include "Pipeline.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include <vector>

using namespace F3;
using namespace GL;

inline bool isLinked(GLuint ID) {
	GLint status = GL_FALSE;
	glGetProgramiv(ID, GL_LINK_STATUS, &status);
	return status == GL_TRUE;
}

Pipeline::Pipeline(
	const VertexShader& v,
	const FragmentShader& f
)
: ID(0)
{
	ID = glCreateProgram();
	if (ID <= 0) {
		throw Error("Failed to generate pipeline.", __FILE__, __LINE__);
	}
	glAttachShader(ID, v.ID);
	glAttachShader(ID, f.ID);
	glLinkProgram(ID);
	if (!isLinked(ID)) {
		glDeleteProgram(ID);
		throw Exception(getInfoLog());
	}
	glDetachShader(ID, f.ID);
	glDetachShader(ID, v.ID);
	if (glGetError() != GL_NO_ERROR) {
		glDeleteProgram(ID);
		throw Error("Failed to create pipeline.", __FILE__, __LINE__);
	}
}

Pipeline::Pipeline(
	const VertexShader& v,
	const FragmentShader& f,
	const GeometryShader& g
)
: ID(0)
{
	ID = glCreateProgram();
	if (ID <= 0) {
		throw Error("Failed to generate pipeline.", __FILE__, __LINE__);
	}
	glAttachShader(ID, v.ID);
	glAttachShader(ID, f.ID);
	glAttachShader(ID, g.ID);
	glLinkProgram(ID);
	if (!isLinked(ID)) {
		glDeleteProgram(ID);
		throw Exception(getInfoLog());
	}
	glDetachShader(ID, g.ID);
	glDetachShader(ID, f.ID);
	glDetachShader(ID, v.ID);
	if (glGetError() != GL_NO_ERROR) {
		glDeleteProgram(ID);
		throw Error("Failed to create pipeline.", __FILE__, __LINE__);
	}
}

Pipeline::~Pipeline()
{
	glDeleteProgram(ID);
}

std::string Pipeline::getInfoLog() const
{
	GLint size = 0;
	glGetProgramiv(ID, GL_INFO_LOG_LENGTH, &size);
	if (size <= 0) return std::string();
	std::vector<char> log(size);
	glGetProgramInfoLog(ID, size, nullptr, static_cast<GLchar*>(log.data()));
	return std::string(log.begin(), log.end());
}
