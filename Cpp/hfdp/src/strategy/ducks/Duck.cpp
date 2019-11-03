//
// Created by Johnson, Chase on 12/4/16.
//

#include "Duck.h"


void Duck::performFly() {
    flyBehaviour->fly();
}

void Duck::setFlyBehaviour(FlyBehaviour * fb) {
    flyBehaviour = fb;
}

void Duck::performQuack() {
    quackBehaviour->quack();
}

void Duck::setQuackBehaviour(QuackBehaviour * qb) {
    quackBehaviour = qb;
}
