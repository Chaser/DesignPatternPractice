//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_SOY_H
#define HFDP_SOY_H

#include "CondimentDecorator.h"

class Soy: public CondimentDecorator {
public:
    Soy(Beverage * beverage);
    virtual std::string getDescription() override;
    double cost() override;

private:
    Beverage * beverage;

};


#endif //HFDP_SOY_H
