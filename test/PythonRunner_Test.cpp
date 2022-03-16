#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/python/PythonScript.hpp"
#include "pyplot_cpp/python/DynamicScriptRunner.hpp"

BOOST_AUTO_TEST_SUITE(PythonRunner_Test)

    BOOST_AUTO_TEST_CASE(PythonRunner_HelloWorldTest) {
        pyplot_cpp::python::PythonScript script;
        script.addLine("print(\"Hello World!\")");

        BOOST_CHECK(script.getCode() == "print(\"Hello World!\")\n");

        pyplot_cpp::python::DynamicScriptRunner runner(&script);

        runner.Run();
    }



BOOST_AUTO_TEST_SUITE_END()
