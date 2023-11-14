#define IR_SENSOR_PIN 13  // Change this to the pin you connected the sensor's OUT pin

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT); // Set the IR sensor pin as an input
  Serial.begin(9600);            // Start serial communication at 9600 baud rate
}

void loop() {
  int sensorValue = digitalRead(IR_SENSOR_PIN); // Read the sensor value

  if (sensorValue == LOW) {
    Serial.println("Object Detected"); // Print this when an object is detected
  } else {
    Serial.println("No Object");       // Print this when no object is detected
  }

  delay(500); // Wait for half a second before reading again

}
