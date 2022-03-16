#ifndef PYPLOT_CPP_BASEPLOT_HPP
#define PYPLOT_CPP_BASEPLOT_HPP

#include "Showable.hpp"
#include "python/PythonScript.hpp"

namespace pyplot_cpp {
    class BasePlot : public Showable {
    protected:
        std::vector<double> x;
        std::vector<double> y;

        std::string xlabel = "";
        std::string ylabel = "";
        std::string title = "";



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
        virtual void setPlotData(std::vector<double> _x, std::vector<double> _y);

        /**
         * Sets title to your plot
         * @param _title
         */
        void setTitle(const std::string& _title);

        void setXlabel(const std::string &xlabel);

        void setYlabel(const std::string &ylabel);

        /**
         * Copies data from your vectors to plot by merging with existing data.
         * @param _x
         * @param _y
         */
        virtual void mergePlotData(std::vector<double> _x, std::vector<double> _y);
    };
}



#endif //PYPLOT_CPP_BASEPLOT_HPP
