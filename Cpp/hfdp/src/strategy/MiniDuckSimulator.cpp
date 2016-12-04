//
// Created by Johnson, Chase on 12/4/16.
//

#include <iostream>
#include "MiniDuckSimulator.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

void MiniDuckSimulator(void) {
    MallardDuck mallardDuck;
    RubberDuck rubberDuck;
    DecoyDuck decoyDuck;
    ModelDuck modelDuck;

    std::cout << "=========================" << std::endl;
    mallardDuck.display();
    mallardDuck.performQuack();
    mallardDuck.performFly();

    std::cout << "=========================" << std::endl;
    rubberDuck.display();
    rubberDuck.performQuack();
    rubberDuck.performFly();

    std::cout << "=========================" << std::endl;
    decoyDuck.display();
    decoyDuck.performQuack();
    decoyDuck.performFly();

    std::cout << "=========================" << std::endl;
    modelDuck.display();
    modelDuck.performQuack();
    modelDuck.performFly();
    modelDuck.setFlyBehaviour(new FlyRocketPowered());
    modelDuck.performFly();
}
