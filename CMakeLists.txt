cmake_minimum_required(VERSION 2.8)
project(a5solution)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_executable(A5_run ${SOURCE_FILES})

include_directories(SortedListA SortedListP)

add_subdirectory(SortedListA)
add_subdirectory(SortedListP)
add_subdirectory(SortedList_tests)

target_link_libraries(A5_run SortedListA SortedListP)