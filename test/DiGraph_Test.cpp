//
// Created by lavr4 on 3/24/2022.
//


#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/DiGraph.hpp"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(DiGraph_Test)

    BOOST_AUTO_TEST_CASE(DiGraph_EmptyShow_Test) {
        pyplot_cpp::DiGraph graph;

        graph.setTitle("Simple DiGraph");
        graph.show();
    }

    BOOST_AUTO_TEST_CASE(DiGraph_SimpleShow_Test) {
        pyplot_cpp::DiGraph graph;
        graph.addEdge("1", "2");

        graph.setTitle("Simple DiGraph");
        graph.show();
    }

    BOOST_AUTO_TEST_CASE(DiGraph_SimpleSave_Test) {
        pyplot_cpp::DiGraph graph;
        graph.addEdge("1", "2");

        graph.setTitle("Simple DiGraph");
        graph.save("../../examples/DiGraph_Simple.png");
    }

    BOOST_AUTO_TEST_CASE(DiGraph_Weighted_SimpleShow_Test) {
        pyplot_cpp::DiGraph graph;
        graph.addEdge("1", "2");
        graph.addEdge("1", "3", "3");
        graph.addEdge("2", "3", "5");

        graph.setTitle("Simple DiGraph");
        graph.show();
    }

    BOOST_AUTO_TEST_CASE(DiGraph_Weighted_SimpleSave_Test) {
        pyplot_cpp::DiGraph graph;
        graph.addEdge("1", "2");
        graph.addEdge("1", "3", "3");
        graph.addEdge("2", "3", "5");

        graph.setTitle("Simple DiGraph");
        graph.save("../../examples/DiGraph_Weighted.png");
    }
BOOST_AUTO_TEST_SUITE_END()