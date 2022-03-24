
#include "pyplot_cpp/BaseGraph.hpp"

#include "pyplot_cpp/plt/pyplot.hpp"

void pyplot_cpp::BaseGraph::dynamicScript_Import() {
    script.addImportAs("networkx", "nx");
    script.addImportAs("matplotlib.pyplot", "plt");
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

pyplot_cpp::Edge &pyplot_cpp::BaseGraph::addEdge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to) {
    // Fixme
}

pyplot_cpp::Edge &
pyplot_cpp::BaseGraph::addEdge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to, const std::string &weight) {
    // Fixme
}

pyplot_cpp::Edge &
pyplot_cpp::BaseGraph::addEdge(const std::string &_from, const std::string &to, const std::string &weight) {
    // Fixme
}

pyplot_cpp::Edge &pyplot_cpp::BaseGraph::addEdge(const std::string &_from, const std::string &to) {
    // Fixme
}

pyplot_cpp::Edge &pyplot_cpp::BaseGraph::addEdge(const pyplot_cpp::Edge &edge) {
    // Fixme
}

const std::string &pyplot_cpp::WeightedEdge::getWeight() const {
    return weight;
}

pyplot_cpp::WeightedEdge::WeightedEdge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to,
                                       const std::string &weight) : Edge(from, to), weight(weight) {}

pyplot_cpp::Node::Node(const std::string &value) : value(value) {}

const std::string &pyplot_cpp::Node::getValue() const {
    return value;
}

float pyplot_cpp::Node::getWidth() const {
    return width;
}

float pyplot_cpp::Node::getAlpha() const {
    return alpha;
}

const std::string &pyplot_cpp::Node::getColor() const {
    return color;
}

void pyplot_cpp::Node::setValue(const std::string &value) {
    Node::value = value;
}

void pyplot_cpp::Node::setNodeSize(float nodeSize) {
    node_size = nodeSize;
}

void pyplot_cpp::Node::setAlpha(float alpha) {
    Node::alpha = alpha;
}

void pyplot_cpp::Node::setColor(const std::string &color) {
    Node::color = color;
}

pyplot_cpp::Node::Node(const std::string &value, float nodeSize, float alpha, const std::string &color) : value(value),
                                                                                                          node_size(
                                                                                                                  nodeSize),
                                                                                                          alpha(alpha),
                                                                                                          color(color) {}

pyplot_cpp::Node::Node(const std::string &value, const std::string &color) : value(value), color(color) {}

pyplot_cpp::Edge::Edge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to) : from(from), to(to) {}

const pyplot_cpp::Node &pyplot_cpp::Edge::getFrom() const {
    return from;
}

const pyplot_cpp::Node &pyplot_cpp::Edge::getTo() const {
    return to;
}

float pyplot_cpp::Edge::getWidth() const {
    return width;
}

float pyplot_cpp::Edge::getAlpha() const {
    return alpha;
}

void pyplot_cpp::Edge::setWidth(float width) {
    Edge::width = width;
}

void pyplot_cpp::Edge::setAlpha(float alpha) {
    Edge::alpha = alpha;
}

void pyplot_cpp::Edge::setColor(const std::string &color) {
    Edge::color = color;
}

pyplot_cpp::Edge::Edge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to, float width, float alpha,
                       const std::string &color) : from(from), to(to), width(width), alpha(alpha), color(color) {}

pyplot_cpp::Edge::Edge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to, const std::string &color) : from(from),
                                                                                                             to(to),
                                                                                                             color(color) {}

