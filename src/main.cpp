// -----------------------------------------------------------------------------
//
//  Copyright (C) 2021  Benrico Krog
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero General Public License as published
//  by the Free Software Foundation version 3 of the License.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Affero General Public License for more details.
//
//  You should have received a copy of the GNU Affero General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>
//
// -----------------------------------------------------------------------------

#include <Arduino.h>
#include <Pinout.h>
#include <MotorDriver.h>
#include <CaptivePortal.h>

const struct CaptivePortal::WIFI credentials = {
  "ESP-CAR", // AP SSID
  "CAR12345" // Password
};

const struct Pinout::Pins carPinout = {
  // Outputs
  {
    // Motor Driver
    {D1, "L1", false},
    {D2, "L2", false},
    {D3, "R1", false},
    {D4, "R2", false}
    // The rest

  },
  // Inputs
  {
    {D5, "Ultra Sonic"},
    {D6, "IR Reciever"}
  }
};

void setup() {
  Serial.begin(115200);
  Serial.println('/n');

  // Initialise pins
  Pinout PN(carPinout);
  MotorDriver MD(carPinout);
  MD.stop();

  // Initialise Wifi AP
  CaptivePortal CP(credentials);
}

void loop() {
  
}
 