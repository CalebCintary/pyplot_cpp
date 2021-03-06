//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_BAR_HPP
#define PYPLOT_CPP_BAR_HPP

#include <map>
#include <vector>

#include "BasePlot.hpp"
#include "plt/Property.hpp"

namespace pyplot_cpp {
    class Bar : public BasePlot {
    private:
        void addPoint(std::pair<double, double> _p) override;

        void addPoint(double _x, double _y) override;

        void setData(std::vector<double> _x, std::vector<double> _y) override;

        void appendData(std::vector<double> _x, std::vector<double> _y) override;

    protected:
        void dynamicScript_Configuration() override;

        std::map<std::string, double> _map;

    public:

        Bar() = default;

        explicit Bar(std::map<std::string, double> map);

        void setData(std::map<std::string, double> map);

        void appendData(const std::map<std::string, double>& map);

        void appendData(const std::string& _x, const double &_y);


    };
}




#endif //PYPLOT_CPP_BAR_HPP
