#声明使用的版本
cmake_minimum_required(VERSION 3.6)

#声明Cmake工程
project(use_eigen_project)

#添加可执行程序
add_executable(use_eigen eigen_matrix.cpp)
