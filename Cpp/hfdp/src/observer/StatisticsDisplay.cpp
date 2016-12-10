//
// Created by Johnson, Chase on 12/10/16.
//

#include <iostream>
#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(WeatherData * weatherData) {
    this->weatherData = weatherData;
    this->weatherData->registerObserver(this);
}


void StatisticsDisplay::update(float temperature, float humidity, float pressure) {
    tempSum += temperature;
    numReadings++;

    if(temperature > maxTemp) {
        maxTemp = temperature;
    }

    if(temperature < minTemp) {
        minTemp = temperature;
    }

    display();
}

void StatisticsDisplay::display() {
    std::cout << "Avg/Max/min temperature: " << (tempSum/numReadings) <<
              "/" << maxTemp << "/" << minTemp << std::endl;
}

