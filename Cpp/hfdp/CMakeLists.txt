cmake_minimum_required(VERSION 3.6)
project(hfdp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/strategy/MiniDuckSimulator.cpp src/strategy/MiniDuckSimulator.h src/strategy/QuackBehaviour.h src/strategy/FlyBehaviour.h src/strategy/Duck.cpp src/strategy/Duck.h src/strategy/FakeQuack.cpp src/strategy/FakeQuack.h src/strategy/FlyNoWay.cpp src/strategy/FlyNoWay.h src/strategy/FlyRocketPowered.cpp src/strategy/FlyRocketPowered.h src/strategy/FlyWithWings.cpp src/strategy/FlyWithWings.h src/strategy/MallardDuck.cpp src/strategy/MallardDuck.h src/strategy/ModelDuck.cpp src/strategy/ModelDuck.h src/strategy/MuteQuack.cpp src/strategy/MuteQuack.h src/strategy/Quack.cpp src/strategy/Quack.h src/strategy/RubberDuck.cpp src/strategy/RubberDuck.h src/strategy/Squeak.cpp src/strategy/Squeak.h src/strategy/DecoyDuck.cpp src/strategy/DecoyDuck.h src/strategy/RedHeadDuck.cpp src/strategy/RedHeadDuck.h src/observer/Subject.h src/observer/Observer.h src/observer/DisplayElement.h src/observer/WeatherData.cpp src/observer/WeatherData.h src/observer/CurrentConditionDisplay.cpp src/observer/CurrentConditionDisplay.h src/observer/WeatherStation.cpp src/observer/WeatherStation.h src/observer/ForecastDisplay.cpp src/observer/ForecastDisplay.h src/observer/HeatIndexDisplay.cpp src/observer/HeatIndexDisplay.h src/observer/StatisticsDisplay.cpp src/observer/StatisticsDisplay.h src/observer/WeatherStationHeatIndex.cpp src/observer/WeatherStationHeatIndex.h src/decorator/Beverage.h src/decorator/CondimentDecorator.h src/decorator/StarbuzCoffee.cpp src/decorator/StarbuzzCoffee.h src/decorator/HouseBlend.cpp src/decorator/HouseBlend.h src/decorator/DarkRoast.cpp src/decorator/DarkRoast.h src/decorator/Espresso.cpp src/decorator/Espresso.h src/decorator/Decaf.cpp src/decorator/Decaf.h src/decorator/Milk.cpp src/decorator/Milk.h src/decorator/Mocha.cpp src/decorator/Mocha.h src/decorator/Soy.cpp src/decorator/Soy.h src/decorator/Whip.cpp src/decorator/Whip.h)


add_executable(hfdp ${SOURCE_FILES})
add_custom_target(run
    COMMAND hfdp
    DEPENDS hfdp
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
