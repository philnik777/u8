#pragma once

#ifndef U8_EXCEPTION_HPP
	#define U8_EXCEPTION_HPP

	#include <string>

namespace u8
{
class exception
{
  public:
	exception() noexcept {}
	exception(const exception&) = default;
	virtual ~exception() {}

	virtual const char8_t* what() const noexcept
	{
		return s.c_str();
	}

  protected:
	std::u8string s = u8"Unknown Exception";
};
}

#endif
