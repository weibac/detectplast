// Include necessary libraries here

// Init constants 
// Plastic ratios reference values


void setup() {
  // Set pin modes, initialize serial communication, etc.
  // example:
  // pinMode(13, OUTPUT); // Example: Set pin 13 as an OUTPUT
  // Serial.begin(9600);  // Start serial communication at 9600 baud rate

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  pinMode(2, OUTPUT); pinMode(2, HIGH);
  pinMode(3, OUTPUT); pinMode(3, HIGH);

}

void loop() {
  // example:
  // digitalWrite(13, HIGH);   // Turn on the LED connected to pin 13
  // delay(1000);              // Wait for 1 second
  // digitalWrite(13, LOW);    // Turn off the LED
  // delay(1000);              // Wait for 1 second

  // Inits
  int reading_sensor_0 = 0;
  int reading_sensor_1 = 1;
  float ratio = 1.0;

  // Input
  reading_sensor_0 = analogRead(A0);
  reading_sensor_1 = analogRead(A1);

  // Process
  float ratio = float(reading_sensor_0) / reading_sensor_1;

  // Category binning and output (only ifs since ordered)
  if (ratio < 0.2) {
   digitalWrite(2, HIGH);
  }
  else {
    digitalWrite(2, HIGH);
  }
}
