//
// Created by calebcintary on 3/16/22.
//

#include "pyplot_cpp/PythonRunner.hpp"

void* PythonRunner_Threads_Start(void* value) {
    system(std::string("python ./" + *((std::string*)value)).c_str());
}