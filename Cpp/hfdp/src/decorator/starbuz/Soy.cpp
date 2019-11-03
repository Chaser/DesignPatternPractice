//
// Created by Johnson, Chase on 2019-03-24.
//

#include "Soy.h"


Soy::Soy(Beverage *beverage) {
    this->beverage = beverage;
}

std::string Soy::getDescription() {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() {
    return beverage->cost() + 0.15;
}