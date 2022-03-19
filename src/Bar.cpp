//
// Created by calebcintary on 3/17/22.
//

#include "pyplot_cpp/Bar.h"

#include <utility>

#include "pyplot_cpp/plt/pyplot.hpp"

namespace plt = pyplot_cpp::plt;

void pyplot_cpp::Bar::dynamicScript_show_stringConstruct() {
    if (!_map.empty()) {
        std::stringstream _data;
        _data << "{";
        for (const auto &item: _map) {
            _data << "'" << item.first << "':" << item.second << ",";
        }
        _data << "}";

        std::string data_string_array = _data.str();
        data_string_array.replace(data_string_array.find_last_of(','), 1, "");

        script.addAssignment("data", data_string_array);
        script.addAssignment("x", "data.keys()");
        script.addAssignment("y", "data.values()");

        script.addLine(plt::bar("x", "y", args));
    }

}

pyplot_cpp::Bar::Bar(std::map<std::string, double> map) {
    _map = std::move(map);
}

void pyplot_cpp::Bar::setData(std::map<std::string, double> map) {
    _map = std::move(map);
}

void pyplot_cpp::Bar::addPoint(std::pair<double, double> _p) {
    BasePlot::addPoint(_p);
}

void pyplot_cpp::Bar::addPoint(double _x, double _y) {
    BasePlot::addPoint(_x, _y);
}

void pyplot_cpp::Bar::setData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::setData(_x, _y);
}

void pyplot_cpp::Bar::appendData(std::vector<double> _x, std::vector<double> _y) {
    BasePlot::appendData(_x, _y);
}

void pyplot_cpp::Bar::appendData(const std::map<std::string, double>& map) {
    for (const auto &item : map) {
        _map[item.first] = item.second;
    }
}

void pyplot_cpp::Bar::appendData(const std::string& _x, const double &_y) {
    _map[_x] = _y;
}

