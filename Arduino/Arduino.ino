int sensorValue = 0;
float voltage = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(A0);
  voltage = (sensorValue / 1024.0) * 5.0;

  Serial.println(voltage);

  delay(100);
}


// void setup() {
//   // initialize serial communication at 9600 baud
//   Serial.begin(9600);
//   randomSeed(analogRead(0));
// }

// void loop() {
//   // generate a random voltage value between 0 and 5 volts
//   float voltage = random(0, 500) / 100.0;

//   // send the voltage over the serial connection
//   Serial.println(voltage);

//   // wait for a bit to avoid overloading the serial connection
//   delay(100);
// }