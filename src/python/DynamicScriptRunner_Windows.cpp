//
// Created by calebcintary on 3/26/22.
//

#include "pyplot_cpp/python/DynamicScriptRunner.hpp"

#include <Windows.h>

DWORD WINAPI thread(LPVOID param) {
    PythonRunner_Threads_Start(param);
    return 0;
}


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
        DWORD threadId;
        HANDLE handle = CreateThread(NULL, NULL, thread, &fileName, 0, &threadId);
    } else {
        PythonRunner_Threads_Start(&fileName);
    }

    remove(fileName.c_str());
}

