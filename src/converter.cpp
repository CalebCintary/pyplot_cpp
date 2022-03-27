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

pyplot_cpp::converter::EdgeArray pyplot_cpp::converter::vectorToPythonArray(const std::vector <Edge>& _v) {
    EdgeArray res;
    std::string EdgeArray = "[";
    std::string EdgeWidthArray = "[";
    std::string EdgeAlphaArray = "[";
    std::string EdgeColorArray = "[";
    if (!_v.empty()) {
        for (int i = 0; i < _v.size(); ++i) {
            if (i != 0) {
                EdgeArray += ", ";
                EdgeWidthArray += ", ";
                EdgeAlphaArray += ", ";
                EdgeColorArray += ", ";
            }
            EdgeArray += "(";
            EdgeArray += _v[i].getFrom().getValue() + ",";
            EdgeArray += _v[i].getTo().getValue();
            EdgeArray += ")";

            EdgeWidthArray += std::to_string(_v[i].getWidth());
            EdgeAlphaArray += std::to_string(_v[i].getAlpha());
            EdgeColorArray += "'" + _v[i].getColor() + "'";
        }
    }
    EdgeArray += "]";
    EdgeWidthArray += "]";
    EdgeAlphaArray += "]";
    EdgeColorArray += "]";
    res.EdgeArray = EdgeArray;
    res.EdgeWidthArray = EdgeWidthArray;
    res.EdgeAlphaArray = EdgeAlphaArray;
    res.EdgeColorArray = EdgeColorArray;
    return res;
}

pyplot_cpp::converter::WEdgeArray pyplot_cpp::converter::vectorToPythonArray(const std::vector<WeightedEdge> &_v) {

    WEdgeArray res;
    std::string EdgeArray = "[";
    std::string EdgeWidthArray = "[";
    std::string EdgeAlphaArray = "[";
    std::string EdgeColorArray = "[";
    if (!_v.empty()) {
        for (int i = 0; i < _v.size(); ++i) {
            if (i != 0) {
                EdgeArray += ", ";
                EdgeWidthArray += ", ";
                EdgeAlphaArray += ", ";
                EdgeColorArray += ", ";
            }
            EdgeArray += "(";
            EdgeArray += _v[i].getFrom().getValue() + ",";
            EdgeArray += _v[i].getTo().getValue() + ",";
            EdgeArray += _v[i].getWeight();
            EdgeArray += ")";

            EdgeWidthArray += std::to_string(_v[i].getWidth());
            EdgeAlphaArray += std::to_string(_v[i].getAlpha());
            EdgeColorArray += "'" + _v[i].getColor() + "'";
        }
    }
    EdgeArray += "]";
    EdgeWidthArray += "]";
    EdgeAlphaArray += "]";
    EdgeColorArray += "]";
    res.EdgeArray = EdgeArray;
    res.EdgeWidthArray = EdgeWidthArray;
    res.EdgeAlphaArray = EdgeAlphaArray;
    res.EdgeColorArray = EdgeColorArray;
    return res;
}

pyplot_cpp::converter::NodeArray pyplot_cpp::converter::vectorToPythonArray(const std::vector<Node> &_v) {
    NodeArray res;
    std::string nodeArray = "[";
    std::string nodeSizeArray = "[";
    std::string nodeColorArray = "[";
    std::string nodeAlphaArray = "[";
    if (!_v.empty()) {
        for (int i = 0; i < _v.size(); ++i) {
            if (i != 0) {
                nodeArray += ", ";
                nodeSizeArray += ", ";
                nodeColorArray += ", ";
                nodeAlphaArray += ", ";
            }
            nodeArray += _v[i].getValue();
            nodeSizeArray += std::to_string(_v[i].getNodeSize());
            nodeColorArray += "'" + _v[i].getColor() + "'";
            nodeAlphaArray += std::to_string(_v[i].getAlpha());
        }
    }
    nodeArray += "]";
    nodeSizeArray += "]";
    nodeColorArray += "]";
    nodeAlphaArray += "]";
    res.nodeArray = nodeArray;
    res.nodeSizeArray = nodeSizeArray;
    res.nodeColorArray = nodeColorArray;
    res.nodeAlphaArray = nodeAlphaArray;
    return res;
}