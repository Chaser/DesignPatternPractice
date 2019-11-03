//
// Created by Johnson, Chase on 12/10/16.
//

#ifndef HFDP_FORECASTDISPLAY_H
#define HFDP_FORECASTDISPLAY_H


#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class ForecastDisplay: public Observer, public DisplayElement {
public:
    ForecastDisplay(WeatherData * weatherData);

    void display() override;

    void update(float temperature, float humidity, float pressure) override;

private:
    float currentPressure = 29.92;
    float lastPressure;
    WeatherData * weatherData;

};


#endif //HFDP_FORECASTDISPLAY_H
