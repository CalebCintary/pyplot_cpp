//
// Created by calebcintary on 3/15/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Plot.hpp"

BOOST_AUTO_TEST_SUITE(Plot_Test)

    BOOST_AUTO_TEST_CASE(SimpleShow_Test) {
        pyplot_cpp::Plot plot;
        plot.addPoint(1, 1);
        plot.addPoint(2, 4);
        plot.addPoint(3, 2);
        plot.tight_layout();
        plot.show();
    }

BOOST_AUTO_TEST_SUITE_END()
