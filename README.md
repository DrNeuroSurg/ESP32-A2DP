
# Change History

V1.0.2
- add volume control 
- add set volume control (setVolume(uint8_t volume);)
- add get volume control (getVolume())


V1.0.1
#
- Remove BluetoothA2DPSource
#
- add i2s mclk (i2s_mclk_pin_select(const uint8_t pin);)
- add callback set_on_connected2BT
- add callback set_on_disconnected2BT
- add PIN CODE ESP_BT_IO_CAP_IN; 



V1.0.0

- Initial Release

- provide get_connection_status() method
- provide end() method to shut down bluetooth
- add compile time switch for new ESP IDF
- add additional flag in set_stream_reader to deactivate i2s
- Remove includes of Arduino.h to highlight independence of Arduino API
- New examples with LED and auto shut down on idle
- Clean up compile warnings so that build with warnings ALL will succeed
- Example with set_pin_config
- Correction - Bluetooth devices with address starting 00 did not auto reconnect
- provide set_discoverability() to change BT discovery mode (only for current ESP IDF) thanks to rbuehlma
- Implement mono downmix thanks to rbuehlma
- expand to 24 or 32 bits using i2s_config.bits_per_sample thanks to riraosan
- Tracknumber and TrackCount added to Metadata thanks to alexus2033
- Correction which allows restart after calling end() thanks to alexus2033
- Add method to disconnect current connection thanks to ashthespy
- Metadata support with the help of a callback function - Thanks to JohnyMielony
- AVRC command support thanks to PeterPark
- Improved init_bluetooth checks, in case bluedroid was already initialized elsewhere - Thanks to Antonis Katzourakis
- No auto reconnect after clean disconnect - Thanks to Bajczi Levente
- The data is rescaled to when written to the internal DAC - Thanks to Martin Hron
- Corrected wrong case of include to Arduino.h - Thanks to RyanDavis
- Added callback to received packets - Thanks to Mishaux
- Automatically reconnect to last source - Thanks to JohnyMielony
- Support for data callback - Thanks to Mike Mishaux
- Improved init_bluetooth checks, in case bluedroid was already initialized elsewhere Antonis Katzourakis
- No auto reconnect after clean disconnect thanks to Bajczi Levente
- Made all methods virtual to enable flexible subclassing
- Error Corrections in BluetoothA2DPSource
- Support for writeData in BluetoothA2DPSource
- Support for multiple alternative BT names in BluetoothA2DPSource
- Redesign to protect internal callbacks in BluetoothA2DPSink
- Generate Documentation with the help of doxygen
- New functionality: BluetoothA2DPSource
- Renamed project from 'esp32_bt_music_receiver' to 'ESP32-A2DP'
- Corrected Spelling Mistake from Blootooth to Bluetooth in Class names: The correct class name is BluetoothA2DPSink!
- The include h files are now called like the class names (e.g. BluetoothA2DPSink.h and BluetoothA2DPSource.h)


# Thanks [pschatzmann](https://github.com/pschatzmann)
