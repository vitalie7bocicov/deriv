
cmake_minimum_required(VERSION 3.22)
project(deriv)

set(CMAKE_CXX_STANDARD 20)

add_executable(deriv main.cpp transformations/InfixToPostfix.cpp transformations/InfixToPostfix.h utils/Node.cpp utils/Node.h transformations/PostfixToBinaryTree.cpp transformations/PostfixToBinaryTree.h utils/Stack.cpp utils/Stack.h utils/ExpUtils.cpp utils/ExpUtils.h)
