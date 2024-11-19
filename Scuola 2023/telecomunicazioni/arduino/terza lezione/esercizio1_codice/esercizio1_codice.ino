//simone fusar bassini
// define const values
int tempo = 1000;
int pin1 = 6; 
int pin2 = 7;

// define pin1 and pin2 used for output
void setup() { 
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT); }
// repeat everytime



void loop() {
  
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
delay(tempo);
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
delay(tempo);
digitalWrite(pin2, HIGH);
digitalWrite(pin1, LOW);
delay(tempo);
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
delay(tempo);
  
}
