//
// Created by calebcintary on 3/17/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Bar.h"

BOOST_AUTO_TEST_SUITE(Bar_Test)

    BOOST_AUTO_TEST_CASE(SimpleShow_Test) {
        pyplot_cpp::Bar bar;
        bar.appendData("C", 20);
        bar.appendData("C++", 15);
        bar.appendData("Java", 30);
        bar.appendData("Python", 35);
        bar.show();
    }

BOOST_AUTO_TEST_SUITE_END()