#ifndef _MOTOR_DRIVER_H_
#define _MOTOR_DRIVER_H_

#include <Arduino_AVRSTL.h>
#include <Pinout.h>

class MotorDriver
{
    private:
        // { L1, L2, R1, R2 } 
        std::vector <int> motorPins;
        
    public:
        MotorDriver(const Pinout::Pins pinout);
        void forward();
        void backward();
        void left();
        void right();
        void stop();
};

#endif

