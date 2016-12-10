//
// Created by Johnson, Chase on 12/10/16.
//

#ifndef HFDP_SUBJECT_H
#define HFDP_SUBJECT_H


#include "Observer.h"

class Subject {
public:
    virtual void registerObserver(Observer *) = 0;
    virtual void removeObserver(Observer *) = 0;
    virtual void notifyObservers(void) = 0;
};


#endif //HFDP_SUBJECT_H
