//
// Created by Johnson, Chase on 12/10/16.
//

#include <iostream>
#include "ForecastDisplay.h"
#include "WeatherData.h"

ForecastDisplay::ForecastDisplay(WeatherData * weatherData) {
    this->weatherData = weatherData;
    this->weatherData->registerObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure) {
    lastPressure = currentPressure;
    currentPressure = pressure;
    display();
}


void ForecastDisplay::display() {
    std::cout << "Forecast: ";
    if (currentPressure > lastPressure) {
        std::cout << "Improving weather on the way!" << std::endl;
    }
    else if (currentPressure == lastPressure) {
        std::cout << "More of the same" << std::endl;
    }
    else if (currentPressure < lastPressure) {
        std::cout << "Watch out for cooler, rainy weather" << std::endl;
    }
}


