cmake_minimum_required(VERSION 3.6)
project(hfdp)

set(CMAKE_CXX_STANDARD 11)

include_directories( ${CMAKE_PROJECT_DIR}/src/)

set(STRATEGY src/strategy/ducks/MiniDuckSimulator.cpp src/strategy/ducks/Duck.cpp src/strategy/ducks/FakeQuack.cpp src/strategy/ducks/FlyNoWay.cpp src/strategy/ducks/FlyRocketPowered.cpp src/strategy/ducks/FlyWithWings.cpp src/strategy/ducks/MallardDuck.cpp src/strategy/ducks/ModelDuck.cpp src/strategy/ducks/MuteQuack.cpp src/strategy/ducks/Quack.cpp src/strategy/ducks/RubberDuck.cpp src/strategy/ducks/Squeak.cpp src/strategy/ducks/DecoyDuck.cpp src/strategy/ducks/RedHeadDuck.cpp)
set(OBSERVER src/observer/weather/WeatherData.cpp src/observer/weather/CurrentConditionDisplay.cpp src/observer/weather/WeatherStation.cpp src/observer/weather/ForecastDisplay.cpp src/observer/weather/HeatIndexDisplay.cpp src/observer/weather/StatisticsDisplay.cpp src/observer/weather/WeatherStationHeatIndex.cpp)
set(DECORATOR
        src/decorator/starbuz/StarbuzCoffee.cpp
        src/decorator/starbuz/HouseBlend.cpp
        src/decorator/starbuz/DarkRoast.cpp
        src/decorator/starbuz/Espresso.cpp
        src/decorator/starbuz/Decaf.cpp
        src/decorator/starbuz/Milk.cpp
        src/decorator/starbuz/Mocha.cpp
        src/decorator/starbuz/Soy.cpp
        src/decorator/starbuz/Whip.cpp
)

set(FACTORY
        src/factory/simple_factory/PizzaTestDrive.cpp
        src/factory/simple_factory/Pizza.cpp
)

set(STATE

)

set(SOURCE_FILES src/main.cpp ${STRATEGY} ${OBSERVER} ${DECORATOR} ${FACTORY} ${STATE})

add_executable(hfdp ${SOURCE_FILES})
add_custom_target(run
    COMMAND hfdp
    DEPENDS hfdp
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
