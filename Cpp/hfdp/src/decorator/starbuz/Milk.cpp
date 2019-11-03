//
// Created by Johnson, Chase on 2019-03-24.
//

#include "Milk.h"


Milk::Milk(Beverage *beverage) {
    this->beverage = beverage;
}

std::string Milk::getDescription() {
    return beverage->getDescription() + ", Milk";
}

double Milk::cost() {
    return beverage->cost() + 0.10;
}