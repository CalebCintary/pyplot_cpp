//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_ARGUMENT_H
#define PYPLOT_CPP_ARGUMENT_H

#include <string>
#include <vector>

namespace pyplot_cpp {
    namespace plt {

        enum ArgumentType {
            STRING,
            INT
        };

        class Argument {
        private:
            std::string name;
            std::string value;

            ArgumentType type;

        protected:

        public:
            void setName(const std::string &name);

            void setValue(const std::string &value);

            void setType(ArgumentType type);

        public:

            Argument(std::string name, std::string value, ArgumentType type);

            Argument(std::string name, std::string value);

            const std::string &getName() const;

            const std::string &getValue() const;

            ArgumentType getType() const;

            virtual std::string getStringPresentation() = 0;

        };

        std::string parseArguments(std::vector<Argument> args);
    }
}




#endif //PYPLOT_CPP_ARGUMENT_H
