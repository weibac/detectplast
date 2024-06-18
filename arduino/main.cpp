// Include necessary libraries here

// Init constants 
// Plastic ratios reference values
// Masoumi et al 2012 halp me pls

void setup() {
  // Serial.begin(9600);  // Figure out serial once sensor interface makes sense
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, OUTPUT); pinMode(2, HIGH);
  pinMode(3, OUTPUT); pinMode(3, HIGH);
}

void loop() {
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
  if (ratio < 0.2) {  // Figure out reference ratios once sensors make sense by either sweat or Masoumi et al
    digitalWrite(2, HIGH);
  }
  else {
    digitalWrite(2, HIGH);
  }
}
