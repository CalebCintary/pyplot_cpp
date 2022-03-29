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

        struct EdgeArray {
            std::string _EdgeArray;
            std::string EdgeWidthArray;
            std::string EdgeColorArray;
            std::string EdgeAlphaArray;
        };

        struct WEdgeArray {
            std::string _EdgeArray;
            std::string EdgeWidthArray;
            std::string EdgeColorArray;
            std::string EdgeAlphaArray;
        };

        EdgeArray vectorToPythonArray(const std::vector<Edge>& _v);

        WEdgeArray vectorToPythonArray(const std::vector<WeightedEdge>& _v);

        struct NodeArray {
            std::string nodeArray;
            std::string nodeSizeArray;
            std::string nodeColorArray;
            std::string nodeAlphaArray;
        };

        NodeArray vectorToPythonArray(const std::vector<Node>& _v);


    }
}

#endif //PYPLOT_CPP_CONVERTER_HPP
