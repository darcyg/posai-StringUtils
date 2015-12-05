cmake_minimum_required(VERSION 3.3)
project(posai_StringUtils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB SU stringutils/*.h stringutils/*.cpp)

set(SOURCE_FILES ${SU})

add_library(posai_StringUtils SHARED ${SOURCE_FILES})

add_executable(ptest main.cpp)
target_link_libraries(ptest posai_StringUtils)