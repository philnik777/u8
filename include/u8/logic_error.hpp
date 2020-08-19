#pragma once

#ifndef U8_LOGIC_ERROR_HPP
	#define U8_LOGIC_ERROR_HPP

	#include "exception.hpp"

namespace u8
{
class logic_error : public exception
{
  public:
	logic_error(const std::u8string& e)
	{
		s = e;
	}
};
}

#endif
