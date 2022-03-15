#include "pyplot_cpp/PythonScript.hpp"

void pyplot_cpp::python::PythonScript::addLine(const std::string& line,
                                               const std::string& end) {
    script << line << end;
}

std::string pyplot_cpp::python::PythonScript::getCode() {
    return script.str();
}
