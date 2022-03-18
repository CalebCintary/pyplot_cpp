//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/plt/arguments/Color.h"

pyplot_cpp::plt::Color::Color(const std::string &value)
        : Property("color", value, ArgumentType::STRING) {
}
