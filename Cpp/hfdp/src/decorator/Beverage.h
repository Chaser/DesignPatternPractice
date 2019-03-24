//
// Created by Johnson, Chase on 2019-03-24.
//

#ifndef HFDP_BEVERAGE_H
#define HFDP_BEVERAGE_H

#include <string>

class Beverage {
public:
    virtual std::string getDescription() {
        return this->description;
    }
    virtual double cost() = 0;

protected:
    std::string description = "Unknown Beverage";
    
};


#endif //HFDP_BEVERAGE_H
