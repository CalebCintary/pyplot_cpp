# PyPlot_cpp

Simple library for displaying plots and graphs in c++

## Content table
- [PyPlot_cpp](#pyplot_cpp)
  - [Requirements](#requirements)
  - [Building](#building)
  - [Usage](#usage)

## Requirements

Firstly, with python script generation, you need to have python and matplotlib installed on your machine.
This library uses your system installed python, not venv.

## Building

This library builds with cmake. For testing you also need to install Boost with unit_test_framework.

## Usage

### Simplest 2D plot

To display simplest plot you need to code this.
```c++
#include "pyplot_cpp/Plot.hpp"

int main() {
    pyplot_cpp::Plot plot;
    plot.addPoint(1, 1);
    plot.addPoint(2, 4);
    plot.addPoint(3, 2);
    plot.show();
}
```

This will show you the simplest graph.