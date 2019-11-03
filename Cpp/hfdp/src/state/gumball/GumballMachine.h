//
// Created by Johnson, Chase on 03/11/2019.
//

#ifndef HFDP_GUMBALLMACHINE_H
#define HFDP_GUMBALLMACHINE_H

#include <iostream>

class GumballMachine {
public:
    const static int SOLD_OUT = 0;
    const static int NO_QUARTER = 1;
    const static int HAS_QUARTER = 2;
    const static int SOLD = 3;

    GumballMachine(int count);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void refill(int);

private:
    int state = SOLD_OUT;
    int count = 0;
    friend std::ostream& operator<<(std::ostream&, const GumballMachine&);
};


#endif //HFDP_GUMBALLMACHINE_H
