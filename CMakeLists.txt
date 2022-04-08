cmake_minimum_required(VERSION 3.0.0)

project(SampleProject VERSION 1.0.0)

include_directories(include)

set(INCLUDE_DIR
    include/Sample.hpp)
set(SOURCE_DIR
    src/Sample.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} 
    ${INCLUDE_DIR}
    ${SOURCE_DIR}
    main.cpp)