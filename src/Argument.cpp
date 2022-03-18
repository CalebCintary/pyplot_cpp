//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/plt/Argument.h"

#include <utility>

const std::string &pyplot_cpp::plt::Argument::getName() const {
    return name;
}

const std::string &pyplot_cpp::plt::Argument::getValue() const {
    return value;
}

pyplot_cpp::plt::ArgumentType pyplot_cpp::plt::Argument::getType() const {
    return type;
}

pyplot_cpp::plt::Argument::Argument(std::string name, std::string value,
                                    pyplot_cpp::plt::ArgumentType type) : name(std::move(name)), value(std::move(value)), type(type) {}

void pyplot_cpp::plt::Argument::setName(const std::string &name) {
    Argument::name = name;
}

void pyplot_cpp::plt::Argument::setValue(const std::string &value) {
    Argument::value = value;
}

void pyplot_cpp::plt::Argument::setType(pyplot_cpp::plt::ArgumentType type) {
    Argument::type = type;
}

pyplot_cpp::plt::Argument::Argument(std::string name, std::string value) : name(std::move(name)), value(std::move(value)) {}

std::string pyplot_cpp::plt::parseArguments(std::vector<Argument> args) {
    // TODO: End here
}