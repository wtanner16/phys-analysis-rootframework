cmake_minimum_required(VERSION 3.10)
project(Stuff1)

set(CMAKE_CXX_STANDARD 17)
include_directories(/usr/include/root)
include_directories(/usr/include/gsl)
add_executable(Stuff1 main.cpp astro.cpp astro.h root.cpp root.h)