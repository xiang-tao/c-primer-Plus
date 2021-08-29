cmake_minimum_required(VERSION 3.0)

project(CPPCLASS)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

include_directories(${PROJECT_SOURCE_DIR}/include)
message(STATUS "${PROJECT_SOURCE_DIR}")
find_package(PythonLibs 3)

add_subdirectory(src)

