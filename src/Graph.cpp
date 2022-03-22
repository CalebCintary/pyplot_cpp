//
// Created by calebcintary on 3/22/22.
//

#include "pyplot_cpp/Graph.hpp"

#include "pyplot_cpp/converter/converter.hpp"
#include "pyplot_cpp/networkx.h"

void pyplot_cpp::Graph::dynamicScript_Configuration() {
    script.addAssignment("g", "nx.Graph()");
    script.addAssignment("e", converter::vectorToPythonArray(edges));
    script.addLine("g.add_edges_from(e)");
    script.addLine(pyplot_cpp::nx::draw("g", args));
}
