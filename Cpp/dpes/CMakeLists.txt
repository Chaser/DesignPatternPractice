cmake_minimum_required(VERSION 3.15)
project(dpes)

set(CMAKE_CXX_STANDARD 14)

include_directories( ${CMAKE_PROJECT_DIR}/src/)
set(HW_PROXY
        src/hardware/proxy/MotorProxy.cpp
        src/hardware/proxy/MotorData.cpp
        src/hardware/proxy/MotorProxySimulator.cpp)

set(SOURCE_FILES src/main.cpp ${HW_PROXY})

add_executable(dpes ${SOURCE_FILES})