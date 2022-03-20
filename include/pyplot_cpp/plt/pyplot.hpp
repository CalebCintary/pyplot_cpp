//
// Created by calebcintary on 3/15/22.
//
// NOTE: Might be connection point between Dynamic Script and Embedded Interpreter
//

#ifndef PYPLOT_CPP_PYPLOT_HPP
#define PYPLOT_CPP_PYPLOT_HPP

#include <string>
#include <sstream>
#include <vector>
#include <map>

#include "Property.hpp"
#include "pyplot_cpp/converter/converter.hpp"

#define PYPLOT_PropertyArray const std::map<std::string, Property>&

namespace pyplot_cpp {
    namespace plt {

        // ----- < Show able objects > -----

        std::string plot(const std::string& x, const std::string& y, PYPLOT_PropertyArray args = {});

        std::string plot(const std::vector<double>& x, std::vector<double>& y, PYPLOT_PropertyArray args = {});

        std::string bar(const std::string& x, const std::string& y, PYPLOT_PropertyArray args = {});

        std::string hist(const std::string& x, PYPLOT_PropertyArray args = {});

        std::string scatter(const std::string& x, const std::string& y, PYPLOT_PropertyArray args = {});

        // ----- < Different functions > -----

        std::string import();

        std::string xlabel(const std::string& xlabel);

        std::string ylabel(const std::string& ylabel);

        std::string title(const std::string& title);

        std::string tight_layout();

        std::string show();

        std::string savefig(const std::string& path);

        std::string legend(std::string legend_array);

    }
}




#endif //PYPLOT_CPP_PYPLOT_HPP