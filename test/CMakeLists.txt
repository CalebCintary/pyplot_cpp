add_executable(python_impl_test
        BoostTest_ContextLoad_Test.cpp
        PythonScript_Test.cpp PythonRunner_Test.cpp Plot_Test.cpp)


find_package(Boost REQUIRED COMPONENTS filesystem system unit_test_framework )
target_link_libraries(python_impl_test
        pyplot_cpp
        Boost::unit_test_framework)


target_include_directories(python_impl_test PRIVATE
        ../include
        ${Boost_INCLUDE_DIRS})