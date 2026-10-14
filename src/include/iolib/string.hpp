// Copyright (c) 2026 atosbnt
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

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

