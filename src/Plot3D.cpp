//
// Created by calebcintary on 3/27/22.
//

#include "pyplot_cpp/Plot3D.h"
#include "pyplot_cpp/converter/converter.hpp"

void pyplot_cpp::Plot3D::dynamicScript_Configuration() {
    script.addLine("fig = plt.figure()");
    script.addLine("ax = Axes3D(fig)");
    script.addLine("ax.plot("
                   "" + converter::vectorToPythonArray(x) + "," +
                   "" + converter::vectorToPythonArray(y) + "," +
                   "" + converter::vectorToPythonArray(z) +
                   "" + plt::parseArguments(args) + ")");

    script.addLine("plt.show()");
}

pyplot_cpp::Plot3D::Plot3D() {

}

pyplot_cpp::Plot3D::Plot3D(const pyplot_cpp::Plot3D &plot) {
    this->x = plot.x;
    this->y = plot.y;
    this->z = plot.z;
    this->xlabel = plot.xlabel;
    this->ylabel = plot.ylabel;
    this->zlabel = plot.zlabel;
}
