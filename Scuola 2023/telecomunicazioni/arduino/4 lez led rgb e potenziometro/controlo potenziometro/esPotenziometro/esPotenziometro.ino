int
potenziometro;

void setup() {
Serial.begin(9600);
}
void loop() {
potenziometro = analogRead(A0);
  
Serial.println(potenziometro);
delay(100);
}
