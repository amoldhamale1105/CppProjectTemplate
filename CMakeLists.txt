cmake_minimum_required(VERSION 3.0.0)

project(SampleProject VERSION 1.0.0)

include_directories(include)

set(INCLUDE_DIR
    include/VectorTest.hpp
    include/ListTest.hpp
    include/StackTest.hpp)
set(SOURCE_DIR
    src/VectorTest.cpp
    src/ListTest.cpp
    src/StackTest.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CUSTOM_DS_PATH /home/$ENV{USER}/Projects/CustomDataStructures)

find_path(CUSTOM_DS_INCLUDES Vector.hpp List.hpp Stack.hpp
    HINTS ${CUSTOM_DS_PATH}
    PATH_SUFFIXES include)
find_library(CUSTOM_DS_LIB CustomDataStructures 
    HINTS ${CUSTOM_DS_PATH}
    PATH_SUFFIXES lib)

add_executable(${PROJECT_NAME} 
    ${INCLUDE_DIR}
    ${SOURCE_DIR}
    main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CUSTOM_DS_INCLUDES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${CUSTOM_DS_LIB})