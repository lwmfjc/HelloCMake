cmake_minimum_required(VERSION 3.10)

project(hello)

add_executable(
	robot
	main.cpp
)

target_compile_options(
	robot
	PRIVATE
	-Wall
)
