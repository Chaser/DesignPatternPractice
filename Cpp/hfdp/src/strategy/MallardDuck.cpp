//
// Created by Johnson, Chase on 12/4/16.
//

#include <iostream>
#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck() {
    this->setFlyBehaviour(new FlyWithWings());
    this->setQuackBehaviour(new Quack());
}

void MallardDuck::display() {
    std::cout << "I'm a real Mallard Duck" << std::endl;
}
