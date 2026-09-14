#注意，这里没有写cmake_minimum_required(),
#也没有project()

add_library(hardware)

#libray中的实现文件一般用 PRIVATE
target_sources(
        hardware
        PRIVATE
        hardware.cpp
)

#依赖hardware的人，需要知道头文件路径
#CMAKE_CURRENT_SOURCE_DIR：当前CMakeLists.txt 
#的源码目录
target_include_directories(
        hardware
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
