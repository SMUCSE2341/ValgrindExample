cmake_minimum_required(VERSION 3.1)
project(20f-valgrind-example)
set(EXE_NAME valgrindtester)


set (CMAKE_CXX_STANDARD 14)
add_executable(${EXE_NAME} tester.cpp)
