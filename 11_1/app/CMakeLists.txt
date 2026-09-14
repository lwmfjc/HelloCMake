add_executable(robot)

target_sources(
	robot
	PRIVATE
	main.cpp
)

target_link_libraries(
	robot
	PRIVATE
	motor
)


