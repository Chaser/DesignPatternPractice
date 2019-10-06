//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef DPES_MOTORPROXY_H
#define DPES_MOTORPROXY_H

#include "MotorData.h"

class MotorProxy {
private:
    unsigned int * motorAddr = nullptr;
    unsigned int rotaryArmLength = 0;
    unsigned int marshal(MotorData data);
    MotorData unmarshal(unsigned int);

public:
    DirectionType accessMotorDirection();
    unsigned int accessMotorSpeed();
    unsigned int accessMotorState();
    void clearErrorStatus();
    void configure(unsigned int, unsigned int *);
    void disable();
    void enable();
    void initialze();
    void writeMotorSpeed(const DirectionType, unsigned int);
};


#endif //DPES_MOTORPROXY_H
