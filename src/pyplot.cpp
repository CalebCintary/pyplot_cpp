//
// Created by calebcintary on 3/15/22.
//

#include "pyplot_cpp/plt/pyplot.hpp"

std::string pyplot_cpp::plt::import() {
    return "import matplotlib.pyplot as plt\n";
}

std::string pyplot_cpp::plt::xlabel(const std::string &xlabel) {
    return "plt.xlabel(\"" + xlabel + "\")";
}

std::string pyplot_cpp::plt::plot(const std::string &x,
                                  const std::string &y,
                                  const std::vector<Argument>& args) { // TODO: Add argument parser here
    return "plt.plot(" + x + ", " + y + ")";
}

std::string pyplot_cpp::plt::ylabel(const std::string &ylabel) {
    return "plt.ylabel(\"" + ylabel + "\")";
}

std::string pyplot_cpp::plt::title(const std::string &title) {
    return "plt.title(\"" + title + "\")";
}

std::string pyplot_cpp::plt::plot(const std::vector<double> &x,
                                  const std::vector<double> &y,
                                  const std::vector<Argument>& args) { // TODO: Add argument parser here
    return plot(
            pyplot_cpp::converter::vectorToPythonArray(x),
            pyplot_cpp::converter::vectorToPythonArray(y)
            );
}

std::string tight_layout() {
    return "plt.tight_layout()";
}

std::string pyplot_cpp::plt::bar(const std::string &x,
                                 const std::string &y,
                                 const std::vector<Argument>& args) {

}