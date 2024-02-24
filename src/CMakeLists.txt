cmake_minimum_required(VERSION 3.5)

project(R-FORTH)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_C_STANDARD 11)


file(GLOB SOURCES "src/*.c")


include_directories(src)


add_executable(r-forth ${SOURCES})
