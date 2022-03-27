//
// Created by calebcintary on 3/27/22.
//

#include "pyplot_cpp/TrisurfPlot.hpp"
#include "pyplot_cpp/converter/converter.hpp"

void pyplot_cpp::TrisurfPlot::dynamicScript_Configuration() {
    script.addLine("fig = plt.figure()");
    script.addLine("ax = Axes3D(fig)");
    script.addLine("ax.plot_trisurf("
                   "" + converter::vectorToPythonArray(x) + "," +
                   "" + converter::vectorToPythonArray(y) + "," +
                   "" + converter::vectorToPythonArray(z) +
                   "" + plt::parseArguments(args) + ")");

    script.addLine("plt.show()");
}
