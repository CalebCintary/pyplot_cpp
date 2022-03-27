//
// Created by calebcintary on 3/27/22.
//

#ifndef PYPLOT_CPP_MULTIPLETRISURFPLOT_HPP
#define PYPLOT_CPP_MULTIPLETRISURFPLOT_HPP

#include "BasePlot3D.hpp"
#include "TrisurfPlot.hpp"

namespace pyplot_cpp {
    class MultipleTrisurfPlot : public BasePlot3D {
    private:
        void addPoint(double _x, double _y, double _z) override;

        void setData(std::vector<double> _x, std::vector<double> _y, std::vector<double> _z) override;

        void appendData(std::vector<double> _x, std::vector<double> _y, std::vector<double> _z) override;

    protected:
        std::vector<TrisurfPlot> shelf;

        void dynamicScript_Configuration() override;

    public:

        void addPlot(TrisurfPlot plot);
    };
}



#endif //PYPLOT_CPP_MULTIPLETRISURFPLOT_HPP
