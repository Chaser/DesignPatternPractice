//
// Created by Johnson, Chase on 06/10/2019.
//

#include <cstdio>
#include <assert.h>
#include "MotorProxy.h"

/*
    Motor interface:
    Bits reflect ourrent settings for reading and writing.
    Write 0 to clear a bit, 1 to set a bit.
    Width: 16 bits
    Bit Range       Name            Description
    0               Motor on /off   0 - off, 1 - on
    1-2             Direction       0 - off, 10 - forward, 01 - reverse
    3-7             speed           00000 (0d) stopped, 11111 (31d) max speed
    8               Error status    0 = no error, 1 = error
    9 - 15          Error code      00001 = no power to motor
                                    00010 = no torque
                                    000100 = BIT failure
                                    0001000 = over temperature fault
                                    0xx0000 = reserved bits
                                    1000000 = unknown error
*/
DirectionType MotorProxy::accessMotorDirection() {
    MotorData mData{};
    if (!this->motorAddr)
        return DirectionType::UNKNOWN;
    mData = unmarshal(*this->motorAddr);
    return mData.direction;
}

unsigned int MotorProxy::accessMotorSpeed() {
    MotorData mData{};
    if (!this->motorAddr)
        return 0;
    mData = unmarshal(*this->motorAddr);
    return mData.speed;
}

unsigned int MotorProxy::accessMotorState() {
    MotorData mData{};
    if (!this->motorAddr)
        return 0;
    mData = unmarshal(*this->motorAddr);
    return mData.errorStatus;
}

void MotorProxy::clearErrorStatus() {
    if (!this->motorAddr)
        return;
    (*this->motorAddr)&= 0xFF;
}

void MotorProxy::configure(unsigned int length, unsigned int * location) {
    this->rotaryArmLength = length;
    this->motorAddr = location;
}

void MotorProxy::disable() {
    // and with all bits set except for the enable bit
    if (!this->motorAddr)
        return;
    (*this->motorAddr) &= 0xFFFE;
}

void MotorProxy::enable() {
    if (!this->motorAddr)
        return;
    *this->motorAddr |= 1;
}

void MotorProxy::initialze() {
    MotorData mData{};
    mData.onOff = 1;
    mData.direction = DirectionType::IDLE;
    mData.speed = 0;
    mData.errorStatus = 0;
    mData.noPowerError = 0;
    mData.noTorqueError= 0;
    mData.BITError = 0;
    mData.overTemperatureError = 0;
    mData.reservedError1 = 0;
    mData.reservedError2 = 0;
    mData.unknownError = 0;
    *this->motorAddr = marshal(mData);
}

void MotorProxy::writeMotorSpeed(const DirectionType direction, unsigned int speed) {
    MotorData mData{};
    double dPi, dArmLength, dSpeed, dAdjSpeed;
    if (!this->motorAddr)
        return;
    mData = unmarshal(*this->motorAddr);
    mData.direction = direction;
    // ok, let’s do some math to adjust for
    // the length of the rotary arm times 10
    if (this->rotaryArmLength > 0) {
        dSpeed = speed;
        dArmLength = this->rotaryArmLength;
        dAdjSpeed = dSpeed / 2.0 / 3.14159 / dArmLength * 10.0;
        mData.speed = (int)dAdjSpeed;
    }
    else
        mData.speed = speed;
    (*this->motorAddr) = marshal(mData);
}

unsigned int MotorProxy::marshal(MotorData motorData) {
    // Write to hardware
    unsigned int deviceCmd = 0;     // set all bits to zero
    if (motorData.onOff)
        deviceCmd |= 1; // OR in the appropriate bit
    if (motorData.direction == DirectionType::FORWARD)
        deviceCmd |= (2 << 1);
    else if (motorData.direction == DirectionType::REVERSE)
        deviceCmd |= (1 << 1);

    if (motorData.speed < 32 && motorData.speed >= 0)
        deviceCmd |= motorData.speed << 3;
    if (motorData.errorStatus)
        deviceCmd |= 1 << 8;
    if (motorData.noPowerError)
        deviceCmd |= 1 << 9;
    if (motorData.noTorqueError)
        deviceCmd |= 1 << 10;
    if (motorData.BITError)
        deviceCmd |= 1 << 11;
    if (motorData.overTemperatureError)
        deviceCmd |= 1 << 12;
    if (motorData.reservedError1)
        deviceCmd |= 1 << 13;
    if (motorData.reservedError2)
        deviceCmd |= 1 << 14;
    if (motorData.unknownError)
        deviceCmd |= 1 << 15;
    return deviceCmd;
}

MotorData MotorProxy::unmarshal(unsigned int encodedMotorData) {
    MotorData mData{};
    int temp;
    mData.onOff = encodedMotorData & 1;
    temp = (encodedMotorData & (3 << 1)) >> 1;
    if(temp == 1)
        mData.direction = DirectionType::REVERSE;
    else if (temp == 2)
        mData.direction = DirectionType::FORWARD;
    else
        mData.direction = DirectionType::IDLE;

    mData.speed = encodedMotorData & (31 << 3);
    mData.errorStatus = encodedMotorData & (1 << 8);
    mData.noPowerError = encodedMotorData & (1 << 9);
    mData.noTorqueError = encodedMotorData & (1 << 10);
    mData.BITError = encodedMotorData & (1 << 11);
    mData.overTemperatureError = encodedMotorData & (1 << 12);
    mData.reservedError1 = encodedMotorData & (1 << 13);
    mData.reservedError2 = encodedMotorData & (1 << 14);
    mData.unknownError = encodedMotorData & (1 << 15);
    return mData;
}
