cmake_minimum_required(VERSION 3.20)

set(USE_ROBOT ON123)

if(USE_ROBOT)
	message("使用机器人功能")
endif()

message("hello world\n")

project(Robot)

message("PROJECT_NAME = ${PROJECT_NAME}")

set(SRC_DIR src)
set(SOURCES 
	${SRC_DIR}/main.cpp
	${SRC_DIR}/robot.cpp
)

add_executable(${PROJECT_NAME})

target_sources(
	${PROJECT_NAME}
	PRIVATE
	${SOURCES}
)
