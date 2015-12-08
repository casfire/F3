#include "FragmentShader.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

FragmentShader::FragmentShader(const char* source)
: Shader(GL_FRAGMENT_SHADER)
{
	compile(source);
}

FragmentShader::FragmentShader(std::istream& source)
: Shader(GL_FRAGMENT_SHADER)
{
	compile(source);
}

FragmentShader::FragmentShader(const Filename& file)
: Shader(GL_FRAGMENT_SHADER)
{
	compile(file);
}

