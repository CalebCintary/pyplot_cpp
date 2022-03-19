#ifndef PYPLOT_CPP_BASEPLOT_HPP
#define PYPLOT_CPP_BASEPLOT_HPP

#include <map>

#include "Showable.hpp"
#include "python/PythonScript.hpp"
#include "plt/Properties.h"

namespace pyplot_cpp {
class BasePlot : public Showable {
protected:

    std::vector<double> x;
    std::vector<double> y;

    std::string xlabel = "";
    std::string ylabel = "";
    std::string title = "";

    std::map<std::string, plt::Property> args;

public:
        BasePlot();

        /**
         * Adds point to plot
         * @param _p
         */
        virtual void addPoint(std::pair<double, double> _p);

        /**
         * Adds point to plot
         * @param _p
         */
        virtual void addPoint(double _x, double _y);

        /**
         * Sets data that you already have to plot.
         * @param _x
         * @param _y
         */
        virtual void setData(std::vector<double> _x, std::vector<double> _y);

        /**
         * Sets title to your plot
         * @param _title
         */
        void setTitle(const std::string& _title);

        void setXlabel(const std::string &xlabel);

        void setYlabel(const std::string &ylabel);

        void addArgument(const plt::Property& argument);

        void setColor(plt::Color color);

        /**
         * Copies data from your vectors to plot by merging with existing data.
         * @param _x
         * @param _y
         */
        virtual void appendData(std::vector<double> _x, std::vector<double> _y);

        const std::vector<double> &getX() const;

        const std::vector<double> &getY() const;

    const std::map<std::string, plt::Property> &getArgs() const;
};
}



#endif //PYPLOT_CPP_BASEPLOT_HPP
