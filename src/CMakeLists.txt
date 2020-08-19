project(__u8_src)
set(U8_SUBPROJECTS
	${U8_SUBPROJECTS}
	__u8_src
	PARENT_SCOPE
)

add_library(
	__u8_src
	string_operations.cpp
)

target_include_directories(__u8_src PRIVATE ../include/)
