#include <Arduino.h>
#include <Pinout.h>
#include <MotorDriver.h>

const struct Pinout::Pins carPinout = {
  // Outputs
  {
    {D1, "L1", false},
    {D2, "L2", false},
    {D3, "R1", false},
    {D4, "R2", false}
  },
  // Inputs
  {
    {D5, "Ultra Sonic"}
  }
};

void setup() {
  Serial.begin(115200);
  Serial.println('/n');

  // Initialise pins
  _pinout.init(carPinout);
  MotorDriver()

}

void loop() {
  
}
