cmake_minimum_required(VERSION 3.16)


project(qt_tutorial)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Dependencies)

add_subdirectory(src)

