#include <boost/test/unit_test.hpp>

#include "pyplot_cpp/PythonScript.hpp"
#include "pyplot_cpp/PythonRunner.hpp"

namespace python = pyplot_cpp::python;

BOOST_AUTO_TEST_SUITE(PythonScript_Test)

    BOOST_AUTO_TEST_CASE(PythonScript_OneLineTest_WithBaseEndl) {
        python::PythonScript script;
        script.addLine("print(\"Hello World!\")");

        BOOST_CHECK(script.getCode() == "print(\"Hello World!\")\n");
    }

    BOOST_AUTO_TEST_CASE(PythonScript_OneLineTest_WithSpecialEndl) {
        python::PythonScript script;
        script.addLine("print(\"Hello World!\")", ";\n");

        BOOST_CHECK(script.getCode() == "print(\"Hello World!\");\n");
    }

    BOOST_AUTO_TEST_CASE(PythonScript_ImportTest) {
        python::PythonScript script;
        script.addImport("numpy");
        script.addLine("a = numpy.array([1, 1])");
        script.addLine("print(a)");

        BOOST_CHECK(script.getCode() == "import numpy\n"
                                        "a = numpy.array([1, 1])\n"
                                        "print(a)\n");

        python::PythonRunner runner(&script);
        runner.Run();
    }

    BOOST_AUTO_TEST_CASE(PythonScript_ImportAsTest) {
        python::PythonScript script;
        script.addImportAs("numpy", "np");
        script.addLine("a = np.array([1, 1])");
        script.addLine("print(a)");

        BOOST_CHECK(script.getCode() == "import numpy as np\n"
                                        "a = np.array([1, 1])\n"
                                        "print(a)\n");

        python::PythonRunner runner(&script);
        runner.Run();
    }

    BOOST_AUTO_TEST_CASE(PythonScript_AssignmentTest) {
        python::PythonScript script;
        script.addImportAs("numpy", "np");
        script.addAssignment("a", "np.array([1, 1])");
        script.addLine("print(a)");

        BOOST_CHECK(script.getCode() == "import numpy as np\n"
                                        "a = np.array([1, 1])\n"
                                        "print(a)\n");

        python::PythonRunner runner(&script);
        runner.Run();
    }

    BOOST_AUTO_TEST_CASE(PythonScript_ImportFromTest_WithOneModule) {
        python::PythonScript script;
        script.addImportFrom("numpy", "array");
        script.addAssignment("a", "array([1, 1])");
        script.addLine("print(a)");


        BOOST_CHECK(script.getCode() == "from numpy import array\n"
                                        "a = array([1, 1])\n"
                                        "print(a)\n");

        python::PythonRunner runner(&script);
        runner.Run();
    }

    BOOST_AUTO_TEST_CASE(PythonScript_ImportFromTest_WithTwoModule) {
        python::PythonScript script;
        script.addImportFrom("numpy", std::vector<std::string> {"array", "zeros"});
        script.addAssignment("a", "array([1, 1])");
        script.addLine("print(a)");


        BOOST_CHECK(script.getCode() == "from numpy import array, zeros\n"
                                        "a = array([1, 1])\n"
                                        "print(a)\n");

        python::PythonRunner runner(&script);
        runner.Run();
    }

BOOST_AUTO_TEST_SUITE_END()