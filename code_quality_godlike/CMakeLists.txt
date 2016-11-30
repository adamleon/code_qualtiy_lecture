project(code_quality)
cmake_minimum_required(VERSION 2.8)

add_library(Calculations include/exceptions.hpp src/exceptions.cpp include/calculations.hpp src/calculations.cpp)
add_executable(code_quality_godlike code_quality_godlike.cpp)
target_link_libraries(code_quality_godlike Calculations)

