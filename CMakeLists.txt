cmake_minimum_required(VERSION 3.24)
project(FairyDown)

set(CMAKE_CXX_STANDARD 17)

add_library(FairyDown FairyDown.cpp)

target_link_libraries(FairyDown PRIVATE /home/cyber-toxo/Documents/repo/glfw/build/src/libglfw3.a)
target_include_directories(FairyDown PRIVATE /home/cyber-toxo/Documents/repo/glfw/include)