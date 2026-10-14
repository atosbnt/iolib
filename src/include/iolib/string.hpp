#pragma once

#include <string>

namespace iolib
{
	class string:
		virtual public std::string
	{
	public:
		using std::string::basic_string;
	};
}

