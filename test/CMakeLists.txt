add_executable(python_impl_test
        main.cpp
        )

target_include_directories(python_impl_test PRIVATE ../include)
target_link_libraries(python_impl_test pyplot_cpp)