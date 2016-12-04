cmake_minimum_required(VERSION 3.6)
project(hfdp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/strategy/MiniDuckSimulator.cpp src/strategy/MiniDuckSimulator.h src/strategy/QuackBehaviour.h src/strategy/FlyBehaviour.h src/strategy/Duck.cpp src/strategy/Duck.h src/strategy/FakeQuack.cpp src/strategy/FakeQuack.h src/strategy/FlyNoWay.cpp src/strategy/FlyNoWay.h src/strategy/FlyRocketPowered.cpp src/strategy/FlyRocketPowered.h src/strategy/FlyWithWings.cpp src/strategy/FlyWithWings.h src/strategy/MallardDuck.cpp src/strategy/MallardDuck.h src/strategy/ModelDuck.cpp src/strategy/ModelDuck.h src/strategy/MuteQuack.cpp src/strategy/MuteQuack.h src/strategy/Quack.cpp src/strategy/Quack.h src/strategy/RubberDuck.cpp src/strategy/RubberDuck.h src/strategy/Squeak.cpp src/strategy/Squeak.h src/strategy/DecoyDuck.cpp src/strategy/DecoyDuck.h)
add_executable(hfdp ${SOURCE_FILES})