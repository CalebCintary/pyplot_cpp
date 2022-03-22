//
// Created by calebcintary on 3/16/22.
//

#include "pyplot_cpp/python/DynamicScriptRunner.hpp"

#include <pthread.h>

void pyplot_cpp::python::DynamicScriptRunner::Run(bool async) {
    std::ofstream out;
    std::string fileName =
            "pyplot_cpp_tmp_" +
            std::to_string(std::chrono::high_resolution_clock::now().time_since_epoch().count()) +
            ".py";
//    out.open("python_file.py");
    out.open(fileName);

    out << script->getCode();
    out.close();

    if (async) {
        pthread_t thread;
        pthread_create(&thread, nullptr, PythonRunner_Threads_Start, &fileName);
    } else {
        PythonRunner_Threads_Start(&fileName);
    }

    remove(fileName.c_str());
}

pyplot_cpp::python::DynamicScriptRunner::DynamicScriptRunner(PythonScript *script) : PythonRunner(script){

}
