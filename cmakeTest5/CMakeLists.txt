#对cmake的最低版本要求为3.20，低了会报错
cmake_minimum_required(VERSION 3.20)
#项目名叫Hello,执行后自动产生变量PROJECT_NAME,值为Hello
#注意，只有一个executable的时候，这里Hello和hello建议保持一致(不一致也没什么大问题)
project(Hello) 
#生成一个可执行程序，名字为hello，源码是main.cpp
add_executable(
	hello
	main.cpp
)
