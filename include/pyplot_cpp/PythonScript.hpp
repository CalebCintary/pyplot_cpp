//
// Created by calebcintary on 3/15/22.
//

#ifndef PYPLOT_CPP_PYTHONSCRIPT_HPP
#define PYPLOT_CPP_PYTHONSCRIPT_HPP

#include <string>
#include <sstream>

namespace pyplot_cpp {
    namespace python {
        class PythonScript {
        private:
            std::stringstream script;

        public:

            /**
             * Adds line to script. End it with new line.
             * @param line line to add to script
             * @param end symbol to add in end of line. Default is '\n'
             */
            void addLine(const std::string& line,
                         const std::string& end = "\n");

            /**
             * Returns code of written PythonScript file
             * @return code of script
             */
            std::string getCode();
        };
    }
}




#endif //PYPLOT_CPP_PYTHONSCRIPT_HPP
