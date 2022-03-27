//
// Created by calebcintary on 3/15/22.
//

#include "pyplot_cpp/BasePlot3D.hpp"

#include <utility>

void pyplot_cpp::BasePlot3D::dynamicScript_Import() {
    script.addImportAs("matplotlib.pyplot", "plt");
    script.addImportFrom("mpl_toolkits.mplot3d", "Axes3D");
}

void pyplot_cpp::BasePlot3D::dynamicScript_PostConfiguration() {
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

void pyplot_cpp::BasePlot3D::addPoint(double _x, double _y, double _z) {
    x.push_back(_x);
    y.push_back(_y);
    z.push_back(_z);
}

void pyplot_cpp::BasePlot3D::setData(std::vector<double> _x, std::vector<double> _y, std::vector<double> _z) {
    x = std::move(_x);
    y = std::move(_y);
    z = std::move(_z);
}

void pyplot_cpp::BasePlot3D::appendData(std::vector<double> _x, std::vector<double> _y, std::vector<double> _z) {
    if (_x.size() == _y.size() && _y.size() == _z.size()) {
        for (int i = 0; i < _x.size(); ++i) {
            x.push_back(_x[i]);
            y.push_back(_y[i]);
            z.push_back(_z[i]);
        }
    } else {
        throw std::runtime_error("Appended data sizes is not equal");
    }
}

void pyplot_cpp::BasePlot3D::setZlabel(const std::string &zlabel) {
    BasePlot3D::zlabel = zlabel;
}

const std::vector<double> &pyplot_cpp::BasePlot3D::getX() const {
    return x;
}

const std::vector<double> &pyplot_cpp::BasePlot3D::getY() const {
    return y;
}

const std::vector<double> &pyplot_cpp::BasePlot3D::getZ() const {
    return z;
}
