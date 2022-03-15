add_library(pyplot_cpp STATIC
        Graph/BaseGraph.cpp
        ../include/pyplot_cpp/BaseGraph.h
        PythonRunner.cpp
        ../include/pyplot_cpp/PythonRunner.hpp PythonScript.cpp ../include/pyplot_cpp/PythonScript.hpp BasePlot/BasePlot.cpp ../include/pyplot_cpp/BasePlot.hpp ../include/pyplot_cpp/pyplot.hpp Plot/Plot.cpp ../include/pyplot_cpp/Plot.hpp Plot3D/Plot3D.cpp ../include/pyplot_cpp/Plot3D.hpp ../include/pyplot_cpp/converter.hpp pyplot.cpp PythonRunner_Unix.cpp)

target_include_directories(pyplot_cpp PRIVATE ../include)