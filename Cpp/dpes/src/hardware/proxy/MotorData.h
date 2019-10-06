//
// Created by Johnson, Chase on 06/10/2019.
//

#ifndef DPES_MOTORDATA_H
#define DPES_MOTORDATA_H

enum class DirectionType {
    UNKNOWN,
    IDLE,
    FORWARD,
    REVERSE
};

class MotorData {
public:
    unsigned char onOff;
    DirectionType direction;
    unsigned int speed;
    // Error Detection
    unsigned char errorStatus;
    unsigned char noPowerError;
    unsigned char noTorqueError;
    unsigned char BITError;
    unsigned char overTemperatureError;
    unsigned char reservedError1;
    unsigned char reservedError2;
    unsigned char unknownError;
};


#endif //DPES_MOTORDATA_H
