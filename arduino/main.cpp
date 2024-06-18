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

  pinMode(A2, OUTPUT); pinMode(A2, HIGH);
  pinMode(A3, OUTPUT); pinMode(A3, HIGH);

}

void loop() {
  // example:
  // digitalWrite(13, HIGH);   // Turn on the LED connected to pin 13
  // delay(1000);              // Wait for 1 second
  // digitalWrite(13, LOW);    // Turn off the LED
  // delay(1000);              // Wait for 1 second

  // Input
  int result_sensor_0 = 0;
  int result_sensor_1 = 0;
  int ratio = 1;

  result_sensor_0 = analogRead(A0);
  result_sensor_1 = analogRead(A1);

  // Process
  ratio = result_sensor_0 / result_sensor_1;

  // Output


}
