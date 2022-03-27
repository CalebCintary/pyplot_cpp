//
// Created by calebcintary on 3/22/22.
//

#include "pyplot_cpp/Graph.hpp"

#include "pyplot_cpp/converter/converter.hpp"
#include "pyplot_cpp/networkx.h"

void pyplot_cpp::Graph::dynamicScript_Configuration() {
    script.addAssignment("g", "nx.Graph()");

    if (edgeList.size() + wedgeList.size() > 0) {
        for (const auto &item : nodeList) {
            script.addLine("g.add_node(" + item.getValue() + ")");
        }
        script.addAssignment("pos", "nx.spring_layout(g)");
        converter::NodeArray node_list = converter::vectorToPythonArray(nodeList);

        script.addLine("nx.draw_networkx_nodes(g, pos,"
                       "nodelist=" + node_list.nodeArray + "," +
                       "node_size=" + node_list.nodeSizeArray + "," +
                       "alpha=" + node_list.nodeAlphaArray + "," +
                       "node_color=" + node_list.nodeColorArray + ")");

        converter::EdgeArray edge_list = converter::vectorToPythonArray(edgeList);
        converter::WEdgeArray wedge_list = converter::vectorToPythonArray(wedgeList);

        script.addLine("g.add_edges_from(" + edge_list.EdgeArray + ")");
        script.addLine("g.add_weighted_edges_from(" + wedge_list.EdgeArray + ")");

        script.addLine("nx.draw_networkx_edges(g, pos, "
                       "edgelist=" + edge_list.EdgeArray + "," +
                       "alpha=" + edge_list.EdgeAlphaArray + "," +
                       "edge_color=" + edge_list.EdgeColorArray + "," +
                       "width=" + edge_list.EdgeWidthArray + ")");

        script.addLine("nx.draw_networkx_edges(g, pos, "
                       "edgelist=" + wedge_list.EdgeArray + "," +
                       "alpha=" + wedge_list.EdgeAlphaArray + "," +
                       "edge_color=" + wedge_list.EdgeColorArray + "," +
                       "width=" + wedge_list.EdgeWidthArray + ")");

        script.addLine("nx.draw_networkx_labels(g, pos)");

        script.addAssignment("labels", "nx.get_edge_attributes(g, 'weight')");
        script.addLine(nx::draw_networkx_edge_labels("g", {
                {"edge_labels", plt::Property("edge_labels", "labels", plt::INT)},
                {"pos", plt::Property("pos", "pos", plt::INT)}
        }));
//        script.addLine("nx.draw(g)");
    }

}
