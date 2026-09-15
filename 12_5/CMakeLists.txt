cmake_minimum_required(VERSION 3.20)

project(robot)

add_executable(robot)

target_sources(
	robot
	PRIVATE
	main.cpp
)

add_library(
	motor
	STATIC
	motor/motor.cpp
)

target_include_directories(
	motor
	PUBLIC
	motor
)

target_link_libraries(
	robot
	PRIVATE
	motor
)

add_library(
	config
	INTERFACE
)

target_include_directories(
	config
	INTERFACE
	include
)

target_link_libraries(
	robot
	PRIVATE
	config
)
