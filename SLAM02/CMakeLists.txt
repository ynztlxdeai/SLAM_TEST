#声明要求的cmake最低版本
cmake_minimum_required(VERSION 3.6)

#声明一个cmake工程
project(first)

#添加一个可执行程序
#语法 add_executable(程序名字 源代码文件)
add_executable(sss  hello_slam.cpp)
