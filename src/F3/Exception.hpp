#ifndef _F3_EXCEPTION_
#define _F3_EXCEPTION_

#include <exception>
#include <string>

namespace F3 {
	
	class Exception : public std::exception {
	public:
		
		Exception(const char*        msg);
		Exception(const std::string& msg);
		Exception(std::string&&      msg);
		
		const char* what() const throw();
		
	private:
		
		const std::string msg;
		
	};
	
	class Error : public Exception {
	public:
		
		Error(const char*        msg, const char* file, long int line);
		Error(const std::string& msg, const char* file, long int line);
		Error(std::string&&      msg, const char* file, long int line);
		
		const char* file;
		const long int line;
		
	};
	
	class IOException : public Exception {
	public:
		
		IOException(const char*        msg);
		IOException(const std::string& msg);
		IOException(std::string&&      msg);
		
	};
	
}

#endif // _F3_EXCEPTION_
