//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_DECAF_H
#define HFDP_DECAF_H


#include "Beverage.h"

class Decaf: public Beverage  {
public:
    Decaf();
    double cost() override;
};


#endif //HFDP_DECAF_H
