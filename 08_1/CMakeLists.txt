cmake_minimum_required(VERSION 3.20)

project(Robot)

add_library(
	motor
	motor.cpp
)

add_executable(
	robot
	main.cpp
)

target_link_libraries(
	robot
	motor
)
