//
// Created by calebcintary on 3/15/22.
//

#ifndef PYPLOT_CPP_CONVERTER_HPP
#define PYPLOT_CPP_CONVERTER_HPP

#include <vector>
#include <string>
#include "../BaseGraph.hpp"

namespace pyplot_cpp {
    namespace converter {
        template<class T>
        std::string vectorToPythonArray(std::vector<T> _v) {
            std::string res = "[";
            if (!_v.empty()) {
                for (int i = 0; i < _v.size() - 1; ++i) {
                    res += std::to_string(_v[i]) + ", ";
                }
                res += std::to_string(_v[_v.size() - 1]);
            }
            res += "]";

            return res;
        }

        std::string vectorToPythonArray(std::vector<std::string> _v);

        std::string vectorToPythonArray(const std::vector<Edge>& _v);
    }
}

#endif //PYPLOT_CPP_CONVERTER_HPP
