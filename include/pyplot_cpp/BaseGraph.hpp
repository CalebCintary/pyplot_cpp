#ifndef PYPLOT_CPP_BASEGRAPH_HPP
#define PYPLOT_CPP_BASEGRAPH_HPP

#include <vector>
#include <map>

#include "Showable.hpp"
#include "python/PythonScript.hpp"
#include "plt/Properties.hpp"

namespace pyplot_cpp {

    class Edge {
    protected:
        std::string from;
        std::string to;


    public:
        Edge(const std::string &from, const std::string &to);

        const std::string &getFrom() const;

        const std::string &getTo() const;


    };

    class WeightedEdge : public Edge {
    protected:
        std::string weight;
    public:
        WeightedEdge(const std::string &from, const std::string &to, const std::string &weight);

        const std::string &getWeight() const;
    };

    class BaseGraph : public Showable {
    protected:
        std::vector<Edge> edges;
        std::vector<WeightedEdge> wedges;
        bool weight;

        std::map<std::string, plt::Property> args;

        void dynamicScript_PostConfiguration() override;

        void dynamicScript_Import() override;
    public:

        BaseGraph();

        void addEdge(const std::string& _from, const std::string& to, const std::string& weight);

        void addEdge(const std::string& _from, const std::string& to);

        void addEdge(Edge edge);

        void displayVertexLabels(bool _vertexLabels = true);
    };

}


#endif //PYPLOT_CPP_BASEGRAPH_HPP
