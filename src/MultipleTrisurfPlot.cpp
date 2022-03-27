//
// Created by calebcintary on 3/27/22.
//

#include "pyplot_cpp/MultipleTrisurfPlot.hpp"
#include "pyplot_cpp/converter/converter.hpp"

void pyplot_cpp::MultipleTrisurfPlot::addPoint(double _x, double _y, double _z) {
    BasePlot3D::addPoint(_x, _y, _z);
}

void pyplot_cpp::MultipleTrisurfPlot::setData(std::vector<double> _x, std::vector<double> _y, std::vector<double> _z) {
    BasePlot3D::setData(_x, _y, _z);
}

void
pyplot_cpp::MultipleTrisurfPlot::appendData(std::vector<double> _x, std::vector<double> _y, std::vector<double> _z) {
    BasePlot3D::appendData(_x, _y, _z);
}

void pyplot_cpp::MultipleTrisurfPlot::addPlot(pyplot_cpp::TrisurfPlot plot) {
    this->shelf.push_back(plot);
}

void pyplot_cpp::MultipleTrisurfPlot::dynamicScript_Configuration() {
    script.addLine("fig = plt.figure()");
    script.addLine("ax = Axes3D(fig)");

    for (const auto &item : shelf) {
        script.addLine("ax.plot_trisurf("
                       "" + converter::vectorToPythonArray(item.getX()) + "," +
                       "" + converter::vectorToPythonArray(item.getY()) + "," +
                       "" + converter::vectorToPythonArray(item.getZ()) +
                       "" + plt::parseArguments(item.getArgs()) + ")");
    }

    script.addLine("plt.show()");
}
