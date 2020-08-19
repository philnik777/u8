#include "u8/exception.hpp"
#include "u8/logic_error.hpp"
#include "u8/runtime_error.hpp"
#include "u8/string_operations.hpp"

#include <iostream>

bool u8_exception_test()
{
	u8::exception e;
	u8::runtime_error r(u8::toU8String("Banane"));
	return true;
}

int main()
{
	if (!u8_exception_test())
		std::cout << "u8::exception test failed" << std::endl;
}