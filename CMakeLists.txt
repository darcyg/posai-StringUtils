cmake_minimum_required(VERSION 3.3)
project(posai_StringUtils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s -std=c++14 -O3")

file(GLOB SU inc/*.h src/*.cpp)

set(SOURCE_FILES ${SU})

include_directories(inc)
include_directories(src)

add_library(posai_StringUtils SHARED ${SOURCE_FILES})

add_executable(ptest test/test.cpp)
target_link_libraries(ptest posai_StringUtils)