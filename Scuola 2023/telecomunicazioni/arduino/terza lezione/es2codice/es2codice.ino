/*
DigitalReadSerial Fusar Bassini Simone
Reads a digital input on pin 2, prints
the result to the serial monitor
*/


void setup() {
Serial.begin(9600);
  pinMode(2,INPUT);
} 


void loop() {
int sensorValue = digitalRead(2);
Serial.println(sensorValue, DEC);
}
