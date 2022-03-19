//
// Created by calebcintary on 3/15/22.
//

#ifndef PYPLOT_CPP_PLOT_HPP
#define PYPLOT_CPP_PLOT_HPP

#include "BasePlot.hpp"

namespace pyplot_cpp {
    class Plot : public BasePlot {
    public:

        Plot();

        /**
         * Creates simple plots with data
         * @param _x
         * @param _y
         */
        Plot(std::vector<double> _x, std::vector<double> _y);

        Plot(Plot const & plot);

        void dynamicScript_show_stringConstruct() override;
    };
}



#endif //PYPLOT_CPP_PLOT_HPP
