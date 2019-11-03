//
// Created by Johnson, Chase on 12/10/16.
//

#include <iostream>
#include "WeatherStation.h"
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "ForecastDisplay.h"
#include "StatisticsDisplay.h"


void WeatherStation(void) {
    WeatherData weatherData;
    CurrentConditionDisplay currentConditionDisplay = CurrentConditionDisplay(&weatherData);
    ForecastDisplay forecastDisplay = ForecastDisplay(&weatherData);
    StatisticsDisplay statisticsDisplay = StatisticsDisplay(&weatherData);

    std::cout << "=========== Weather Station ===========" << std::endl;
    weatherData.setMeasurements(80, 65, 30.4);
    weatherData.setMeasurements(82, 70, 29.2);
    weatherData.setMeasurements(78, 90, 29.2);
}