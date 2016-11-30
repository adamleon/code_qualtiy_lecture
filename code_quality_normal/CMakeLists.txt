project(code_quality)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

add_executable(code_quality_normal code_quality_normal.cpp)

