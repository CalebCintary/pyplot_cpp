//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_SHOWABLE_HPP
#define PYPLOT_CPP_SHOWABLE_HPP

#include <sstream>

#include "python/PythonScript.hpp"

namespace pyplot_cpp {
    class Showable {
    protected:

        python::PythonScript script;

        bool _tight_layout;

        /**
         * Displays your plot
         */
        virtual void dynamicScript_show_stringConstruct() = 0;
//        virtual void realTime_show() = 0;

    public:

        /**
         * Displays your plot
         * @param async
         */
        virtual void show(bool async = false);

        void tight_layout(bool _v = true);
    };
}




#endif //PYPLOT_CPP_SHOWABLE_HPP
