//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/plt/Property.hpp"

#include <utility>
#include <stdexcept>

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

void pyplot_cpp::plt::Property::setName(const std::string &_name) {
    Property::name = _name;
}

void pyplot_cpp::plt::Property::setValue(const std::string &value) {
    Property::value = value;
}

void pyplot_cpp::plt::Property::setType(pyplot_cpp::plt::ArgumentType type) {
    Property::type = type;
}

pyplot_cpp::plt::Property::Property(std::string name, std::string value) : name(std::move(name)), value(std::move(value)) {}

std::string pyplot_cpp::plt::Property::getStringPresentation() const {
    std::string arg = name + " = ";
    switch (type) {
        case ArgumentType::INT: {
            arg += value;
            break;
        }
        case ArgumentType::BOOL: {
            arg += value;
            break;
        }
        case ArgumentType::STRING: {
            arg += "'" + value + "'";
        }
        default: {
            throw std::runtime_error("Something really strange just happend but you got unknown PropertyType: " + std::to_string(type));
        }
    }
    return arg;
}

std::string pyplot_cpp::plt::parseArguments(std::map<std::string, pyplot_cpp::plt::Property> args) {
    if (args.empty()) {
        return "";
    } else {
        std::string ss;
        for (const auto &item : args) {
            ss += "," + item.second.getStringPresentation();
        }
        return ss;
    }

}