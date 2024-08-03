#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

// Define pins
const int moistureSensorPin = 34; // Analog pin for moisture sensor
const int relayPin = 27; // GPIO pin for relay

// Threshold for moisture level (adjust as needed)
const int moistureThreshold = 500;

void setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Initialize relay pin
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Ensure the relay is off initially
}

void loop() {
  // Read moisture level
  int moistureLevel = analogRead(moistureSensorPin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);

  // Check if moisture level is below the threshold
  if (moistureLevel < moistureThreshold) {
    Serial.println("Soil is dry. Activating sprayer.");
    digitalWrite(relayPin, HIGH); // Turn on the relay (and the pump)
    delay(5000); // Keep the pump on for 5 seconds
    digitalWrite(relayPin, LOW); // Turn off the relay (and the pump)
  } else {
    Serial.println("Soil is moist. No need to spray.");
  }

  // Wait for a while before checking again
  delay(60000); // Check every minute
}
