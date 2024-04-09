cmake_minimum_required(VERSION 3.27)
project(cgo CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)

option(BUILD_SHARED_LIBS OFF)
option(BUILD_BOTH_LIBS OFF)
add_subdirectory(external/geographiclib)

add_library(${PROJECT_NAME} SHARED wrapper.cpp)
target_link_libraries(${PROJECT_NAME} GeographicLib)

# C test
add_executable(test_c test/tesc_c.c)
target_link_libraries(test_c ${PROJECT_NAME})

# CPP test
add_executable(test_cpp test/test_cpp.cpp)
target_link_libraries(test_cpp GeographicLib)
