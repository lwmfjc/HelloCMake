cmake_minimum_required(VERSION 3.10)

project(hello)

option(
	ENABLE_DEBUG
	"enable debug"
	OFF
)

add_executable(
	robot
	main.cpp
)

target_compile_options(
	robot
	PRIVATE
	-Wall
)

if(ENABLE_DEBUG)
	target_compile_definitions(
		robot
		PRIVATE
		DEBUG_MODE
	)
endif()	
