//
// Created by calebcintary on 3/27/22.
//

#include <boost/test/unit_test.hpp>
#include <cmath>

#include "pyplot_cpp/Plot3D.h"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(Plot3D_Test)

    BOOST_AUTO_TEST_CASE(Plot3D_SimpleShow_Test) {
        pyplot_cpp::Plot3D plot;
        int a = 0;
        int b = 0;
        std::vector<double> z;
        std::vector<double> r;
        for (double _z = -2; _z < 2; _z += 4.0 / 100.0) {
            z.push_back(_z);
            r.push_back(pow(_z, 2) + 1);
        }
        std::vector<double> x;
        std::vector<double> y;
        int i = 0;
        for (double theta = -4 * M_PI; theta < 4 * M_PI; theta += (8 * M_PI) / 100.0) {
            x.push_back(r[i] * sin(theta));
            y.push_back(r[i++] * cos(theta));
        }

        plot.setData(x, y, z);
        plot.show();
    }

    BOOST_AUTO_TEST_CASE(Plot3D_SimpleSave_Test) {
        pyplot_cpp::Plot3D plot;
        int a = 0;
        int b = 0;
        std::vector<double> z;
        std::vector<double> r;
        for (double _z = -2; _z < 2; _z += 4.0 / 100.0) {
            z.push_back(_z);
            r.push_back(pow(_z, 2) + 1);
        }
        std::vector<double> x;
        std::vector<double> y;
        int i = 0;
        for (double theta = -4 * M_PI; theta < 4 * M_PI; theta += (8 * M_PI) / 100.0) {
            x.push_back(r[i] * sin(theta));
            y.push_back(r[i++] * cos(theta));
        }

        plot.setData(x, y, z);
        plot.save("../../examples/Plot3D_simple.png");
    }

BOOST_AUTO_TEST_SUITE_END()