//编译器会首先在当前源文件所在目录查找，找不到的话才需要
//到编译器的头文件搜索路径中去找，所以下面CMakeLists不需要：
/*
target_include_directories
(
	motor
	PUBLIC
	motor
)
*/

#include "motor.hpp"
void Motor::run()
{

}
