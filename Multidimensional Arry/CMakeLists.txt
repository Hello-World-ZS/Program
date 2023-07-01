cmake_minimum_required(VERSION 3.0.0)
project(Multidemnsional Arry VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Multidemnsional Arry main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
