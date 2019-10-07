//
// Created by Johnson, Chase on 06/10/2019.
//

#include <iostream>
#include <string>
#include "Pizza.h"

std::string Pizza::getName() {
    return this->name;
}

void Pizza::prepare() {
    std::cout << "Preparing " << name << std::endl;
}

void Pizza::bake() {
    std::cout << "Baking " << name << std::endl;
}

void Pizza::cut() {
    std::cout << "Cutting " << name << std::endl;
}

void Pizza::box() {
    std::cout << "Boxing " << name << std::endl;
}

