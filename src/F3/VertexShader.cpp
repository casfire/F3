#include "VertexShader.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

VertexShader::VertexShader(const char* source)
: Shader(GL_VERTEX_SHADER)
{
	compile(source);
}

VertexShader::VertexShader(std::istream& source)
: Shader(GL_VERTEX_SHADER)
{
	compile(source);
}

VertexShader::VertexShader(const Filename& file)
: Shader(GL_VERTEX_SHADER)
{
	compile(file);
}

