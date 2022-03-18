//
// Created by calebcintary on 3/15/22.
//
// TODO: Might be connection point between Dynamic Script and Embedded Interpreter
//

#ifndef PYPLOT_CPP_PYPLOT_HPP
#define PYPLOT_CPP_PYPLOT_HPP

#include <string>
#include <sstream>
#include <vector>

#include "Argument.h"
#include "pyplot_cpp/converter/converter.hpp"


namespace pyplot_cpp {
    namespace plt {

        // ----- < Show able objects > -----

        std::string plot(const std::string& x, const std::string& y, const std::vector<Argument>& args = {});

        std::string plot(const std::vector<double>& x, const std::vector<double>& y, const std::vector<Argument>& args = {});

        std::string bar(const std::string& x, const std::string& y, const std::vector<Argument>& args = {});

        // ----- < Different functions > -----

        std::string import();

        std::string xlabel(const std::string& xlabel);

        std::string ylabel(const std::string& ylabel);

        std::string title(const std::string& title);

        std::string tight_layout();


    }
}




#endif //PYPLOT_CPP_PYPLOT_HPP