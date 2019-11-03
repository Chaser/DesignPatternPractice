//
// Created by Johnson, Chase on 03/11/2019.
//

#ifndef HFDP_STATEPATTERNS_H
#define HFDP_STATEPATTERNS_H

#include <iostream>
#include "gumball/GumballMachineTestDrive.h"

class StatePatterns {
public:
    static void execute() {
        std::cout << "### State Patterns ###" << std::endl;
        GumballMachineTestDrive();
    }
};


#endif //HFDP_STATEPATTERNS_H
