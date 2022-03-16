//
// Created by calebcintary on 3/15/22.
//

#include "pyplot_cpp/python/PythonRunner.hpp"
#include "pyplot_cpp/Plot.hpp"

#include <utility>

#include "pyplot_cpp/converter/converter.hpp"
#include "pyplot_cpp/plt/pyplot.hpp"

namespace conv = pyplot_cpp::converter;
namespace plt = pyplot_cpp::plt;

void pyplot_cpp::Plot::dynamicScript_show_stringConstruct() {
    script.addAssignment("x", conv::vectorToPythonArray(x));
    script.addAssignment("y", conv::vectorToPythonArray(y));

    script.addLine(plt::plot("x", "y"));

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

pyplot_cpp::Plot::Plot() : BasePlot() {

}

pyplot_cpp::Plot::Plot(std::vector<double> _x, std::vector<double> _y) : BasePlot() {
    this->setPlotData(std::move(_x), std::move(_y));
}
