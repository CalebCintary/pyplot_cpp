#include "pyplot_cpp/PythonRunner.hpp"

pyplot_cpp::python::PythonRunner::PythonRunner(PythonScript* script) {
    this->script = script;
}

pyplot_cpp::python::PythonRunner::~PythonRunner() {
    
}

void pyplot_cpp::python::PythonRunner::Run() {
    
    std::ofstream out;
//    std::string fileName =
//            "pyplot_cpp_tmp_" +
//            std::to_string(std::chrono::high_resolution_clock::now().time_since_epoch().count()) +
//            ".py";
    out.open("python_file.py");
//    out.open(fileName);
    
    out << script->getCode();
    out.close();

    system("python ./python_file.py");
}
