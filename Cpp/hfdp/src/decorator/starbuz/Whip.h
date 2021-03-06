//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_WHIP_H
#define HFDP_WHIP_H

#include "CondimentDecorator.h"

class Whip: public CondimentDecorator {
public:
    Whip(Beverage * beverage);
    std::string getDescription() override;
    double cost() override;

private:
    Beverage * beverage;

};


#endif //HFDP_WHIP_H
