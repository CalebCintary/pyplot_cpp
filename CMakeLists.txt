cmake_minimum_required(VERSION 3.21)
project(pyplot_cpp VERSION 1.1.1)

set(CMAKE_CXX_STANDARD 14)

add_compile_definitions(PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)