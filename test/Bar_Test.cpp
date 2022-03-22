//
// Created by calebcintary on 3/17/22.
//

#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/Bar.hpp"
#include "pyplot_cpp/plt/Properties.hpp"

BOOST_AUTO_TEST_SUITE(Bar_Test)

    BOOST_AUTO_TEST_CASE(Bar_SimpleSave_Test) {
        pyplot_cpp::Bar bar;
        bar.appendData("C", 20);
        bar.appendData("C++", 15);
        bar.appendData("Java", 30);
        bar.appendData("Python", 35);
        bar.save("../../examples/Bar_SimpleShow.png");
    }

    BOOST_AUTO_TEST_CASE(Bar_SimpleShow_Test_WithArguments) {
        pyplot_cpp::Bar bar;
        bar.appendData("C", 20);
        bar.appendData("C++", 15);
        bar.appendData("Java", 30);
        bar.appendData("Python", 35);
        bar.addProperty(pyplot_cpp::plt::Color("maroon"));
        bar.show();
    }

BOOST_AUTO_TEST_SUITE_END()