/*
  Streaming Music from Bluetooth

  Copyright (C) 2020 Phil Schatzmann
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// ==> Example A2DP Receiver which uses I2S to an external DAC

#include "BluetoothA2DPSink.h"

BluetoothA2DPSink a2dp_sink;

char buff [6];
volatile byte indx;




void setup() {

  Serial.begin(115200);
  a2dp_sink.start("MyMusic", false);

  

}


void loop() {




  if (Serial.available() > 0) {
    byte c = Serial.read();
    if (indx < sizeof buff) {
      buff [indx++] = c; // save data in the next index in the array buff
      if (indx == 6) { //check for the end of the word
        Serial.print(buff);
        a2dp_sink.setPinCode(atoi(buff));
        indx = -1; //reset button to zero

      }
    }
  }

}
