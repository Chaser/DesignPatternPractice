//
// Created by Johnson, Chase on 03/11/2019.
//

#include "GumballMachine.h"

std::ostream& operator<<(std::ostream &strm, const GumballMachine &gm) {
    return strm << "GumballMachine(" << gm.state << ")";
}

GumballMachine::GumballMachine(int gumballs) : count(gumballs) {
    if (count > 0) {
        state = NO_QUARTER;
    }
}

void GumballMachine::insertQuarter() {
    if (state == HAS_QUARTER) {
        std::cout << "You can't insert another quarter" << std::endl;
    } else if (state == NO_QUARTER) {
        this->state = HAS_QUARTER;
        std::cout << "You inserted a quarter" << std::endl;
    } else if (state == SOLD_OUT) {
        std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
    } else if (state == SOLD) {
        std::cout << "Please wait, we're already giving you a gumball" << std::endl;
    }
}

void GumballMachine::ejectQuarter() {
    if (state == HAS_QUARTER) {
        std::cout << "Quarter returned" << std::endl;
        state = NO_QUARTER;
    } else if (state == NO_QUARTER) {
        std::cout << "You haven't inserted a quarter" << std::endl;
    } else if (state == SOLD) {
        std::cout << "Sorry, you already turned the crank" << std::endl;
    } else if (state == SOLD_OUT) {
        std::cout << "You can't eject, you haven't inserted a quarter yet" << std::endl;
    }
}

void GumballMachine::turnCrank() {
    if (state == SOLD) {
        std::cout << "Turning twice doesn't get you another gumball!" << std::endl;
    } else if (state == NO_QUARTER) {
        std::cout << "You turned but there's no quarter" << std::endl;
    } else if (state == SOLD_OUT) {
        std::cout << "You turned, but there are no gumballs" << std::endl;
    } else if (state == HAS_QUARTER) {
        std::cout << "You turned..." << std::endl;
        state = SOLD;
        dispense();
    }
}

void GumballMachine::dispense() {
    if (state == SOLD) {
        std::cout << "A gumball comes rolling out the slot" << std::endl;
        count = count - 1;
        if (count == 0) {
            std::cout << "Oops, out of gumballs!" << std::endl;
            state = SOLD_OUT;
        } else {
            state = NO_QUARTER;
        }
    } else if (state == NO_QUARTER) {
        std::cout << "You need to pay first" << std::endl;
    } else if (state == SOLD_OUT) {
        std::cout << "No gumball dispensed" << std::endl;
    } else if (state == HAS_QUARTER) {
        std::cout << "No gumball dispensed" << std::endl;
    }
}

void GumballMachine::refill(int numGumBalls) {
    this->count = numGumBalls;
    this->state = NO_QUARTER;
}