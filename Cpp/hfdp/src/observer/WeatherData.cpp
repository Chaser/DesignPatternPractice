//
// Created by Johnson, Chase on 12/10/16.
//

#include "WeatherData.h"

WeatherData::WeatherData() {
    this->observers.clear();
}

void WeatherData::registerObserver(Observer *observer) {
    this->observers.insert(this->observers.end(), observer);
}

void WeatherData::removeObserver(Observer *observer) {
    // TODO (chaseaj) : Look into examining vector;
}

void WeatherData::notifyObservers(void) {
    for(int i = 0; i < this->observers.size(); i++) {
        Observer * observer = this->observers[i];
        observer->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged(void) {
    this->notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    this->measurementsChanged();
}

float WeatherData::getTemperature(void) {
    return this->temperature;
}

float WeatherData::getHumidity(void) {
    return this->humidity;
}

float WeatherData::getPressure(void) {
    return this->pressure;
}
