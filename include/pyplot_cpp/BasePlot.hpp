#ifndef PYPLOT_CPP_BASEPLOT_HPP
#define PYPLOT_CPP_BASEPLOT_HPP

#include <map>

#include "Showable.hpp"
#include "python/PythonScript.hpp"
#include "plt/Properties.hpp"
#include "Axisable.hpp"

namespace pyplot_cpp {
class BasePlot : public Showable, public Axisable {
protected:

    std::vector<double> x;
    std::vector<double> y;



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

protected:
    void dynamicScript_PostConfiguration() override;

    void dynamicScript_Import() override;
};
}



#endif //PYPLOT_CPP_BASEPLOT_HPP
