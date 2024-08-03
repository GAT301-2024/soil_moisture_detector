# ESP32 Moisture Detector

This project demonstrates how to create a moisture detector using an ESP32 microcontroller. The ESP32 reads the moisture level from an analog moisture sensor and controls a relay to activate a water pump based on the moisture level. The ESP32 also connects to a Wi-Fi network and prints the moisture level to the serial monitor.

## Components Needed

1. ESP32 development board
2. Analog moisture sensor
3. Relay module
4. Water pump (optional, for testing the relay)
5. Jumper wires

## Connections

- Connect the moisture sensor's analog output to the ESP32's analog pin (e.g., GPIO34).
- Connect the relay module's control pin to the ESP32's digital pin (e.g., GPIO27).
- Ensure that the moisture sensor and relay module are properly powered (usually 3.3V or 5V, depending on the sensor and relay).

## Setup Instructions

1. **Install the Arduino IDE**:
   - Download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).

2. **Install the ESP32 Board Package**:
   - Open the Arduino IDE.
   - Go to `File` > `Preferences`.
   - In the "Additional Boards Manager URLs" field, add the following URL: `https://dl.espressif.com/dl/package_esp32_index.json`.
   - Click `OK`.
   - Go to `Tools` > `Board` > `Boards Manager`.
   - Search for `esp32` and install the package provided by Espressif Systems.

3. **Upload the Code**:
   - Connect your ESP32 to your computer.
   - Select the correct board and port in the Arduino IDE.
   - Copy and paste the following code into the Arduino IDE.
   - Replace `your_SSID` and `your_PASSWORD` with your actual Wi-Fi network credentials.
   - Click the upload button to upload the code to your ESP32
