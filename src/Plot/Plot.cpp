//
// Created by calebcintary on 3/15/22.
//

#include "pyplot_cpp/Plot.hpp"

#include <utility>

#include "pyplot_cpp/converter/converter.hpp"
#include "pyplot_cpp/plt/pyplot.hpp"


namespace conv = pyplot_cpp::converter;
namespace plt = pyplot_cpp::plt;

void pyplot_cpp::Plot::dynamicScript_Configuration() {
    script.addAssignment("x", conv::vectorToPythonArray(x));
    script.addAssignment("y", conv::vectorToPythonArray(y));

    script.addLine(plt::plot("x", "y", args));
}

pyplot_cpp::Plot::Plot() : BasePlot() {

}

pyplot_cpp::Plot::Plot(std::vector<double> _x, std::vector<double> _y) : BasePlot() {
    this->setData(std::move(_x), std::move(_y));
}

pyplot_cpp::Plot::Plot(pyplot_cpp::Plot const &plot) {
    this->xlabel = plot.xlabel;
    this->ylabel = plot.ylabel;
    this->title = plot.title;

    this->x = plot.x;
    this->y = plot.y;
    this->args = plot.args;
}
