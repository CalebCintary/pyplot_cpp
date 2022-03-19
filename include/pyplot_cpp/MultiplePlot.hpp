//
// Created by calebcintary on 3/18/22.
//

#ifndef PYPLOT_CPP_MULTIPLEPLOT_HPP
#define PYPLOT_CPP_MULTIPLEPLOT_HPP

#include "Showable.hpp"
#include "Plot.hpp"
#include "BasePlot.hpp"

namespace pyplot_cpp {
    class MultiplePlot : public BasePlot {
    private:
        std::vector<Plot> plots;
        std::vector<std::string> legends;
        int legends_count;

    public:

        void addPlot(Plot plot);

        void addPlot(Plot plot, std::string legend);

    protected:
        void dynamicScript_show_stringConstruct() override;
    };
}





#endif //PYPLOT_CPP_MULTIPLEPLOT_HPP
