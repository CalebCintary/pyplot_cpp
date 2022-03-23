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

    if (!wedges.empty()) {
        script.addAssignment("we", converter::vectorToPythonArray(wedges));
        script.addLine("g.add_weighted_edges_from(we)");
    }

    script.addLine("pos = nx.spring_layout(g, pos=nx.circular_layout(g))");
    script.addLine(pyplot_cpp::nx::draw("g", args, "pos"));

    if (!wedges.empty()) {
        script.addAssignment("labels", "nx.get_edge_attributes(g, 'weight')");
        script.addLine(nx::draw_networkx_edge_labels("g", {
                {"edge_labels", plt::Property("edge_labels", "labels", plt::INT)},
                {"pos", plt::Property("pos", "pos", plt::INT)}
        }));
    }
}
