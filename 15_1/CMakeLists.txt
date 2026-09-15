cmake_minimum_required(VERSION 3.10)

message("Build type=${CMAKE_BUILD_TYPE}")

project(hello)

add_executable(
	robot
	main.cpp
)

target_compile_options(
	robot
	PRIVATE
)

