SET(SOURCES
        ${CMAKE_CURRENT_LIST_DIR}/Graph/BaseGraph.cpp
        ${CMAKE_CURRENT_LIST_DIR}/BasePlot/BasePlot.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Plot/Plot.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Plot3D/BasePlot3D.cpp
        ${CMAKE_CURRENT_LIST_DIR}/plt/pyplot.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Showable.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Bar.cpp
        ${CMAKE_CURRENT_LIST_DIR}/plt/Property.cpp
        ${CMAKE_CURRENT_LIST_DIR}/plt/Color.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MultiplePlot.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Histogram.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MultipleHistogram.cpp
        ${CMAKE_CURRENT_LIST_DIR}/converter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Scatter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Axisable.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Graph.cpp
        ${CMAKE_CURRENT_LIST_DIR}/networkx.cpp
        ${CMAKE_CURRENT_LIST_DIR}/DiGraph.cpp
        ${CMAKE_CURRENT_LIST_DIR}/python/PythonRunner.cpp
        ${CMAKE_CURRENT_LIST_DIR}/python/PythonScript.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Plot3D.cpp


        ${CMAKE_CURRENT_LIST_DIR}/python/DynamicScriptRunner.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Scatter3D.cpp
        ${CMAKE_CURRENT_LIST_DIR}/WireframePlot.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TrisurfPlot.cpp
        )

IF (MSVC)
    set(SYSTEM_SOURCE
            ${CMAKE_CURRENT_LIST_DIR}/python/DynamicScriptRunner_Windows.cpp)
    message("Windows source found")
ELSEIF(UNIX)
    set(SYSTEM_SOURCE
            ${CMAKE_CURRENT_LIST_DIR}/python/DynamicScriptRunner_Unix.cpp)
    message("Unix source found")
ELSE()
    message("System source not defined")
ENDIF()

add_library(pyplot_cpp STATIC
        ${SOURCES}
        ${SYSTEM_SOURCE}
        ${INCLUDE_SOURCE})

target_include_directories(pyplot_cpp PRIVATE ../include)

install(TARGETS pyplot_cpp
        DESTINATION lib/pyplot_cpp)

install(TARGETS pyplot_cpp EXPORT pyplot_cppConfig)
install(EXPORT pyplot_cppConfig NAMESPACE PyPlot:: DESTINATION share/pyplot_cpp/cmake)

include(CMakePackageConfigHelpers)
write_basic_package_version_file("${PROJECT_BINARY_DIR}/pyplot_cppConfigVersion.cmake"
        VERSION
            ${PROJECT_VERSION}
        COMPATIBILITY
            AnyNewerVersion
        )
install(FILES "${PROJECT_BINARY_DIR}/pyplot_cppConfigVersion.cmake" DESTINATION share/pyplot_cpp/cmake)