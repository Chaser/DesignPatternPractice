//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef HFDP_SIMPLEPIZZAFACTORY_H
#define HFDP_SIMPLEPIZZAFACTORY_H

#include "Pizza.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

class SimplePizzaFactory {
public:
    SimplePizzaFactory();

    Pizza * createPizza(std::string type);
};

Pizza * SimplePizzaFactory::createPizza(std::string type) {
    Pizza * pizza = nullptr;
    if (type == std::string("cheese")) {
        pizza = new CheesePizza();
    } else if (type == "pepperoni") {
        pizza = new PepperoniPizza();
    } else if (type == "clam") {
        pizza = new ClamPizza();
    } else if (type == "veggie") {
        pizza = new VeggiePizza();
    }
    return pizza;
}

SimplePizzaFactory::SimplePizzaFactory() {
    std::cout << "SimplePizzaFactory Created" << std::endl;
};

#endif //HFDP_SIMPLEPIZZAFACTORY_H
