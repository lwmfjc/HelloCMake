cmake_minimum_required(VERSION 3.20)

project(OpenCVTest)

find_package(OpenCV REQUIRED)

message(STATUS "OpenCV_LIBS = ${OpenCV_LIBS}")

add_executable(
	opencv_test
	main.cpp
)

target_link_libraries(
	opencv_test
	PRIVATE
	OpenCV::opencv_core
)
