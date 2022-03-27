//
// Created by calebcintary on 3/27/22.
//

#ifndef PYPLOT_CPP_PLOT3D_H
#define PYPLOT_CPP_PLOT3D_H

#include "BasePlot3D.hpp"

namespace pyplot_cpp {
    class Plot3D : public BasePlot3D {
    protected:
        void dynamicScript_Configuration() override;
    };

}


#endif //PYPLOT_CPP_PLOT3D_H
