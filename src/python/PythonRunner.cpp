#include "pyplot_cpp/python/PythonRunner.hpp"

pyplot_cpp::python::PythonRunner::PythonRunner(PythonScript* script) {
    this->script = script;
}

pyplot_cpp::python::PythonRunner::~PythonRunner() {
    
}

void* PythonRunner_Threads_Start(void* value) {
    system(std::string("python ./" + *((std::string*)value)).c_str());
    return nullptr;
}
