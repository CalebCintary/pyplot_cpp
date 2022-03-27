//
// Created by calebcintary on 3/15/22.
//

#ifndef PYPLOT_CPP_BASEPLOT3D_HPP
#define PYPLOT_CPP_BASEPLOT3D_HPP

#include <vector>

#include "Showable.hpp"
#include "Axisable.hpp"

namespace pyplot_cpp {
    class BasePlot3D : public Showable, public Axisable {
    protected:
        // Data
        std::vector<double> x;
        std::vector<double> y;
        std::vector<double> z;

        std::string zlabel;

        void dynamicScript_Import() override;

        void dynamicScript_PostConfiguration() override;

    public:

        virtual void addPoint(double _x, double _y, double _z);

        virtual void setData(std::vector<double> _x,
                             std::vector<double> _y,
                             std::vector<double> _z);

        virtual void appendData(std::vector<double> _x,
                                std::vector<double> _y,
                                std::vector<double> _z);

        void setZlabel(const std::string &zlabel);

        const std::vector<double> &getX() const;

        const std::vector<double> &getY() const;

        const std::vector<double> &getZ() const;


    };
}



#endif //PYPLOT_CPP_BASEPLOT3D_HPP
