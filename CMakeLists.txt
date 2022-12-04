cmake_minimum_required(VERSION 3.0.0)

project(CDS_Test VERSION 1.0.0)

include_directories(include)

set(SOURCES
    src/VectorTest.cpp
    src/ListTest.cpp
    src/StackTest.cpp
    src/QueueTest.cpp
    src/HeapTest.cpp
    src/HashmapTest.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CUSTOM_DS_PATH /home/$ENV{USER}/Projects/CustomDataStructures)

find_path(CUSTOM_DS_INCLUDES Vector.hpp
    HINTS ${CUSTOM_DS_PATH}
    PATH_SUFFIXES include)
find_library(CUSTOM_DS_LIB CustomDataStructures 
    HINTS ${CUSTOM_DS_PATH}
    PATH_SUFFIXES lib)

add_executable(${PROJECT_NAME} 
    ${SOURCES}
    main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CUSTOM_DS_INCLUDES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${CUSTOM_DS_LIB})