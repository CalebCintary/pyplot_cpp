#ifndef PYPLOT_CPP_BASEGRAPH_HPP
#define PYPLOT_CPP_BASEGRAPH_HPP

#include <vector>
#include <map>

#include "Showable.hpp"
#include "python/PythonScript.hpp"
#include "plt/Properties.hpp"

#define DEFAULT_NODE_SIZE 300
#define DEFAULT_NODE_COLOR "#1f78b4"
#define DEFAULT_EDGE_COLOR "k"
#define DEFAULT_EDGE_WIDTH 1.0

namespace pyplot_cpp {

    class Node {
    protected:
        std::string value;

        float node_size = DEFAULT_NODE_SIZE;
        float alpha = 1;

        std::string color = DEFAULT_NODE_COLOR;

    public:
        explicit Node(const std::string &value);

        Node(const std::string &value, float nodeSize, float alpha, const std::string &color);

        Node(const std::string &value, const std::string &color);

        const std::string &getValue() const;

        float getNodeSize() const;

        float getAlpha() const;

        const std::string &getColor() const;

        void setValue(const std::string &value);

        void setNodeSize(float nodeSize);

        void setAlpha(float alpha);

        void setColor(const std::string &color);

        bool operator==(const Node &rhs) const;

        bool operator!=(const Node &rhs) const;
    };

    class Edge {
    protected:
        Node from;
        Node to;

        float width = DEFAULT_EDGE_WIDTH;
        float alpha = 1;

        std::string color = DEFAULT_EDGE_COLOR;

    public:
        Edge(const Node &from, const Node &to);

        Edge(const Node &from, const Node &to, float width, float alpha, const std::string &color);

        Edge(const Node &from, const Node &to, const std::string &color);


        const Node &getFrom() const;

        const Node &getTo() const;

        float getWidth() const;

        float getAlpha() const;

        const std::string &getColor() const;

        void setWidth(float width);

        void setAlpha(float alpha);

        void setColor(const std::string &color);
    };

    class WeightedEdge : public Edge {
    protected:
        std::string weight;
    public:
        WeightedEdge(const Node &from, const Node &to, const std::string &weight);

        const std::string &getWeight() const;
    };

    class BaseGraph : public Showable {
    protected:
        std::vector<Node> nodeList;
        std::vector<Edge> edgeList;
        std::vector<WeightedEdge> wedgeList;

        std::string font_size;
        std::string font_color;

        std::map<std::string, plt::Property> args;

        void dynamicScript_PostConfiguration() override;

        void dynamicScript_Import() override;
    public:

        BaseGraph();

        void addNode(const Node& _n);

        void addEdge(const Node& from, const Node& to);

        void addEdge(const Node& from, const Node& to, const std::string& weight);

        void addEdge(const std::string& _from, const std::string& _to, const std::string& weight);

        void addEdge(const std::string& _from, const std::string& _to);

        void addEdge(const Edge& edge);

        void addEdge(const WeightedEdge& wedge);

        void displayVertexLabels(bool _vertexLabels = true);
    };

}


#endif //PYPLOT_CPP_BASEGRAPH_HPP
