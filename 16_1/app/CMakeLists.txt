add_executable(
	robot_app
	main.cpp
)

target_link_libraries(
	robot_app
	PRIVATE
	motor
	sensor
)

install(
	TARGETS robot_app
	DESTINATION bin
)
