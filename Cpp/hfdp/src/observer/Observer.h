//
// Created by Johnson, Chase on 12/10/16.
//

#ifndef HFDP_OBSERVER_H
#define HFDP_OBSERVER_H


class Observer {
public:
    virtual void update(float temperature, float humidity, float pressure) = 0;
};


#endif //HFDP_OBSERVER_H
