//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/plt/arguments/Color.h"

std::string pyplot_cpp::plt::Color::getStringPresentation() {
    return "color = '" + getValue() + "'";
}

pyplot_cpp::plt::Color::Color(const std::string &name, const std::string &value)
        : Argument(name, value) {
    setType(STRING);
}
