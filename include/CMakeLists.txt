set(INCLUDE_SOURCE
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/BaseGraph.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/BasePlot.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Plot.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/BasePlot3D.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Showable.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Bar.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/MultiplePlot.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Histogram.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/MultipleHistogram.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Scatter.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Axisable.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Graph.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/networkx.h
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/DiGraph.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Plot3D.h
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/Scatter3D.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/WireframePlot.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/TrisurfPlot.hpp

        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/python/PythonRunner.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/python/PythonScript.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/python/DynamicScriptRunner.hpp

        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/plt/Property.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/plt/Properties.hpp
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/plt/properties/Color.h
        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/plt/pyplot.hpp

        ${CMAKE_CURRENT_LIST_DIR}/pyplot_cpp/converter/converter.hpp)

set(INCLUDE_SOURCE ${INCLUDE_SOURCE} PARENT_SCOPE)

install(DIRECTORY pyplot_cpp DESTINATION include)