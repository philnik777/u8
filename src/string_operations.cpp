#include <Windows.h>
#include <u8/string_operations.hpp>
#include <vector>

namespace u8
{
std::wstring toWString(const std::u8string& str)
{
	if (str.size() == 0)
		return std::wstring();
	std::vector<wchar_t> buf(
		MultiByteToWideChar(CP_UTF8, 0,
							reinterpret_cast<const char*>(str.data()), -1,
							nullptr, 0)
		+ 1);
	MultiByteToWideChar(CP_UTF8, 0, reinterpret_cast<const char*>(str.data()),
						-1, buf.data(), buf.size());
	return buf.data();
}
}