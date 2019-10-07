//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef HFDP_PIZZASTORE_H
#define HFDP_PIZZASTORE_H

#include <string>
#include "SimplePizzaFactory.h"
#include "Pizza.h"

class PizzaStore {
private:
    SimplePizzaFactory *pizzaFactory = nullptr;
public:
    PizzaStore(SimplePizzaFactory factory) {
        this->pizzaFactory = &factory;
        std::cout << "PizzaStore Created" << std::endl;
    }

    Pizza * orderPizza(std::string type) {
        Pizza * pizza = nullptr;
        if (pizzaFactory == nullptr) {
            std::cout << "Pizza Factory not defined" << std::endl;
            return pizza;
        }
        pizza = this->pizzaFactory->createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};


#endif //HFDP_PIZZASTORE_H
