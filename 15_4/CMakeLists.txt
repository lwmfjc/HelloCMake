cmake_minimum_required(VERSION 3.20)

project(Robot)

add_library(
	motor
	SHARED
	motor.cpp
)

target_include_directories(
	motor
	PUBLIC
	include
)

install(
	TARGETS
	motor

	LIBRARY DESTINATION lib
)

install(
	DIRECTORY
	include/

	DESTINATION
	include
)
