cmake_minimum_required(VERSION 3.20)


project(Robot)


add_executable(
    robot
    main.cpp
)

#调用 install() 命令，把名为 robot 的 target 纳入安装规则。
install(      #→ 命令名
TARGETS robot  #TARGETS→ install 的一个选项/关键字，robot→ 要安装的 target 名称
#DESTINATION bin #可以省略，如果没有指定 DESTINATION，CMake 会根据平台和安装类型使用默认的 GNUInstallDirs 相关目录
)
