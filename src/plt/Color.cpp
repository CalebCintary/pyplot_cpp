//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/plt/properties/Color.h"

pyplot_cpp::plt::Color::Color(const std::string &value)
        : Property("color", value, ArgumentType::STRING) {
}

const COLOR COLOR::MAROON = COLOR("maroon");
const COLOR COLOR::ORANGE = COLOR("orange");
const COLOR COLOR::BLUE = COLOR("blue");
