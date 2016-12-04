//
// Created by Johnson, Chase on 12/4/16.
//

#include <iostream>
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"


DecoyDuck::DecoyDuck() {
    this->setFlyBehaviour(new FlyNoWay());
    this->setQuackBehaviour(new MuteQuack());
}

void DecoyDuck::display() {
    std::cout << "I'm a duck decoy" << std::endl;
}


