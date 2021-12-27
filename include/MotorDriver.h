#ifndef _MOTOR_DRIVER_H_
#define _MOTOR_DRIVER_H_

class MotorDriver
{
    private:
        struct motorPins
        {
            int L1, L2, R1, R2;
        };
        
    public:
        MotorDriver(const motorPins pinInput);
        void forward();
        void backward();
        void left();
        void right();
};

#endif

