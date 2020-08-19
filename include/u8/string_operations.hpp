#pragma once

#include <codecvt>

#ifndef U8_STRING_OPERATIONS_HPP
	#define U8_STRING_OPERATIONS_HPP

	#include "logic_error.hpp"

namespace u8
{
namespace unsafe
{
	[[nodiscard]] inline std::u8string toU8String(const std::string& str)
	{
		return std::u8string(reinterpret_cast<const char8_t*>(str.c_str()));
	}

	[[nodiscard]] inline std::string toString(const std::u8string& str)
	{
		return std::string(reinterpret_cast<const char*>(str.c_str()));
	}
}

[[nodiscard]] inline std::u8string toU8String(const std::string& str)
{
	std::u8string buf(str.size(), 0);
	for (size_t i = 0; i < str.size(); ++i)
		if (str[i] & 0b10000000)
			throw u8::logic_error(u8"Character is non standard ASCII");
		else
			buf[i] = static_cast<char8_t>(str[i]);
	return buf;
}

// only recommended for windows
[[nodiscard]] std::wstring toWString(const std::u8string& str);
}

#endif
