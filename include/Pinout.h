#ifndef _PINOUT_H_
#define _PINOUT_H_

#include <Arduino.h>
#include <Arduino_AVRSTL.h>

struct Pinout
{
    struct outputPin
    {
        int num;
        String label;
        boolean initHigh;
    };

    struct inputPin
    {
        int num;
        String label;
    };

    struct Pins
    {
        std::vector<outputPin> Outputs;
        std::vector<inputPin> Inputs;
    };

    bool init(const Pins pinout) {
        for (const auto &pin : pinout.Outputs)
        {
            pinMode(pin.num, OUTPUT);
            digitalWrite(pin.num, pin.initHigh ? HIGH : LOW);
        }

        for (const auto &pin : pinout.Inputs)
        {
            pinMode(pin.num, INPUT);
        }
        return true;

        
        //std::vector<Pin>::const_iterator i = pinout.Outputs.begin();
        //std::vector<Pin>::const_iterator j = pinout.Outputs.begin();
        //for(; i != pinout.Outputs.end(); ++i)
        //{   
        //    const Pin& pin = *i;
        //    pinMode(pin.num, OUTPUT);
        //}
    };
}_pinout;

#endif