//
// Created by Johnson, Chase on 12/10/16.
//

#ifndef HFDP_HEATINDEXDISPLAY_H
#define HFDP_HEATINDEXDISPLAY_H


#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class HeatIndexDisplay: public Observer, public DisplayElement {
public:
    HeatIndexDisplay(WeatherData * weatherData);

    void update(float temperature, float humidity, float pressure) override;

    float computeHeatIndex(float temperature, float humidity);

    void display() override;
private:
    float heatIndex = 0;
    WeatherData * weatherData;
};


#endif //HFDP_HEATINDEXDISPLAY_H
