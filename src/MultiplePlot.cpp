//
// Created by calebcintary on 3/18/22.
//

#include "pyplot_cpp/MultiplePlot.hpp"
#include "pyplot_cpp/plt/pyplot.hpp"
#include "pyplot_cpp/converter/converter.hpp"

namespace conv = pyplot_cpp::converter;

void pyplot_cpp::MultiplePlot::addPlot(pyplot_cpp::Plot plot) {
    addPlot(plot, "");
}

void pyplot_cpp::MultiplePlot::dynamicScript_show_stringConstruct() {
    for (const auto & item : plots) {
        script.addAssignment("x", conv::vectorToPythonArray(item.getX()));
        script.addAssignment("y", conv::vectorToPythonArray(item.getY()));

        script.addLine(plt::plot("x", "y", item.getArgs()));
    }
    if (legends_count > 0) {
        std::stringstream legendStream;
        legendStream << "[";
        for (int i = 0; i < legends.size() - 1; ++i) {
            legendStream << "\"" << legends[i] << "\",";
        }
        legendStream << "\"" << legends[legends.size() - 1] << "\"]";

        script.addLine(plt::legend(legendStream.str()));
    }
}

void pyplot_cpp::MultiplePlot::addPlot(pyplot_cpp::Plot plot, std::string legend) {
    plots.push_back(plot);
    if (!legend.empty()) {
        ++legends_count;
    }

    legends.push_back(legend);
}
