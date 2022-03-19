//
// Created by calebcintary on 3/17/22.
//

#ifndef PYPLOT_CPP_PROPERTY_H
#define PYPLOT_CPP_PROPERTY_H

#include <string>
#include <vector>
#include <map>

namespace pyplot_cpp {
    namespace plt {

        enum ArgumentType {
            STRING ,
            INT,
        };

        class Property {
        private:
            std::string name;
            std::string value;

            ArgumentType type;

        protected:
            void setName(const std::string &name);

            void setValue(const std::string &value);

            void setType(ArgumentType type);

        public:

            Property() = default;

            Property(std::string name, std::string value, ArgumentType type);

            Property(std::string name, std::string value);

            const std::string &getName() const;

            const std::string &getValue() const;

            ArgumentType getType() const;

            virtual std::string getStringPresentation() const;

        };

        std::string parseArguments(std::map<std::string, Property> args);
    }
}




#endif //PYPLOT_CPP_PROPERTY_H
