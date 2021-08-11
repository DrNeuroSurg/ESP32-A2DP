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


uint8_t volume = 0;
long previousMillis = 0;        // will store last time LED was updated
long interval = 10000;           // interval at which to blink (milliseconds)

BluetoothA2DPSink a2dp_sink;

void setup() {

  Serial.begin(115200);

  a2dp_sink.start("MyMusic", false);

}


void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    Serial.println("Volume Change");   // send a capital A
    

    a2dp_sink.setVolume(volume++);
	
	
	if (a2dp_sink.isConnected() == true) {
    
        printf("Volume is %d\n", a2dp_sink.getVolume());
    }
	
  }






}
