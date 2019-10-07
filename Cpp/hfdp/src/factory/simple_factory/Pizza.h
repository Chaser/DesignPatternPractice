//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef HFDP_PIZZA_H
#define HFDP_PIZZA_H

#include <string>
#include <vector>

class Pizza {
protected:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

public:
    virtual std::string getName();
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
};


#endif //HFDP_PIZZA_H
