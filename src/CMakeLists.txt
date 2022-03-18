add_library(pyplot_cpp STATIC
        Graph/BaseGraph.cpp
        ../include/pyplot_cpp/BaseGraph.hpp
        PythonRunner.cpp
        ../include/pyplot_cpp/python/PythonRunner.hpp PythonScript.cpp ../include/pyplot_cpp/python/PythonScript.hpp BasePlot/BasePlot.cpp ../include/pyplot_cpp/BasePlot.hpp ../include/pyplot_cpp/plt/pyplot.hpp Plot/Plot.cpp ../include/pyplot_cpp/Plot.hpp Plot3D/Plot3D.cpp ../include/pyplot_cpp/Plot3D.hpp ../include/pyplot_cpp/converter/converter.hpp pyplot.cpp PythonRunner_Unix.cpp DynamicScriptRunner.cpp ../include/pyplot_cpp/python/DynamicScriptRunner.hpp Showable.cpp ../include/pyplot_cpp/Showable.hpp Bar.cpp ../include/pyplot_cpp/Bar.h Argument.cpp ../include/pyplot_cpp/plt/Argument.h ../include/pyplot_cpp/plt/Arguments.h Color.cpp ../include/pyplot_cpp/plt/arguments/Color.h)

target_include_directories(pyplot_cpp PRIVATE ../include)