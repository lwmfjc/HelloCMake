add_library(motor)

target_sources(
	motor
	PRIVATE
	motor.cpp
)

target_include_directories(
	motor
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
	motor
	PUBLIC
	hardware
)
