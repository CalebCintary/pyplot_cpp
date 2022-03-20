//
// Created by calebcintary on 3/20/22.
//

#ifndef PYPLOT_CPP_SCATTER_HPP
#define PYPLOT_CPP_SCATTER_HPP

#include "BasePlot.hpp"

namespace pyplot_cpp {
    class Scatter : public BasePlot {
    protected:
        void dynamicScript_Configuration() override;
    };
}




#endif //PYPLOT_CPP_SCATTER_HPP
