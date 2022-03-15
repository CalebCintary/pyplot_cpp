//
// Created by calebcintary on 3/15/22.
//

#ifndef PYPLOT_CPP_PYTHONRUNNER_HPP
#define PYPLOT_CPP_PYTHONRUNNER_HPP

#include <fstream>
#include <chrono>
#include <cstdlib>

#include "pyplot_cpp/PythonScript.hpp"

namespace pyplot_cpp {
    namespace python {

        class PythonRunner {
        private:
            PythonScript* script;

        public:
            /**
             * Initialize base PythonRunner to create and run PythonFile
             */
            PythonRunner(PythonScript* script);

            ~PythonRunner();

            void Run(bool async = false);
        };
    }

}

void* PythonRunner_Threads_Start(void* value);


#endif //PYPLOT_CPP_PYTHONRUNNER_HPP