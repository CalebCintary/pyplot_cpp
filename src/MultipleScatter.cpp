//
// Created by calebcintary on 3/27/22.
//

#include "pyplot_cpp/MultipleScatter.hpp"

#include "pyplot_cpp/plt/pyplot.hpp"
#include "pyplot_cpp/converter/converter.hpp"

void pyplot_cpp::MultipleScatter::addPoint(std::pair<double, double> _p) {
    BasePlot::addPoint(_p);
}

void pyplot_cpp::MultipleScatter::addPoint(double _x, double _y) {
    BasePlot::addPoint(_x, _y);
}

void pyplot_cpp::MultipleScatter::setData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::setData(_x, _y);
}

void pyplot_cpp::MultipleScatter::appendData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::appendData(_x, _y);
}

void pyplot_cpp::MultipleScatter::addPlot(pyplot_cpp::Scatter plot) {
    shelf.push_back(plot);
}

void pyplot_cpp::MultipleScatter::dynamicScript_Configuration() {
    for (const auto &item : shelf) {
        script.addAssignment("x", converter::vectorToPythonArray(item.getX()));
        script.addAssignment("y", converter::vectorToPythonArray(item.getY()));

        script.addLine(plt::scatter("x", "y", item.getArgs()));
    }
}
