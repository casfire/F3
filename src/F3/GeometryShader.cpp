#include "GeometryShader.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

GeometryShader::GeometryShader(const char* source)
: Shader(GL_GEOMETRY_SHADER)
{
	compile(source);
}

GeometryShader::GeometryShader(std::istream& source)
: Shader(GL_GEOMETRY_SHADER)
{
	compile(source);
}

GeometryShader::GeometryShader(const Filename& file)
: Shader(GL_GEOMETRY_SHADER)
{
	compile(file);
}
