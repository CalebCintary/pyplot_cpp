//
// Created by calebcintary on 3/20/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Scatter.hpp"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(Scatter_Test)

    BOOST_AUTO_TEST_CASE(Scatter_SimpleShow_Test) {
        pyplot_cpp::Scatter scatter;
        scatter.setData(
                {3, 1, 3, 12, 2, 4, 4},
                {3, 2, 1, 4, 5, 6, 7}
                );

        scatter.setTitle("Scatter chart");
        scatter.show();
    }

    BOOST_AUTO_TEST_CASE(Scatter_SimpleSave_Test) {
        pyplot_cpp::Scatter scatter;
        scatter.setData(
                {3, 1, 3, 12, 2, 4, 4},
                {3, 2, 1, 4, 5, 6, 7}
        );

        scatter.setTitle("Scatter chart");
        scatter.save("../../examples/Scatter.png");
    }

BOOST_AUTO_TEST_SUITE_END()