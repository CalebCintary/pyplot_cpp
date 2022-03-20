//
// Created by calebcintary on 3/19/22.
//

#include "pyplot_cpp/Histogram.hpp"

#include <utility>

#include "pyplot_cpp/converter/converter.hpp"
#include "pyplot_cpp/plt/pyplot.hpp"

void pyplot_cpp::Histogram::addPoint(std::pair<double, double> _p) {
    BasePlot::addPoint(_p);
}

void pyplot_cpp::Histogram::addPoint(double _x, double _y) {
    BasePlot::addPoint(_x, _y);
}

void pyplot_cpp::Histogram::setData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::setData(_x, _y);
}

void pyplot_cpp::Histogram::appendData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::appendData(_x, _y);
}

void pyplot_cpp::Histogram::setData(std::vector<double> data) {
    this->x = std::move(data);
}

void pyplot_cpp::Histogram::setBins(const std::vector<double> &bins) {
    auto value = converter::vectorToPythonArray(bins);
    this->args["bins"] = plt::Property("bins", value, plt::INT);
}

void pyplot_cpp::Histogram::dynamicScript_Configuration() {
    script.addAssignment("x", converter::vectorToPythonArray(x));
    script.addLine(plt::hist("x", args));
}

pyplot_cpp::Histogram::Histogram(const pyplot_cpp::Histogram &hist) {
    this->xlabel = hist.xlabel;
    this->ylabel = hist.ylabel;
    this->title = hist.title;

    this->x = hist.x;
    this->y = hist.y;
    this->args = hist.args;
}

pyplot_cpp::Histogram::Histogram() {

}

