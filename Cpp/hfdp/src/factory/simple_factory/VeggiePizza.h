//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef HFDP_VEGGIEPIZZA_H
#define HFDP_VEGGIEPIZZA_H

class VeggiePizza: public Pizza {
public:
    VeggiePizza() {
        this->name = "Veggie Pizza";
        this->dough = "Crust";
        this->sauce = "Marinara sauce";
//        auto it = toppings.end();
//        this->toppings.insert(it, "Shredded mozzarella");
//        this->toppings.insert(it, "Grated parmesan");
//        this->toppings.insert(it, "Diced onion");
//        this->toppings.insert(it, "Sliced mushrooms");
//        this->toppings.insert(it, "Sliced red pepper");
//        this->toppings.insert(it, "Sliced black olives");
    }
};


#endif //HFDP_VEGGIEPIZZA_H
