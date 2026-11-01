cmake_minimum_required(VERSION 3.10.0)
project(02_Day2 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(02_Day2 main.cpp)

set_target_properties(02_Day2 PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)