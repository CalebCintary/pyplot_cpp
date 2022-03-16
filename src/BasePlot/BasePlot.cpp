#include "pyplot_cpp/BasePlot.hpp"
#include "pyplot_cpp/pyplot.hpp"

#ifdef PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER
#include "pyplot_cpp/DynamicScriptRunner.hpp"
#endif

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

void pyplot_cpp::BasePlot::setPlotData(std::vector<double> _x, std::vector<double> _y) {
    if (_x.size() != _y.size()) {
        throw std::runtime_error("Vectors have non-equal size!");
    }
    x = std::move(_x);
    y = std::move(_y);
}

void pyplot_cpp::BasePlot::mergePlotData(std::vector<double> _x, std::vector<double> _y) {
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

void pyplot_cpp::BasePlot::setTitle(const std::string& _title) {
    title = _title;
}

void pyplot_cpp::BasePlot::setXlabel(const std::string &_xlabel) {
    xlabel = _xlabel;
}

void pyplot_cpp::BasePlot::setYlabel(const std::string &_ylabel) {
    ylabel = _ylabel;
}

void pyplot_cpp::BasePlot::show(bool async) {
    _show();
#ifdef PYPLOT_CPP_DYNAMIC_SCRIPT_RUNNER
    python::DynamicScriptRunner runner(&script);
    runner.Run(async);
#endif
}


