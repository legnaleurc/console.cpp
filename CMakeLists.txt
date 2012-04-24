cmake_minimum_required(VERSION 2.8)
project(console)

FIND_PACKAGE(Boost REQUIRED)

ADD_DEFINITIONS(-g -Wall -ansi -Wno-deprecated -std=c++0x)

INCLUDE_DIRECTORIES("${console_SOURCE_DIR}/include" "${Boost_INCLUDE_DIRS}")

FILE(GLOB_RECURSE console_SOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "src/*.cpp")

ADD_EXECUTABLE(console ${console_SOURCES})
