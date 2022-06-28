
cmake_minimum_required(VERSION 3.22)
project(deriv)

set(SFML_INCLUDE_DIR "/home/libraries/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "/home/libraries/SFML-2.5.1/lib")
set(SFML_DIR "/home/libraries/SFML-2.5.1/lib/cmake/SFML")

set(CMAKE_CXX_STANDARD 20)

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(deriv main.cpp transformations/InfixToPostfix.cpp transformations/InfixToPostfix.h utils/Node.cpp utils/Node.h transformations/PostfixToBinaryTree.cpp transformations/PostfixToBinaryTree.h utils/Stack.cpp utils/Stack.h utils/ExpUtils.cpp utils/ExpUtils.h)

target_link_libraries (deriv sfml-graphics sfml-window sfml-system)


