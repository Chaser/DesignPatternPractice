//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef HFDP_CLAMPIZZA_H
#define HFDP_CLAMPIZZA_H

#include "Pizza.h"

class ClamPizza: public Pizza {
public:
    ClamPizza() {
        name = "Clam Pizza";
        dough = "Thin Crust";
        sauce = "White garlic sauce";
        toppings.insert(toppings.end(), "Clams");
        toppings.insert(toppings.end(), "Grated parmesan cheese");
    }
};


#endif //HFDP_CLAMPIZZA_H
