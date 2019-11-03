//
// Created by Johnson, Chase on 2019-03-24.
//

#include "Mocha.h"


Mocha::Mocha(Beverage *beverage) {
    this->beverage = beverage;
}

std::string Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
    return beverage->cost() + 0.20;
}