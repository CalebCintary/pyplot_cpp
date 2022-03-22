//
// Created by calebcintary on 3/15/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Plot.hpp"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(Plot_Test)

    BOOST_AUTO_TEST_CASE(Plot_SimpleShow_Test) {
        pyplot_cpp::Plot plot;
        plot.addPoint(1, 1);
        plot.addPoint(2, 4);
        plot.addPoint(3, 2);
        plot.show();
    }

    BOOST_AUTO_TEST_CASE(Plot_SimpleSave_Test) {
        pyplot_cpp::Plot plot;
        plot.addPoint(1, 1);
        plot.addPoint(2, 4);
        plot.addPoint(3, 2);
        plot.save("../../examples/Plot_SimpleShow.png");
    }

    BOOST_AUTO_TEST_CASE(Plot_SimpleShow_Test_WithArguments) {
        pyplot_cpp::Plot plot;
        plot.addPoint(1, 1);
        plot.addPoint(2, 4);
        plot.addPoint(3, 2);
        plot.addProperty(pyplot_cpp::plt::Property("color", "maroon"));
        plot.show();
    }

    BOOST_AUTO_TEST_CASE(Plot_SimpleSave_Test_WithArguments) {
        pyplot_cpp::Plot plot;
        plot.addPoint(1, 1);
        plot.addPoint(2, 4);
        plot.addPoint(3, 2);
        plot.setColor(pyplot_cpp::plt::Color::ORANGE);
        plot.save("../../examples/Plot_SimpleShow_color.png");
    }

BOOST_AUTO_TEST_SUITE_END()
