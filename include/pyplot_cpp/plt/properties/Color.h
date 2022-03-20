//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_COLOR_H
#define PYPLOT_CPP_COLOR_H

#include "../Property.hpp"

#define COLOR pyplot_cpp::plt::Color

namespace pyplot_cpp {
    namespace plt {
        class Color : public Property {
        public:
            Color(const std::string &value);

            const static Color MAROON;
            const static Color BLUE;
            const static Color ORANGE;

        };


    }
}



#endif //PYPLOT_CPP_COLOR_H
