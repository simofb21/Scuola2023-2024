int pinLed=9;
int potenziometro;
float valore;
void setup() {
Serial.begin(9600);
pinMode(pinLed, OUTPUT);
}
void loop() {
potenziometro = analogRead(A0);
Serial.println(potenziometro);
valore=potenziometro;
valore=valore/1023;
valore=valore*255;
analogWrite(pinLed,valore);
delay(30);
}
