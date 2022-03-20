//
// Created by calebcintary on 3/20/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Histogram.hpp"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(Histogram_Test)

    BOOST_AUTO_TEST_CASE(Histogram_SimpleShow_Test) {
        pyplot_cpp::Histogram hist;
        hist.setData({1, 2, 3, 4, 5, 6, 7, 4});
        hist.setBins({1, 2, 3, 4, 5, 6, 7});
        hist.setTitle("Simple Histogram");
        hist.show();
    }

    BOOST_AUTO_TEST_CASE(Histogram_SimpleSave_Test) {
        pyplot_cpp::Histogram hist;
        hist.setData({1, 2, 3, 4, 5, 6, 7, 4});
        hist.setBins({1, 2, 3, 4, 5, 6, 7});
        hist.setTitle("Simple Histogram");
        hist.save("../../examples/Hist.png");
    }

BOOST_AUTO_TEST_SUITE_END()