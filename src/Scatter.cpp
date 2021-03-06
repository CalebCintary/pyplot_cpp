//
// Created by calebcintary on 3/20/22.
//

#include "pyplot_cpp/Scatter.hpp"

#include "pyplot_cpp/converter/converter.hpp"
#include "pyplot_cpp/plt/pyplot.hpp"

void pyplot_cpp::Scatter::dynamicScript_Configuration() {
    script.addAssignment("x", converter::vectorToPythonArray(x));
    script.addAssignment("y", converter::vectorToPythonArray(y));

    script.addLine(plt::scatter("x", "y", args));
}

pyplot_cpp::Scatter::Scatter() = default;

pyplot_cpp::Scatter::Scatter(const pyplot_cpp::Scatter &plot) {
    this->x = plot.x;
    this->y = plot.y;
    this->xlabel = plot.xlabel;
    this->ylabel = plot.ylabel;
}
