//
// Created by Johnson, Chase on 2019-03-24.
//

#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "HouseBlend.h"
#include "Decaf.h"
#include "Milk.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"


void StarbuzzCoffee() {
    Beverage * beverage = new Espresso();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;
    std::cout << "-------------------------" << std::endl;

    Beverage * beverage2 = new DarkRoast();
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;
    std::cout << "-------------------------" << std::endl;

    Beverage * beverage3 = new HouseBlend();
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
    std::cout << "-------------------------" << std::endl;


    Beverage * beverage4 = new Decaf();
    std::cout << beverage4->getDescription() << " $" << beverage4->cost() << std::endl;
    beverage4 = new Milk(beverage4);
    std::cout << beverage4->getDescription() << " $" << beverage4->cost() << std::endl;
    std::cout << "-------------------------" << std::endl;

}