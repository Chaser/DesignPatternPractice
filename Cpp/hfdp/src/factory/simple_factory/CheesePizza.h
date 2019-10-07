//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef HFDP_CHEESEPIZZA_H
#define HFDP_CHEESEPIZZA_H

#include "Pizza.h"

class CheesePizza: public Pizza {
public:
    CheesePizza() {
        name = "Cheese Pizza";
        dough = "Regular Crust";
        sauce = "Marinara Pizza Sauce";
        toppings.insert(toppings.end(), "Fresh Mozzarella");
        toppings.insert(toppings.end(), "Parmesan");
    }
};


#endif //HFDP_CHEESEPIZZA_H
