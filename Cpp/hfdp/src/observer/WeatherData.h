//
// Created by Johnson, Chase on 12/10/16.
//

#ifndef HFDP_WEATHERDATA_H
#define HFDP_WEATHERDATA_H


#include <vector>
#include "Subject.h"

class WeatherData: public Subject {
public:
    WeatherData();

    void registerObserver(Observer * observer) override;

    void removeObserver(Observer * observer) override;

    void notifyObservers(void) override;

    void measurementsChanged(void);

    void setMeasurements(float temperature, float humidity, float pressure);

    float getTemperature(void);

    float getHumidity(void);

    float getPressure(void);

private:
    std::vector<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;

};


#endif //HFDP_WEATHERDATA_H
