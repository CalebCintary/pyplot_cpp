//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/plt/Property.h"

#include <utility>

const std::string &pyplot_cpp::plt::Property::getName() const {
    return name;
}

const std::string &pyplot_cpp::plt::Property::getValue() const {
    return value;
}

pyplot_cpp::plt::ArgumentType pyplot_cpp::plt::Property::getType() const {
    return type;
}

pyplot_cpp::plt::Property::Property(std::string name, std::string value,
                                    pyplot_cpp::plt::ArgumentType type) : name(std::move(name)), value(std::move(value)), type(type) {}

void pyplot_cpp::plt::Property::setName(const std::string &name) {
    Property::name = name;
}

void pyplot_cpp::plt::Property::setValue(const std::string &value) {
    Property::value = value;
}

void pyplot_cpp::plt::Property::setType(pyplot_cpp::plt::ArgumentType type) {
    Property::type = type;
}

pyplot_cpp::plt::Property::Property(std::string name, std::string value) : name(std::move(name)), value(std::move(value)) {}

std::string pyplot_cpp::plt::Property::getStringPresentation() {
    std::string arg = name + " = ";
    switch (type) {
        case ArgumentType::INT: {
            arg += value;
            break;
        }
        case ArgumentType::STRING: {
            arg += "'" + value + "'";
        }
    }
    return arg;
}

std::string pyplot_cpp::plt::parseArguments(std::vector<Property> args) {
    std::string ss;
    for (int i = 0; i < args.size() - 1; ++i) {
        ss += args[i].getStringPresentation() + ",";
    }
    ss += args[args.size() - 1].getStringPresentation() + ",";
    return ss;
}