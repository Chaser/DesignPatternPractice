//
// Created by Johnson, Chase on 12/4/16.
//

#include <iostream>
#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "Squeak.h"


RubberDuck::RubberDuck() {
    this->setFlyBehaviour(new FlyNoWay());
    this->setQuackBehaviour(new Squeak());
}

void RubberDuck::display() {
    std::cout << "I'm a rubber duckie" << std::endl;
}
