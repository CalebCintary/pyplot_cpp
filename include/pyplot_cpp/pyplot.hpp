//
// Created by calebcintary on 3/15/22.
//

#ifndef PYPLOT_CPP_PYPLOT_HPP
#define PYPLOT_CPP_PYPLOT_HPP

#include <string>
#include <sstream>
#include <vector>

#include "converter.hpp"

namespace pyplot_cpp {
    namespace plt {
        std::string import();

        std::string plot(const std::string& x, const std::string& y);

        std::string plot(const std::vector<double>& x, const std::vector<double>& y);

        std::string xlabel(const std::string& xlabel);

        std::string ylabel(const std::string& ylabel);

        std::string title(const std::string& title);

        std::string show();
    }
}




#endif //PYPLOT_CPP_PYPLOT_HPP