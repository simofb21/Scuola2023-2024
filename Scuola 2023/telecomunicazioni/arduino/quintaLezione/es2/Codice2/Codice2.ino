//dichiaro le costanti
const int analogOutPin= 9;
const int analogInPin=A0;

int sensorValue = 0;
int outputValue = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
// read the analog in value:
  sensorValue =analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 30, 121, 90, 10);
  // change the analog out value:
  tone(analogOutPin, outputValue);
    Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  delay(20);

}
