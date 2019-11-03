//
// Created by Johnson, Chase on 12/10/16.
//

#ifndef HFDP_STATISTICSDISPLAY_H
#define HFDP_STATISTICSDISPLAY_H


#include "WeatherData.h"
#include "DisplayElement.h"

class StatisticsDisplay: public Observer, public DisplayElement {
public:
    StatisticsDisplay(WeatherData * weatherData);

    void display() override;

    void update(float temperature, float humidity, float pressure) override;

private:
    float maxTemp = 0.0;
    float minTemp = 200;
    float tempSum = 0;
    int numReadings = 0;
    WeatherData * weatherData;
};


#endif //HFDP_STATISTICSDISPLAY_H
