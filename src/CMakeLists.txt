add_library(pyplot_cpp STATIC
        empty.cpp
        graph/graph.cpp
        ../include/graph.h)

target_include_directories(pyplot_cpp PRIVATE ../include)