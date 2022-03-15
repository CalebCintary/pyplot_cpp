#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/PythonScript.hpp"

BOOST_AUTO_TEST_SUITE(PythonScript_Test)

    BOOST_AUTO_TEST_CASE(PythonScript_OneLineTest_WithBaseEndl) {
        pyplot_cpp::python::PythonScript script;
        script.addLine("print(\"Hello World!\")");

        BOOST_CHECK(script.getCode() == "print(\"Hello World!\")\n");
    }

    BOOST_AUTO_TEST_CASE(PythonScript_OneLineTest_WithSpecialEndl) {
        pyplot_cpp::python::PythonScript script;
        script.addLine("print(\"Hello World!\")", ";\n");

        BOOST_CHECK(script.getCode() == "print(\"Hello World!\");\n");
    }

BOOST_AUTO_TEST_SUITE_END()