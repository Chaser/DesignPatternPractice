//
// Created by Johnson, Chase on 06/10/2019.
//
#include <iostream>
#include "MotorProxySimulator.h"
#include "MotorProxy.h"

void MotorProxySimulator(void) {
    std::cout << "= MotorProxySimulator =" << std::endl;
    MotorProxy motor = MotorProxy();
    unsigned int motorData = 0;
    motor.configure(10, &motorData);

}
