//
// Created by calebcintary on 3/21/22.
//

#include "pyplot_cpp/Axisable.hpp"

void pyplot_cpp::Axisable::setXlabel(const std::string &_xlabel) {
    xlabel = _xlabel;
}

void pyplot_cpp::Axisable::setYlabel(const std::string &_ylabel) {
    ylabel = _ylabel;
}