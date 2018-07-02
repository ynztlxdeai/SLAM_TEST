cmake_minimum_required(VERSION 3.6)

add_library(hello_lib SHARED lib_hello.cpp)

add_executable(hello hello.cpp)
target_link_libraries(hello hello_lib)
