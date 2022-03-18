//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_COLOR_H
#define PYPLOT_CPP_COLOR_H

#include "../Property.h"


namespace pyplot_cpp {
    namespace plt {
        class Color : public Property {
        public:
            Color(const std::string &value);
        };
    }
}


#endif //PYPLOT_CPP_COLOR_H
