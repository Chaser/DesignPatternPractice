//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_HOUSEBLEN_H
#define HFDP_HOUSEBLEN_H


#include "Beverage.h"

class HouseBlend: public Beverage {
public:
    HouseBlend();
    double cost() override;
};


#endif //HFDP_HOUSEBLEN_H
