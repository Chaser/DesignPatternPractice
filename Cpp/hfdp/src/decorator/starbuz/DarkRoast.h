//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_DARKROAST_H
#define HFDP_DARKROAST_H


#include "Beverage.h"

class DarkRoast: public Beverage {
public:
    DarkRoast();
    virtual double cost() override;
};


#endif //HFDP_DARKROAST_H
