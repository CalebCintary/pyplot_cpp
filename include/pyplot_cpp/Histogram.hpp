//
// Created by calebcintary on 3/19/22.
//

#ifndef PYPLOT_CPP_HISTOGRAM_HPP
#define PYPLOT_CPP_HISTOGRAM_HPP

#include "pyplot_cpp/BasePlot.hpp"

namespace pyplot_cpp {
    class Histogram : public BasePlot {
    private: // Muted methods
        void addPoint(std::pair<double, double> _p) override;

        void addPoint(double _x, double _y) override;

        void setData(std::vector<double> _x, std::vector<double> _y) override;

        void appendData(std::vector<double> _x, std::vector<double> _y) override;

    public:
        void setData(std::vector<double> data);

        void setBins(const std::vector<double> &bins);

        Histogram(Histogram const &hist);

        Histogram();

    protected:
        void dynamicScript_Configuration() override;

    };
}




#endif //PYPLOT_CPP_HISTOGRAM_HPP
