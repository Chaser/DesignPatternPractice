#include <iostream>
#include "strategy/MiniDuckSimulator.h"
#include "observer/WeatherStation.h"
#include "observer/WeatherStationHeatIndex.h"
#include "decorator/StarbuzzCoffee.h"

int main() {
    // Strategy Patterns;
    std::cout << "### Strategy Patterns ###" << std::endl;
    MiniDuckSimulator();

    // Observer Patterns
    std::cout << "### Observer Patterns ###" << std::endl;
    WeatherStation();
    WeatherStationHeatIndex();

    // Decorator Patterns
    std::cout << "### Decorator Pattern ###" << std::endl;
    StarbuzzCoffee();
    return 0;
}