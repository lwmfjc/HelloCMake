cmake_minimum_required(VERSION 3.20)

project(OpenCVTest)

find_package(OpenCV REQUIRED)

#显示变量表示的所有依赖名
#message(STATUS "OpenCV_LIBS = ${OpenCV_LIBS}")

add_executable(
	opencv_test
	main.cpp
)

target_link_libraries(
	opencv_test
	PRIVATE
	opencv_core
#	${OpenCV_LIBS}
#	${OpenCV_LIBRARIES}
)
