//
// Created by Johnson, Chase on 03/11/2019.
//

#ifndef HFDP_GUMBALLMACHINETESTDRIVE_H
#define HFDP_GUMBALLMACHINETESTDRIVE_H

#include <iostream>
#include "GumballMachine.h"

void GumballMachineTestDrive(void) {
    std::cout << "== GumballMachineTestDrive ==" << std::endl;
    GumballMachine gm = GumballMachine{10};

    gm.insertQuarter();
    gm.turnCrank();
    std::cout << gm << std::endl;
    gm.insertQuarter();
    gm.ejectQuarter();
    gm.turnCrank();
    std::cout << gm << std::endl;

    gm.insertQuarter();
    gm.turnCrank();
    gm.insertQuarter();
    gm.turnCrank();
    gm.ejectQuarter();
    std::cout << gm << std::endl;

    gm.insertQuarter();
    gm.insertQuarter();
    gm.turnCrank();
    gm.insertQuarter();
    gm.turnCrank();
    gm.insertQuarter();
    gm.turnCrank();
    std::cout << gm << std::endl;
}
#endif //HFDP_GUMBALLMACHINETESTDRIVE_H
