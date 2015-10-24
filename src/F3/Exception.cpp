#include "Exception.hpp"

using namespace F3;

Exception::Exception(const char* msg)
: msg(msg)
{}

Exception::Exception(const std::string& msg)
: msg(msg)
{}

Exception::Exception(std::string&& msg)
: msg(msg)
{}

const char* Exception::what() const throw()
{
	return msg.c_str();
}

Error::Error(const char* msg, const char* file, long int line)
: Exception(
	std::string(file) + ":" + std::to_string(line) + ": " + msg
), file(file), line(line)
{}

Error::Error(const std::string& msg, const char* file, long int line)
: Exception(
	std::string(file) + ":" + std::to_string(line) + ": " + msg
), file(file), line(line)
{}

Error::Error(std::string&& msg, const char* file, long int line)
: Exception(
	std::string(file) + ":" + std::to_string(line) + ": " + msg
), file(file), line(line)
{}

IOException::IOException(const char* msg)
: Exception(msg)
{}

IOException::IOException(const std::string& msg)
: Exception(msg)
{}

IOException::IOException(std::string&& msg)
: Exception(msg)
{}
