//
// Created by calebcintary on 3/27/22.
//

#include "pyplot_cpp/WireframePlot.hpp"

#include <utility>

void pyplot_cpp::WireframePlot::dynamicScript_Import() {
    script.addImportAs("matplotlib.pyplot", "plt");
    script.addImportFrom("mpl_toolkits.mplot3d", "Axes3D");
}

void pyplot_cpp::WireframePlot::dynamicScript_Configuration() {

}

void pyplot_cpp::WireframePlot::setData(std::vector<std::vector<double>> _x, std::vector<std::vector<double>> _y,
                                        std::vector<std::vector<double>> _z) {
    x = std::move(_x);
    y = std::move(_y);
    z = std::move(_z);
}

void pyplot_cpp::WireframePlot::dynamicScript_PostConfiguration() {
    if (!xlabel.empty()) {
        script.addLine("ax.set_xlabel(" + xlabel + ")");
    }
    if (!ylabel.empty()) {
        script.addLine("ax.set_ylabel(" + ylabel + ")");
    }
    if (!zlabel.empty()) {
        script.addLine("ax.set_zlabel(" + zlabel + ")");
    }
}


