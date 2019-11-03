//
// Created by Johnson, Chase on 12/4/16.
//

#ifndef HFDP_OTHERDUCK_H
#define HFDP_OTHERDUCK_H


#include "Duck.h"

class DecoyDuck: public Duck {
public:
    DecoyDuck();

    void display() override;

};


#endif //HFDP_OTHERDUCK_H
