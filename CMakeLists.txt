#-------------------------------------------------------------------
# This file is part of the CMake build system for qt_tutorial
#-------------------------------------------------------------------

# 1.CMake 版本要求
cmake_minimum_required(VERSION 3.16)

# 2.工程配置
project(qt_tutorial)

# 3.全局选项配置
set(CMAKE_CXX_STANDARD 17)  	            # 全局C++版本

set(DIR_RESOURCE "${CMAKE_SOURCE_DIR}/resources")

# 4.包含子模块(.cmake)
set(CMAKE_MODULE_PATH 
    "${CMAKE_SOURCE_DIR}/cmake"
)

# 5.第三方包配置
include(Dependencies)

# 6.子文件夹配置
add_subdirectory(src)
