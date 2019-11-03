//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_MOCHA_H
#define HFDP_MOCHA_H

#include "CondimentDecorator.h"

class Mocha: public CondimentDecorator {
public:
    Mocha(Beverage * beverage);
    virtual std::string getDescription() override;
    double cost() override;

private:
    Beverage * beverage;

};


#endif //HFDP_MOCHA_H
