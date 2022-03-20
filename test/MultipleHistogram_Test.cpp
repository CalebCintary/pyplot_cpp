//
// Created by calebcintary on 3/20/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Histogram.hpp"
#include "pyplot_cpp/MultipleHistogram.hpp"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(Histogram_Test)

    BOOST_AUTO_TEST_CASE(MultipleHistogram_SimpleShow_Test) {
        pyplot_cpp::MultipleHistogram multHist;
        pyplot_cpp::Histogram hist1;
        hist1.setData({1, 2, 3, 4, 5, 6, 7, 4});
        hist1.setBins({1, 2, 3, 4, 5, 6, 7});

        pyplot_cpp::Histogram hist2;
        hist2.setData({5, 4, 3, 5, 6, 7, 1});
        hist2.setBins({1, 2, 3, 4, 5, 6, 7});


        multHist.addHist(hist1);
        multHist.addHist(hist2);
        multHist.setTitle("Simple MultipleHist");
        multHist.show();
    }

    BOOST_AUTO_TEST_CASE(MultipleHistogram_SimpleSave_Test) {
        pyplot_cpp::MultipleHistogram multHist;
        pyplot_cpp::Histogram hist1;
        hist1.setData({1, 2, 3, 4, 5, 6, 7, 4});
        hist1.setBins({1, 2, 3, 4, 5, 6, 7});

        pyplot_cpp::Histogram hist2;
        hist2.setData({5, 4, 3, 5, 6, 7, 1});
        hist2.setBins({1, 2, 3, 4, 5, 6, 7});


        multHist.addHist(hist1);
        multHist.addHist(hist2);
        multHist.setTitle("Simple MultipleHist");
        multHist.save("../../examples/MultHist.png");
    }

BOOST_AUTO_TEST_SUITE_END()