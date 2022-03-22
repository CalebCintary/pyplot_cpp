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
                                  const std::map<std::string, Property>& args) {
    return "plt.plot(" + x + ", " + y + parseArguments(args) + ")";
}

std::string pyplot_cpp::plt::ylabel(const std::string &ylabel) {
    return "plt.ylabel(\"" + ylabel + "\")";
}

std::string pyplot_cpp::plt::title(const std::string &title) {
    return "plt.title(\"" + title + "\")";
}

std::string pyplot_cpp::plt::plot(const std::vector<double> &x, std::vector<double> &y,
                                  const std::map<std::string, Property> &args) {
    return plot(
            pyplot_cpp::converter::vectorToPythonArray(x),
            pyplot_cpp::converter::vectorToPythonArray(y),
            args
            );
}

std::string pyplot_cpp::plt::tight_layout() {
    return "plt.tight_layout()";
}

std::string pyplot_cpp::plt::bar(const std::string &x,
                                 const std::string &y,
                                 const std::map<std::string, Property>& args) {
    return "plt.bar(" + x + ", " + y + parseArguments(args) + ")";
}

std::string pyplot_cpp::plt::show() {
    return "plt.show()";
}

std::string pyplot_cpp::plt::savefig(const std::string& path) {
    return "plt.savefig(\"" + path + "\")";
}

std::string pyplot_cpp::plt::legend(std::string legend_array) {
    return "plt.legend(" + legend_array + ")";
}

std::string pyplot_cpp::plt::hist(const std::string &x, const std::map<std::string, Property> &args) {
    return "plt.hist(" + x + parseArguments(args) + ")";
}

std::string  pyplot_cpp::plt::scatter(const std::string &x, const std::string &y,
                                      const std::map<std::string, Property> &args) {
    return "plt.scatter(" + x + ", " + y + parseArguments(args) + ")";
}