//
// Created by calebcintary on 3/22/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Graph.hpp"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(Graph_Test)

    BOOST_AUTO_TEST_CASE(Graph_EmptyShow_Test) {
        pyplot_cpp::Graph graph;

        graph.setTitle("Simple Graph");
        graph.show();
    }

    BOOST_AUTO_TEST_CASE(Graph_SimpleShow_Test) {
        pyplot_cpp::Graph graph;
        graph.addEdge("1", "2");

        graph.setTitle("Simple Graph");
        graph.show();
    }

    BOOST_AUTO_TEST_CASE(Graph_SimpleSave_Test) {
        pyplot_cpp::Graph graph;
        graph.addEdge("1", "2");

        graph.setTitle("Simple Graph");
        graph.save("../../examples/Graph_Simple.png");
    }

    BOOST_AUTO_TEST_CASE(Graph_Weighted_SimpleShow_Test) {
        pyplot_cpp::Graph graph;
        graph.addEdge("1", "2");
        graph.addEdge("1", "3", "3");
        graph.addEdge("2", "3", "5");

        graph.setTitle("Simple Graph");
        graph.show();
    }

BOOST_AUTO_TEST_SUITE_END()