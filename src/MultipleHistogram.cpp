//
// Created by calebcintary on 3/20/22.
//

#include "pyplot_cpp/MultipleHistogram.hpp"

#include "pyplot_cpp/plt/pyplot.hpp"
#include "pyplot_cpp/converter/converter.hpp"

void pyplot_cpp::MultipleHistogram::addPoint(std::pair<double, double> _p) {
    BasePlot::addPoint(_p);
}

void pyplot_cpp::MultipleHistogram::addPoint(double _x, double _y) {
    BasePlot::addPoint(_x, _y);
}

void pyplot_cpp::MultipleHistogram::setData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::setData(_x, _y);
}

void pyplot_cpp::MultipleHistogram::appendData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::appendData(_x, _y);
}

void pyplot_cpp::MultipleHistogram::addHist(pyplot_cpp::Histogram hist) {
    addHist(hist, "");
}

void pyplot_cpp::MultipleHistogram::addHist(pyplot_cpp::Histogram hist, std::string legend) {
    hists.push_back(hist);
    if (!legend.empty()) {
        ++legend_count;
    }
    legends.push_back(legend);
}

void pyplot_cpp::MultipleHistogram::dynamicScript_Configuration() {
    for (const auto &item : hists) {
        script.addAssignment("x", converter::vectorToPythonArray(item.getX()));
        script.addLine(plt::hist("x", item.getArgs()));
    }
    if (legend_count > 0) {
        script.addLine(plt::legend(converter::vectorToPythonArray(legends)));
    }
}
