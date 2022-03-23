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
    if (!_v.empty()) {
        for (int i = 0; i < _v.size(); ++i) {
            if (i != 0) {
                res += ", ";
            }
            res += "(";
            res += _v[i].getFrom() + ",";
            res += _v[i].getTo();
            res += ")";
        }
    }
    res += "]";
    return res;
}

std::string pyplot_cpp::converter::vectorToPythonArray(const std::vector<WeightedEdge> &_v) {
    std::string res = "[";
    if (!_v.empty()) {
        for (int i = 0; i < _v.size(); ++i) {
            if (i != 0) {
                res += ", ";
            }
            res += "(";
            res += _v[i].getFrom() + ",";
            res += _v[i].getTo() + ",";
            res += _v[i].getWeight();
            res += ")";
        }
    }
    res += "]";
    return res;
}