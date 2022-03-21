//
// Created by calebcintary on 3/21/22.
//

#ifndef PYPLOT_CPP_AXISABLE_HPP
#define PYPLOT_CPP_AXISABLE_HPP

#include <string>

namespace pyplot_cpp {

    class Axisable {

    protected:
        std::string xlabel = "";
        std::string ylabel = "";
    public:
        void setXlabel(const std::string &xlabel);

        void setYlabel(const std::string &ylabel);
    };

}


#endif //PYPLOT_CPP_AXISABLE_HPP
