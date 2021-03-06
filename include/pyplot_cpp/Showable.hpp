//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_SHOWABLE_HPP
#define PYPLOT_CPP_SHOWABLE_HPP

#include <sstream>
#include <map>

#include "python/PythonScript.hpp"
#include "plt/Properties.hpp"

namespace pyplot_cpp {
    class Showable {
    protected:

        python::PythonScript script;

        std::string title = "";

        std::map<std::string, plt::Property> args;

        bool _tight_layout;

        // ----- < Scripting functions > -----

        virtual void dynamicScript_Import() = 0;

        virtual void dynamicScript_Configuration() = 0;

        virtual void dynamicScript_PostConfiguration() = 0;

        virtual void dynamicScript_CallOrder();

    public:

        /**
         * Sets title to your plot
         * @param _title
         */
        void setTitle(const std::string& _title);

        /**
         * Displays your plot
         * @param async
         */
        virtual void show(bool async = false);

        virtual void save(const std::string& path);

        void tight_layout(bool _v = true);

        void addProperty(const plt::Property& argument);

        const std::map<std::string, plt::Property> &getArgs() const;
    };
}




#endif //PYPLOT_CPP_SHOWABLE_HPP
