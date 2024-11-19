// set pin numbers:
int led1Pin = 4; // the number of the LED1 pin
int led2Pin = 5; // the number of the LED2 pin

void setup() {
  // initialize the LED pins as outputs:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}
void loop() {

  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, LOW);
  delay(10);

  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, HIGH);
  delay(500);
}
