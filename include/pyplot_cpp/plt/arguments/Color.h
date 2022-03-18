//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_COLOR_H
#define PYPLOT_CPP_COLOR_H

#include "../Argument.h"


namespace pyplot_cpp {
    namespace plt {
        class Color : public Argument {
        public:
            Color(const std::string &name, const std::string &value);

            std::string getStringPresentation() override;
        };
    }
}


#endif //PYPLOT_CPP_COLOR_H
