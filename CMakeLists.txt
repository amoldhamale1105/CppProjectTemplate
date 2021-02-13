cmake_minimum_required(VERSION 3.0.0)

project(SampleProject VERSION 1.0.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/bin)

add_executable(sampleoutput samplecode.cpp)