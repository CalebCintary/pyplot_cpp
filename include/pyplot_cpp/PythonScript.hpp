//
// Created by calebcintary on 3/15/22.
//

#ifndef PYPLOT_CPP_PYTHONSCRIPT_HPP
#define PYPLOT_CPP_PYTHONSCRIPT_HPP

#include <vector>
#include <string>
#include <sstream>

namespace pyplot_cpp {
    namespace python {

        /**
         * Class which contains Python script to saving, running and much more
         */
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
             * Adds line with import <library_name>
             * @param library_name
             */
            void addImport(const std::string& library_name);

            /**
             * Adds line with import as
             * @param library_name
             * @param alias
             */
            void addImportAs(const std::string& library_name,
                             const std::string& alias);
            /**
             * Adds import from
             * @param library_name
             * @param module
             */
            void addImportFrom(const std::string& library_name,
                               const std::string& module);

            /**
             * Adds import from
             * @param library_name
             * @param module
             */
            void addImportFrom(const std::string& library_name,
                               std::vector<std::string> modules);

            /**
             * Adds assignment as <variable_name> = <value>
             * @param variable_name
             * @param value
             *
             */
            void addAssignment(const std::string& variable_name,
                               const std::string& value);
            /**
             * Returns code of written PythonScript file
             * @return code of script
             */
            std::string getCode();
        };
    }
}




#endif //PYPLOT_CPP_PYTHONSCRIPT_HPP
