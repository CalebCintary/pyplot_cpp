//
// Created by lavr4 on 3/24/2022.
//

#ifndef PYPLOT_CPP_DIGRAPH_HPP
#define PYPLOT_CPP_DIGRAPH_HPP

#include "BaseGraph.hpp"

namespace pyplot_cpp {
    class DiGraph : public BaseGraph {
    protected:
        void dynamicScript_Configuration() override;
    };
}

#endif //PYPLOT_CPP_DIGRAPH_HPP
