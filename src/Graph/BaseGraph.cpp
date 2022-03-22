
#include "pyplot_cpp/BaseGraph.hpp"

#include "pyplot_cpp/plt/pyplot.hpp"

void pyplot_cpp::BaseGraph::dynamicScript_Import() {
    script.addImportAs("networkx", "nx");
    script.addImportAs("matplotlib.pyplot", "plt");
}

void pyplot_cpp::BaseGraph::addEdge(const std::string& _from, const std::string& _to, const std::string& _weight) {
    edges.push_back(WeightedEdge(_from, _to, _weight));
}

void pyplot_cpp::BaseGraph::addEdge(const std::string& _from, const std::string& _to) {
    edges.push_back(Edge(_from, _to));
}

void pyplot_cpp::BaseGraph::addEdge(pyplot_cpp::Edge edge) {
    edges.push_back(edge);
}

void pyplot_cpp::BaseGraph::dynamicScript_PostConfiguration() {
    if (!title.empty()) {
        script.addLine(plt::title(title));
    }
}

pyplot_cpp::BaseGraph::BaseGraph() {
    displayVertexLabels(true);
}

void pyplot_cpp::BaseGraph::displayVertexLabels(bool _vertexLabels) {
    if (_vertexLabels) {
        args["with_labels"] = plt::Property("with_labels", "True", plt::BOOL);
    } else {
        auto iterator = args.find("with_labels");
        if (iterator != args.end()) {
            args.erase(iterator);
        }
    }
}

const std::string &pyplot_cpp::Edge::getFrom() const {
    return from;
}

const std::string &pyplot_cpp::Edge::getTo() const {
    return to;
}

pyplot_cpp::Edge::Edge(const std::string &from, const std::string &to) : from(from), to(to) {}

pyplot_cpp::WeightedEdge::WeightedEdge(const std::string &from, const std::string &to, const std::string &weight)
        : Edge(from, to), weight(weight) {}

const std::string &pyplot_cpp::WeightedEdge::getWeight() const {
    return weight;
}
