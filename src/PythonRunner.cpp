#include "pyplot_cpp/PythonRunner.hpp"

pyplot_cpp::python::PythonRunner::PythonRunner(PythonScript* script) {
    this->script = script;
}

pyplot_cpp::python::PythonRunner::~PythonRunner() {
    
}

void pyplot_cpp::python::PythonRunner::Run(bool async) {
    
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
