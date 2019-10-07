//
// Created by Johnson, Chase on 06/10/2019.
//
#include <iostream>
#include "PizzaTestDrive.h"
#include "SimplePizzaFactory.h"
#include "PizzaStore.h"
#include "Pizza.h"

void SimpleFactory::PizzaTestDrive() {
    std::cout << "== SimpleFactory::PizzaTestDrive ==" << std::endl;

    SimplePizzaFactory pizzaFactory;
    PizzaStore store(pizzaFactory);

    Pizza * pizza = store.orderPizza("cheese");
    std::cout << "We ordered a " << pizza->getName() << std::endl;
    if (nullptr != pizza) {
        delete pizza;
        pizza = nullptr;
    }
    pizza = store.orderPizza("veggie");
    std::cout << "We ordered a " << pizza->getName() << std::endl;
    if (nullptr != pizza) {
        delete pizza;
        pizza = nullptr;
    }


}
