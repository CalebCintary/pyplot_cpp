//
// Created by calebcintary on 3/20/22.
//

#ifndef PYPLOT_CPP_MULTIPLEHISTOGRAM_HPP
#define PYPLOT_CPP_MULTIPLEHISTOGRAM_HPP

#include "Histogram.hpp"
#include "BasePlot.hpp"

namespace pyplot_cpp {
    class MultipleHistogram : public BasePlot {
    private: // Muted functions
        void addPoint(std::pair<double, double> _p) override;

        void addPoint(double _x, double _y) override;

        void setData(std::vector<double> _x, std::vector<double> _y) override;

        void appendData(std::vector<double> _x, std::vector<double> _y) override;

    private:
        std::vector<Histogram> hists;
        std::vector<std::string> legends;

        int legend_count = 0;

    public:

        void addHist(Histogram hist);

        void addHist(Histogram hist, std::string legend);

    protected:
        void dynamicScript_Configuration() override;
    };
}




#endif //PYPLOT_CPP_MULTIPLEHISTOGRAM_HPP
