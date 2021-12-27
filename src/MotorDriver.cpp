#include <MotorDriver.h>
#include <Arduino.h>
#include <Arduino_AVRSTL.h>
#include <Pinout.h>

MotorDriver::MotorDriver(const Pinout::Pins pinout) {
    motorPins = {pinout.Outputs[0].num,
                 pinout.Outputs[1].num,
                 pinout.Outputs[2].num,
                 pinout.Outputs[3].num};
}

void MotorDriver::stop() {
    for (const auto &pin : motorPins)
    {
        digitalWrite(pin, LOW);
    }
}

void MotorDriver::forward() {
    digitalWrite(motorPins[0], HIGH);
    digitalWrite(motorPins[1], LOW);
    digitalWrite(motorPins[2], HIGH);
    digitalWrite(motorPins[3], LOW);
}

void MotorDriver::backward() {
    digitalWrite(motorPins[0], LOW);
    digitalWrite(motorPins[1], HIGH);
    digitalWrite(motorPins[2], LOW);
    digitalWrite(motorPins[3], HIGH);
}

void MotorDriver::left() {
    digitalWrite(motorPins[0], LOW);
    digitalWrite(motorPins[1], HIGH);
    digitalWrite(motorPins[2], HIGH);
    digitalWrite(motorPins[3], LOW);
}

void MotorDriver::right() {
    digitalWrite(motorPins[0], HIGH);
    digitalWrite(motorPins[1], LOW);
    digitalWrite(motorPins[2], LOW);
    digitalWrite(motorPins[3], HIGH);
}
