//
// Created by calebcintary on 3/16/22.
//

#ifndef PYPLOT_CPP_DYNAMICSCRIPTRUNNER_HPP
#define PYPLOT_CPP_DYNAMICSCRIPTRUNNER_HPP

#include "PythonRunner.hpp"

namespace pyplot_cpp {
    namespace python {
        class DynamicScriptRunner : public PythonRunner {
        public:

            explicit DynamicScriptRunner(PythonScript *script);

            void Run(bool async = false) override;
        };
    }
}




#endif //PYPLOT_CPP_DYNAMICSCRIPTRUNNER_HPP
