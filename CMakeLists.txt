cmake_minimum_required(VERSION 3.23)
project(Refactor)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES include/*.h src/*.cpp lib/prg1f-io/include/*.h lib/prg1f-io/src/*.cpp)

add_executable(Life ${SOURCES})
