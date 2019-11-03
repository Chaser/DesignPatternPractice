//
// Created by Johnson, Chase on 03/11/2019.
//

#ifndef HFDP_STRATEGYPATTERNS_H
#define HFDP_STRATEGYPATTERNS_H

#include <iostream>
#include "ducks/MiniDuckSimulator.h"

class StrategyPatterns {
public:
    static void execute() {
        std::cout << "### Strategy Patterns ###" << std::endl;
        MiniDuckSimulator();
    }
};


#endif //HFDP_STRATEGYPATTERNS_H
