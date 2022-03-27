//
// Created by calebcintary on 3/27/22.
//

#ifndef PYPLOT_CPP_TRISURFPLOT_HPP
#define PYPLOT_CPP_TRISURFPLOT_HPP

#include "BasePlot3D.hpp"

namespace pyplot_cpp {
    class TrisurfPlot : public BasePlot3D {
    protected:
        void dynamicScript_Configuration() override;
    };
}



#endif //PYPLOT_CPP_TRISURFPLOT_HPP
