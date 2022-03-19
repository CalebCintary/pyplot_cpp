#include "pyplot_cpp/python/PythonScript.hpp"

void pyplot_cpp::python::PythonScript::addLine(const std::string& line,
                                               const std::string& end) {
    script << line << end;
}

std::string pyplot_cpp::python::PythonScript::getCode() {
    return script.str();
}

void pyplot_cpp::python::PythonScript::addImport(const std::string &library_name) {
    script << "import " << library_name << std::endl;
}

void pyplot_cpp::python::PythonScript::addImportAs(const std::string &library_name,
                                                   const std::string &alias) {
    script << "import " << library_name << " as " << alias << std::endl;
}

void pyplot_cpp::python::PythonScript::addAssignment(const std::string &variable_name,
                                                     const std::string &value) {
    script << variable_name << " = " << value << std::endl;

}

void pyplot_cpp::python::PythonScript::addImportFrom(const std::string &library_name,
                                                     std::vector<std::string> modules) {
    script << "from " << library_name << " import ";
    for (int i = 0; i < modules.size() - 1; ++i)
        script << modules[i] << ", ";
    script << modules[modules.size() - 1] << std::endl;
}

void pyplot_cpp::python::PythonScript::addImportFrom(const std::string &library_name,
                                                     const std::string& module) {
    script << "from " << library_name << " import " << module << std::endl;
}


