//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_ESPRESSO_H
#define HFDP_ESPRESSO_H


#include "Beverage.h"

class Espresso: public Beverage {
public:
    Espresso();
    double cost() override;
};


#endif //HFDP_ESPRESSO_H
