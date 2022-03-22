add_library(pyplot_cpp STATIC
        Graph/BaseGraph.cpp
        ../include/pyplot_cpp/BaseGraph.hpp
        python/PythonRunner.cpp
        ../include/pyplot_cpp/python/PythonRunner.hpp
        python/PythonScript.cpp
        ../include/pyplot_cpp/python/PythonScript.hpp
        BasePlot/BasePlot.cpp
        ../include/pyplot_cpp/BasePlot.hpp
        ../include/pyplot_cpp/plt/pyplot.hpp
        Plot/Plot.cpp
        ../include/pyplot_cpp/Plot.hpp
        Plot3D/Plot3D.cpp
        ../include/pyplot_cpp/Plot3D.hpp
        ../include/pyplot_cpp/converter/converter.hpp
        plt/pyplot.cpp python/PythonRunner_Unix.cpp
        DynamicScriptRunner.cpp
        ../include/pyplot_cpp/python/DynamicScriptRunner.hpp
        Showable.cpp
        ../include/pyplot_cpp/Showable.hpp
        Bar.cpp
        ../include/pyplot_cpp/Bar.hpp
        plt/Property.cpp
        ../include/pyplot_cpp/plt/Property.hpp
        ../include/pyplot_cpp/plt/Properties.hpp
        plt/Color.cpp
        ../include/pyplot_cpp/plt/properties/Color.h
        MultiplePlot.cpp
        ../include/pyplot_cpp/MultiplePlot.hpp Histogram.cpp ../include/pyplot_cpp/Histogram.hpp MultipleHistogram.cpp ../include/pyplot_cpp/MultipleHistogram.hpp converter.cpp Scatter.cpp ../include/pyplot_cpp/Scatter.hpp
        Axisable.cpp
        ../include/pyplot_cpp/Axisable.hpp Graph.cpp ../include/pyplot_cpp/Graph.hpp ../include/pyplot_cpp/networkx.h networkx.cpp)

target_include_directories(pyplot_cpp PRIVATE ../include)