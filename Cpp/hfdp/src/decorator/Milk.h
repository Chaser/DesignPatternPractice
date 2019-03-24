//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_MILK_H
#define HFDP_MILK_H

#include "CondimentDecorator.h"

class Milk: public CondimentDecorator {
public:
    Milk(Beverage * beverage);
    virtual std::string getDescription() override;
    double cost() override;

private:
    Beverage * beverage;

};


#endif //HFDP_MILK_H
