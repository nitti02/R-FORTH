cmake_minimum_required(VERSION 3.5)

project(R-FORTH)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_C_STANDARD 11)

file(GLOB SOURCES "src/*.c")

include_directories(src)

add_executable(r-forth ${SOURCES})

include_directories(${CMAKE_SOURCE_DIR}/Users/nguntaka/comp310-starter/R-FORTH/googletest/include)

target_link_libraries(r-forth ${CMAKE_SOURCE_DIR}/path/to/googletest/lib/libgtest.a ${CMAKE_SOURCE_DIR}/Users/nguntaka/comp310-starter/R-FORTH/googletest/lib/libgtest_main.a)
