//
// Created by Johnson, Chase on 03/11/2019.
//

#ifndef HFDP_DECORATORPATTERNS_H
#define HFDP_DECORATORPATTERNS_H

#include <iostream>
#include "starbuz/StarbuzzCoffee.h"

class DecoratorPatterns {
public:
    static void execute() {
        std::cout << "### Decorator Pattern ###" << std::endl;
        StarbuzzCoffee();
    }
};


#endif //HFDP_DECORATORPATTERNS_H
