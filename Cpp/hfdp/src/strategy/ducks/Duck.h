//
// Created by Johnson, Chase on 12/4/16.
//

#ifndef HFDP_DECOYDUCK_H
#define HFDP_DECOYDUCK_H

#include "FlyBehaviour.h"
#include "QuackBehaviour.h"

class Duck {
public:
    FlyBehaviour *flyBehaviour;
    QuackBehaviour *quackBehaviour;

    virtual void display() = 0;

    void performFly();

    void setFlyBehaviour(FlyBehaviour * fb);

    void performQuack();

    void setQuackBehaviour(QuackBehaviour * qb);
};


#endif //HFDP_DECOYDUCK_H
