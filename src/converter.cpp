//
// Created by calebcintary on 3/20/22.
//

#include "pyplot_cpp/converter/converter.hpp"

std::string pyplot_cpp::converter::vectorToPythonArray(std::vector<std::string> _v) {
    std::string res = "[";
    for (int i = 0; i < _v.size() - 1; ++i) {
        res += (_v[i]) + ", ";
    }
    res += (_v[_v.size() - 1]) + "]";

    return res;
}
