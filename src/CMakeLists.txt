add_library(pyplot_cpp STATIC
        empty.cpp
        graph/Graph.cpp
        ../include/pyplot_cpp/Graph.h
        PythonRunner.cpp
        ../include/pyplot_cpp/PythonRunner.hpp PythonScript.cpp ../include/pyplot_cpp/PythonScript.hpp)

target_include_directories(pyplot_cpp PRIVATE ../include)