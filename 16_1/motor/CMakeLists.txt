add_library(
	motor
	STATIC
	src/motor.cpp
)

target_include_directories(
	motor
	PUBLIC
	include
)
