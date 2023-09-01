void setup() {
  Serial.begin(9600); // Set baud rate to match the serial monitor
}

void loop() {
  if (Serial.available()) {
    int value = Serial.parseInt(); // Read the number value from UART
    
    // Print the value on the serial monitor
    Serial.print("Received value: ");
    Serial.println(value);
  }
}
