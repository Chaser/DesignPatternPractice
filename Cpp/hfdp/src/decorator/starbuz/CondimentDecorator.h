//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_CONDIMENTDECORATOR_H
#define HFDP_CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator: public Beverage {
public:
    virtual std::string getDescription() = 0;
};

#endif //HFDP_CONDIMENTDECORATOR_H
