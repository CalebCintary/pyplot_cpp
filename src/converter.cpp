//
// Created by calebcintary on 3/20/22.
//

#include "pyplot_cpp/converter/converter.hpp"

std::string pyplot_cpp::converter::vectorToPythonArray(std::vector<std::string> _v) {
    std::string res = "[";
    if (!_v.empty()) {
        for (int i = 0; i < _v.size() - 1; ++i) {
            res += (_v[i]) + ", ";
        }
        res += (_v[_v.size() - 1]);

    }
    res += "]";
    return res;
}

std::string pyplot_cpp::converter::vectorToPythonArray(const std::vector <Edge>& _v) {
    std::string res = "[";



//    if (!_v.empty()) {
//        for (int i = 0; i < _v.size() - 1; ++i) {
//            res += ("(" + _v[i].getFrom() + "," +
//                    _v[i].getTo() + (_v[i].getWeight().empty() ? "" : "," + _v[i].getWeight()) + ")") + ", ";
//        }
//        res += ("(" + _v[_v.size() - 1].getFrom() + "," +
//                _v[_v.size() - 1].getTo() + (_v[_v.size() - 1].getWeight().empty() ? "" : "," + _v[_v.size() - 1].getWeight()) + ")");
//
//    }
    res += "]";
    return res;
}