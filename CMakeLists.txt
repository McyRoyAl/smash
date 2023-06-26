cmake_minimum_required(VERSION 3.22)
project(smash2_1)

set(CMAKE_CXX_STANDARD 11)

add_executable(smash2_1 commands.cpp commands.h smash.cpp signals.h signals.cpp utils.cpp)
