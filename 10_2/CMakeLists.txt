cmake_minimum_required(VERSION 3.10)

project(RobotProject)

add_executable(robot
	src/main.cpp
	src/robot.cpp
)

option(BUILD_DEMO "Build demo program" ON)

if(BUILD_DEMO)
	add_executable(demo
		examples/demo.cpp
	)
endif()
