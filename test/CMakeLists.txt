cmake_minimum_required(VERSION 3.10)
project(u8_test VERSION 0.1)

add_executable(u8_test
	exception_test.cpp
)

target_include_directories(u8_test PRIVATE ../include)
