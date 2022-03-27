
#include "pyplot_cpp/BaseGraph.hpp"

#include <algorithm>

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

void pyplot_cpp::BaseGraph::addEdge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to) {
    addNode(from);
    addNode(to);
    Edge edge(from, to);
    edgeList.push_back(edge);
}

void
pyplot_cpp::BaseGraph::addEdge(const pyplot_cpp::Node &from, const pyplot_cpp::Node &to, const std::string &weight) {
    addNode(from);
    addNode(to);
    WeightedEdge edge(from, to, weight);
    wedgeList.push_back(edge);
}

void
pyplot_cpp::BaseGraph::addEdge(const std::string &_from, const std::string &_to, const std::string &weight) {
    Node from(_from);
    Node to(_to);
    addEdge(from, to, weight);
}

void pyplot_cpp::BaseGraph::addEdge(const std::string &_from, const std::string &_to) {
    Node from(_from);
    Node to(_to);
    addEdge(from, to);
}

void pyplot_cpp::BaseGraph::addEdge(const pyplot_cpp::Edge &edge) {
    addNode(edge.getFrom());
    addNode(edge.getTo());
    edgeList.push_back(edge);
}

void pyplot_cpp::BaseGraph::addNode(const pyplot_cpp::Node &_n) {
    if (std::find(nodeList.begin(), nodeList.end(), _n) == nodeList.end()) {
        nodeList.push_back(_n);
    }
}

void pyplot_cpp::BaseGraph::addEdge(const pyplot_cpp::WeightedEdge &wedge) {
    addNode(wedge.getFrom());
    addNode(wedge.getTo());
    wedgeList.push_back(wedge);
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

float pyplot_cpp::Node::getNodeSize() const {
    return node_size;
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

bool pyplot_cpp::Node::operator==(const pyplot_cpp::Node &rhs) const {
    return value == rhs.value;
}

bool pyplot_cpp::Node::operator!=(const pyplot_cpp::Node &rhs) const {
    return !(rhs == *this);
}

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

const std::string &pyplot_cpp::Edge::getColor() const {
    return color;
}

