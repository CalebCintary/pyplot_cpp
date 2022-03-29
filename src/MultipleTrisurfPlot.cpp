//
// Created by calebcintary on 3/27/22.
//

#include "pyplot_cpp/MultipleTrisurfPlot.hpp"
#include "pyplot_cpp/converter/converter.hpp"
#include "pyplot_cpp/plt/pyplot.hpp"

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
    addPlot(plot, "");
}

void pyplot_cpp::MultipleTrisurfPlot::dynamicScript_Configuration() {
    script.addLine("fig = plt.figure()");
    script.addLine("ax = fig.gca(projection='3d')");

    int i = 0;

    for (const auto &item : shelf) {

        script.addLine("surf = ax.plot_trisurf("
                       "" + converter::vectorToPythonArray(item.getX()) + "," +
                       "" + converter::vectorToPythonArray(item.getY()) + "," +
                       "" + converter::vectorToPythonArray(item.getZ()) + "," +
                       "" + "label='" + legends[i++] + "'" +
                       "" + plt::parseArguments(item.getArgs()) + ")");

        script.addLine("surf._facecolors2d=surf._facecolor3d\n"
                       "surf._edgecolors2d=surf._edgecolor3d");
    }

    script.addLine("ax.legend()");
}

void pyplot_cpp::MultipleTrisurfPlot::addPlot(pyplot_cpp::TrisurfPlot plot, std::string legend) {
    shelf.push_back(plot);
    if (!legend.empty()) {
        ++legends_count;
    }

    legends.push_back(legend);
}
