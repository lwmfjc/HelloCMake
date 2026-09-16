add_library(
	sensor
	STATIC
	src/sensor.cpp
)

target_include_directories(
	sensor
	PUBLIC
	include
)

find_package(OpenCV REQUIRED)

target_link_libraries(
	sensor
#	PRIVATE
	PUBLIC
	${OpenCV_LIBS}
)
