//
// Created by Johnson, Chase on 12/10/16.
//

#include <iostream>
#include "CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(WeatherData * weatherData) {
    this->weatherData = weatherData;
    this->weatherData->registerObserver(this);
}

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionDisplay::display() {
    std::cout << "Current Temperature: " << this->temperature
              << "F degrees and " << this->humidity << "% humidity" << std::endl;
}

