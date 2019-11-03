//
// Created by Johnson, Chase on 03/11/2019.
//

#ifndef HFDP_OBSERVERPATTERNS_H
#define HFDP_OBSERVERPATTERNS_H

#include <iostream>
#include "weather/WeatherStation.h"
#include "weather/WeatherStationHeatIndex.h"

class ObserverPatterns {
public:
    static void execute() {
        std::cout << "### Observer Patterns ###" << std::endl;
        WeatherStation();
        WeatherStationHeatIndex();
    }
};


#endif //HFDP_OBSERVERPATTERNS_H
