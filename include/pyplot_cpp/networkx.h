//
// Created by calebcintary on 3/22/22.
//

#ifndef PYPLOT_CPP_NETWORKX_H
#define PYPLOT_CPP_NETWORKX_H

#include <string>
#include <vector>

#include "plt/Properties.hpp"

namespace pyplot_cpp {
    namespace nx {
        std::string draw(const std::string& graph, const std::map<std::string, plt::Property>& args, const std::string& pos = "");
        std::string draw_networkx_edge_labels(const std::string& graph, const std::map<std::string, plt::Property>& args);
    }
}

#endif //PYPLOT_CPP_NETWORKX_H
