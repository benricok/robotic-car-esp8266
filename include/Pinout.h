#ifndef _PINOUT_H_
#define _PINOUT_H_

#include <Arduino.h>
#include <Arduino_AVRSTL.h>

struct Pinout
{
    struct Pin
    {
        int num;
        String label;
    };

    struct Pins
    {
        std::vector<Pin> Outputs, Inputs;
    };

    bool init(const Pins pinout) {
        //std::vector<Pin>::const_iterator i = pinout.Outputs.begin();
        //std::vector<Pin>::const_iterator j = pinout.Outputs.begin();
        //for(; i != pinout.Outputs.end(); ++i)
        //{   
        //    pinMode(pinout.Outputs[i], OUTPUT);
        //}
        for (const auto &arr : pinout.Outputs)
        {
            pinMode(arr.num, OUTPUT);
        }

        for (const auto &arr : pinout.Inputs)
        {
            pinMode(arr.num, INPUT);
        }
        return true;
    };
}_pinout;

#endif