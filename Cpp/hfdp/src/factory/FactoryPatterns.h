//
// Created by Johnson, Chase on 03/11/2019.
//

#ifndef HFDP_FACTORYPATTERNS_H
#define HFDP_FACTORYPATTERNS_H

#include <iostream>
#include "simple_factory/PizzaTestDrive.h"

class FactoryPatterns {
public:
    static void execute() {
        std::cout << "### Factory Patterns ###" << std::endl;
        SimpleFactory::PizzaTestDrive();
    }
};


#endif //HFDP_FACTORYPATTERNS_H
