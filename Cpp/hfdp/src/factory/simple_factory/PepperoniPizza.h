//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef HFDP_PEPPERONIPIZZA_H
#define HFDP_PEPPERONIPIZZA_H

#include "Pizza.h"

class PepperoniPizza: public Pizza {
public:
    PepperoniPizza() {
        name = "Pepperoni Pizza";
        dough = "Crust";
        sauce = "Marinara sauce";
        this->toppings.insert(toppings.end(), "Sliced Pepperoni");
        this->toppings.insert(toppings.end(), "Sliced Onion");
        this->toppings.insert(toppings.end(), "Grated parmesan cheese");
    }
};


#endif //HFDP_PEPPERONIPIZZA_H
