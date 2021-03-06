//
// Created by Johnson, Chase on 12/10/16.
//

#ifndef HFDP_CURRENTCONDITIONDISPLAY_H
#define HFDP_CURRENTCONDITIONDISPLAY_H


#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class CurrentConditionDisplay: public Observer, public DisplayElement {
public:
    CurrentConditionDisplay(WeatherData * weatherData);

    void update(float temperature, float humidity, float pressure) override;

    void display() override;

private:
    float temperature;
    float humidity;
    WeatherData * weatherData;
};


#endif //HFDP_CURRENTCONDITIONDISPLAY_H
