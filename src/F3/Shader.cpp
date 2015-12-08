#include "Shader.hpp"
#include "Exception.hpp"
#include "opengl.hpp"
#include <vector>
#include <cstddef>
#include <fstream>

using namespace F3;
using namespace GL;

Shader::Shader(unsigned int type)
: ID(glCreateShader(type))
{
	if (ID <= 0) {
		throw Error("Failed to generate shader.", __FILE__, __LINE__);
	}
}

Shader::~Shader()
{
	glDeleteShader(ID);
}

std::string Shader::getInfoLog() const
{
	GLint size = 0;
	glGetShaderiv(ID, GL_INFO_LOG_LENGTH, &size);
	if (size <= 0) return std::string();
	std::string log(size - 1, '\0');
	glGetShaderInfoLog(ID, size, nullptr, &log[0]);
	return log;
}

std::string Shader::getSource() const
{
	GLint size = 0;
	glGetShaderiv(ID, GL_SHADER_SOURCE_LENGTH, &size);
	if (size <= 0) return std::string();
	std::string log(size - 1, '\0');
	glGetShaderInfoLog(ID, size, nullptr, &log[0]);
	return log;
}

inline bool isCompiled(GLuint ID) {
	GLint status = GL_FALSE;
	glGetShaderiv(ID, GL_COMPILE_STATUS, &status);
	return status == GL_TRUE;
}

void Shader::compile(const char* source)
{
	glShaderSource(ID, 1, &source, nullptr);
	glCompileShader(ID);
	if (!isCompiled(ID)) throw Exception(getInfoLog());
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to compile shader.", __FILE__, __LINE__);
	}
}

void Shader::compile(std::istream& stream)
{
	std::streamsize start = stream.tellg();
	stream.seekg(0, std::ios_base::end);
	std::streamsize size = stream.tellg() - start;
	stream.seekg(start);
	std::vector<char> source(static_cast<std::size_t>(size + 1));
	stream.read(source.data(), size);
	if (!stream.good()) {
		throw IOException(
			"Failed to read " + std::to_string(size) + " bytes."
		);
	}
	source[size] = '\0';
	const char* src = source.data();
	glShaderSource(ID, 1, &src, nullptr);
	glCompileShader(ID);
	if (!isCompiled(ID)) throw Exception(getInfoLog());
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to compile shader.", __FILE__, __LINE__);
	}
}

void Shader::compile(const Filename& file)
{
	std::ifstream stream(file.name, std::ios::binary);
	stream.seekg(0, std::ios_base::end);
	std::streamsize size = stream.tellg();
	stream.seekg(0, std::ios_base::beg);
	std::vector<char> source(static_cast<std::size_t>(size + 1));
	stream.read(source.data(), size);
	source[size] = '\0';
	if (!stream.good()) throw IOException("Failed to read " + file.name);
	stream.close();
	const char* src = source.data();
	glShaderSource(ID, 1, &src, nullptr);
	glCompileShader(ID);
	if (!isCompiled(ID)) throw Exception(file.name + "\n" + getInfoLog());
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to compile shader.", __FILE__, __LINE__);
	}
}
