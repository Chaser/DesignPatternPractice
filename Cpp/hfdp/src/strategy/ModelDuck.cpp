//
// Created by Johnson, Chase on 12/4/16.
//

#include <iostream>
#include "ModelDuck.h"
#include "Quack.h"
#include "FlyNoWay.h"


ModelDuck::ModelDuck() {
    this->setFlyBehaviour(new FlyNoWay());
    this->setQuackBehaviour(new Quack());
}

void ModelDuck::display() {
    std::cout << "I'm a model duck" << std::endl;
}
