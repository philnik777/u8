#pragma once

#ifndef U8_RUNTIME_ERROR_HPP
	#define U8_RUNTIME_ERROR_HPP

	#include "exception.hpp"

namespace u8
{
class runtime_error : public exception
{
  public:
	runtime_error(const std::u8string& e)
	{
		s = e;
	}
};
}

#endif
