#include <Arduino.h>
#include <Pinout.h>

const struct Pinout::Pins carPinout = {
  // Outputs
  {
    {D1, "Left Motor Reverse"},
    {D2, "Left Motor Forward"},
    {D3, "Right Motor Reverse"},
    {D4, "Right Motor Forward"}
  },
  // Inputs
  {
    {D5, "Ultra Sonic Sensor"}
  }
};

void setup() {
  _pinout.init(carPinout);
}

void loop() {
  
}