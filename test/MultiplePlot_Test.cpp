//
// Created by calebcintary on 3/19/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/MultiplePlot.hpp"

BOOST_AUTO_TEST_SUITE(MultiplePlot_Test)

    BOOST_AUTO_TEST_CASE(MultiplePlot_SimpleShow_Test) {
        pyplot_cpp::MultiplePlot multPlot;
        pyplot_cpp::Plot plot1;
        plot1.addPoint(1, 1);
        plot1.addPoint(2, 4);
        plot1.addPoint(3, 2);
        plot1.addProperty(pyplot_cpp::plt::Property("color", "red", pyplot_cpp::plt::STRING));

        pyplot_cpp::Plot plot2;
        plot2.addPoint(1, 1);
        plot2.addPoint(4, 2);
        plot2.addPoint(2, 3);


        multPlot.addPlot(plot1);
        multPlot.addPlot(plot2);
        multPlot.show();
    }

    BOOST_AUTO_TEST_CASE(MultiplePlot_SimpleSave_Test) {
        pyplot_cpp::MultiplePlot multPlot;
        pyplot_cpp::Plot plot1;
        plot1.addPoint(1, 1);
        plot1.addPoint(2, 4);
        plot1.addPoint(3, 2);
        plot1.setColor(pyplot_cpp::plt::Color::BLUE);

        pyplot_cpp::Plot plot2;
        plot2.addPoint(1, 1);
        plot2.addPoint(4, 2);
        plot2.addPoint(2, 3);
        plot2.setColor(pyplot_cpp::plt::Color::ORANGE);

        multPlot.addPlot(plot1);
        multPlot.addPlot(plot2);
        multPlot.save("../../examples/MultPlot.png");
    }

    BOOST_AUTO_TEST_CASE(MultiplePlot_SimpleShow_WithLegend) {
        pyplot_cpp::MultiplePlot multPlot;
        pyplot_cpp::Plot plot1;
        plot1.addPoint(1, 1);
        plot1.addPoint(2, 4);
        plot1.addPoint(3, 2);
        plot1.setColor(pyplot_cpp::plt::Color::BLUE);

        pyplot_cpp::Plot plot2;
        plot2.addPoint(1, 1);
        plot2.addPoint(4, 2);
        plot2.addPoint(2, 3);
        plot2.setColor(pyplot_cpp::plt::Color::ORANGE);

        multPlot.addPlot(plot1, "plot_1");
        multPlot.addPlot(plot2, "plot_2");

        multPlot.show();
    }

    BOOST_AUTO_TEST_CASE(MultiplePlot_SimpleSave_Test_WithLegend) {
        pyplot_cpp::MultiplePlot multPlot;
        pyplot_cpp::Plot plot1;
        plot1.addPoint(1, 1);
        plot1.addPoint(2, 4);
        plot1.addPoint(3, 2);
        plot1.setColor(pyplot_cpp::plt::Color::BLUE);

        pyplot_cpp::Plot plot2;
        plot2.addPoint(1, 1);
        plot2.addPoint(4, 2);
        plot2.addPoint(2, 3);
        plot2.setColor(pyplot_cpp::plt::Color::ORANGE);

        multPlot.addPlot(plot1, "plot_1");
        multPlot.addPlot(plot2, "plot_2");

        multPlot.save("../../examples/MultPlot_legend.png");
    }
BOOST_AUTO_TEST_SUITE_END()