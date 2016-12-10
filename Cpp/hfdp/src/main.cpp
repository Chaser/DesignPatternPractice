#include <iostream>
#include "strategy/MiniDuckSimulator.h"
#include "observer/WeatherStation.h"
#include "observer/WeatherStationHeatIndex.h"

int main() {
    // Strategy Patterns;
    std::cout << "### Strategy Patterns ###" << std::endl;
    MiniDuckSimulator();

    // Observer Patterns
    std::cout << "### Observer Patterns ###" << std::endl;
    WeatherStation();
    WeatherStationHeatIndex();
    return 0;
}