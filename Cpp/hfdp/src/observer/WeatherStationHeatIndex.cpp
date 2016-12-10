//
// Created by Johnson, Chase on 12/10/16.
//

#include <iostream>
#include "WeatherStationHeatIndex.h"
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "ForecastDisplay.h"
#include "StatisticsDisplay.h"
#include "HeatIndexDisplay.h"


void WeatherStationHeatIndex(void) {
    WeatherData weatherData;
    CurrentConditionDisplay currentConditionDisplay = CurrentConditionDisplay(&weatherData);
    ForecastDisplay forecastDisplay = ForecastDisplay(&weatherData);
    StatisticsDisplay statisticsDisplay = StatisticsDisplay(&weatherData);
    HeatIndexDisplay heatIndexDisplay = HeatIndexDisplay(&weatherData);

    std::cout << "========= Weather Station Heat Index =========" << std::endl;
    weatherData.setMeasurements(80, 65, 30.4);
    weatherData.setMeasurements(82, 70, 29.2);
    weatherData.setMeasurements(78, 90, 29.2);
}