cmake_minimum_required(VERSION 3.20)

project(Robot)

add_executable(robot)

target_sources(
	robot
	PRIVATE
	src/main.cpp
)

target_include_directories(
	robot
	PRIVATE
	include
)	

set(CMAKE_BUILD_TYPE Debug)
