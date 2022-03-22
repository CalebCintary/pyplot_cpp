#include "pyplot_cpp/BasePlot.hpp"

#include <utility>
#include "pyplot_cpp/plt/pyplot.hpp"

pyplot_cpp::BasePlot::BasePlot() {
    script.addLine(plt::import());
}

void pyplot_cpp::BasePlot::addPoint(std::pair<double, double> _p) {
    x.push_back(_p.first);
    y.push_back(_p.second);
}

void pyplot_cpp::BasePlot::addPoint(double _x, double _y) {
    x.push_back(_x);
    y.push_back(_y);
}

void pyplot_cpp::BasePlot::setData(std::vector<double> _x, std::vector<double> _y) {
    if (_x.size() != _y.size()) {
        throw std::runtime_error("Vectors have non-equal size!");
    }
    x = std::move(_x);
    y = std::move(_y);
}

void pyplot_cpp::BasePlot::appendData(std::vector<double> _x, std::vector<double> _y) {
    if (_x.size() != _y.size()) {
        throw std::runtime_error("Vectors have non-equal size!");
    }
    for (const auto &item : _x) {
        x.push_back(item);
    }
    for (const auto &item : _y) {
       y.push_back(item);
    }
}

void pyplot_cpp::BasePlot::setColor(pyplot_cpp::plt::Color color) {
    addProperty(color);
}

void pyplot_cpp::BasePlot::addProperty(const pyplot_cpp::plt::Property &argument) {
    args[argument.getName()] = argument;
}

const std::vector<double> &pyplot_cpp::BasePlot::getX() const {
    return x;
}

const std::vector<double> &pyplot_cpp::BasePlot::getY() const {
    return y;
}

const std::map<std::string, pyplot_cpp::plt::Property> &pyplot_cpp::BasePlot::getArgs() const {
    return args;
}

void pyplot_cpp::BasePlot::dynamicScript_PostConfiguration() {
    if (!xlabel.empty()) {
        script.addLine(plt::xlabel(xlabel));
    }
    if (!ylabel.empty()) {
        script.addLine(plt::ylabel(ylabel));
    }
    if (!title.empty()) {
        script.addLine(plt::title(title));
    }
}

void pyplot_cpp::BasePlot::dynamicScript_Import() {

}



