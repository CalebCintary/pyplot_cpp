add_executable(python_impl_test
        BoostTest_ContextLoad_Test.cpp
        PythonScript_Test.cpp PythonRunner_Test.cpp Plot_Test.cpp Bar_Test.cpp MultiplePlot_Test.cpp Hist_Test.cpp MultipleHistogram_Test.cpp Scatter_Test.cpp Graph_Test.cpp DiGraph_Test.cpp LinePlot3D_Test.cpp Scatter3D_Test.cpp TrisurfPlot_Test.cpp)


find_package(Boost REQUIRED COMPONENTS filesystem system unit_test_framework )
target_link_libraries(python_impl_test
        pyplot_cpp
        Boost::unit_test_framework
        )


target_include_directories(python_impl_test PRIVATE
        ../include
        ${Boost_INCLUDE_DIRS}
        )