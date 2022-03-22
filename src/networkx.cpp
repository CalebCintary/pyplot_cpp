//
// Created by calebcintary on 3/22/22.
//

#include "pyplot_cpp/networkx.h"
#include "pyplot_cpp/plt/Properties.hpp"

std::string pyplot_cpp::nx::draw(const std::string &graph, const std::map<std::string, plt::Property> &args) {
    return "nx.draw(" + graph + plt::parseArguments(args) + ")";
}