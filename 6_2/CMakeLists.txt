cmake_minimum_required(VERSION 3.20)

project(Calculator)

add_library(
    math
    math.cpp
)

add_executable(
    app
    main.cpp
)

target_link_libraries(
    app
    math
)
