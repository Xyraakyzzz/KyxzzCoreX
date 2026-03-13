cmake_minimum_required(VERSION 3.10)
project(xyra_core)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRC
    core/*.cpp
    network/*.cpp
    crypto/*.cpp
    utils/*.cpp
    cli/*.cpp
)

add_executable(xyra ${SRC})
