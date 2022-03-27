//
// Created by calebcintary on 3/27/22.
//

#ifndef PYPLOT_CPP_WIREFRAMEPLOT_HPP
#define PYPLOT_CPP_WIREFRAMEPLOT_HPP

#include "Axisable.hpp"
#include "Showable.hpp"

#include <vector>

#define array_2dd std::vector<std::vector<double>>

namespace pyplot_cpp {
    class WireframePlot : public Showable, public Axisable {
    protected:

        array_2dd x;
        array_2dd y;
        array_2dd z;

        std::string zlabel;

        void dynamicScript_Configuration() override;

        void dynamicScript_Import() override;

        void dynamicScript_PostConfiguration() override;

    public:

        virtual void setData(array_2dd _x, array_2dd _y, array_2dd _z);


    };
}



#endif //PYPLOT_CPP_WIREFRAMEPLOT_HPP
