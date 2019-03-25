cmake_minimum_required(VERSION 3.6)
project(hfdp)

set(CMAKE_CXX_STANDARD 11)

include_directories( ${CMAKE_PROJECT_DIR}/src/)

set(STRATEGY src/strategy/MiniDuckSimulator.cpp src/strategy/Duck.cpp src/strategy/FakeQuack.cpp src/strategy/FlyNoWay.cpp src/strategy/FlyRocketPowered.cpp src/strategy/FlyWithWings.cpp src/strategy/MallardDuck.cpp src/strategy/ModelDuck.cpp src/strategy/MuteQuack.cpp src/strategy/Quack.cpp src/strategy/RubberDuck.cpp src/strategy/Squeak.cpp src/strategy/DecoyDuck.cpp src/strategy/RedHeadDuck.cpp)
set(OBSERVER src/observer/WeatherData.cpp src/observer/CurrentConditionDisplay.cpp src/observer/WeatherStation.cpp src/observer/ForecastDisplay.cpp src/observer/HeatIndexDisplay.cpp src/observer/StatisticsDisplay.cpp src/observer/WeatherStationHeatIndex.cpp)
set(DECORATOR src/decorator/StarbuzCoffee.cpp src/decorator/HouseBlend.cpp src/decorator/DarkRoast.cpp src/decorator/Espresso.cpp src/decorator/Decaf.cpp src/decorator/Milk.cpp src/decorator/Mocha.cpp src/decorator/Soy.cpp src/decorator/Whip.cpp)
set(SOURCE_FILES src/main.cpp  ${STRATEGY} ${OBSERVER} ${DECORATOR})


add_executable(hfdp ${SOURCE_FILES})
add_custom_target(run
    COMMAND hfdp
    DEPENDS hfdp
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
