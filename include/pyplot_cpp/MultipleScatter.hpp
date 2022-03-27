//
// Created by calebcintary on 3/27/22.
//

#ifndef PYPLOT_CPP_MULTIPLESCATTER_HPP
#define PYPLOT_CPP_MULTIPLESCATTER_HPP

#include "BasePlot.hpp"
#include "Scatter.hpp"

namespace pyplot_cpp {
    class MultipleScatter : public BasePlot {
    private:
        void addPoint(std::pair<double, double> _p) override;

        void addPoint(double _x, double _y) override;

        void setData(std::vector<double> _x, std::vector<double> _y) override;

        void appendData(std::vector<double> _x, std::vector<double> _y) override;

    protected:
        std::vector<Scatter> shelf;

        void dynamicScript_Configuration() override;

    public:
        void addPlot(Scatter plot);

    };
}

#endif //PYPLOT_CPP_MULTIPLESCATTER_HPP
