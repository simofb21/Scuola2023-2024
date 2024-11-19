const int rosso = 9;  // connessione led rgb
const int blu = 10;  
const int verde = 11;  
const int pinpotenziometro = 0;   // potenziometro connesso al pin 0
int potenzval;  
int rossoval;
int verdeval;
int bluval;
void setup()
{
pinMode(verde, OUTPUT);
pinMode(rosso, OUTPUT);
pinMode(blu, OUTPUT);
}
void loop()
{
  potenzval = analogRead(pinpotenziometro);
  if (potenzval > 511){
  verdeval = map (potenzval,0,510,0,255);
  analogWrite (verde, verdeval);
  analogWrite (blu, 255);
  rossoval = map (potenzval,0,510,255,0);
  analogWrite (rosso, rossoval);
}
  if (potenzval <= 511){
  verdeval = map (potenzval,0,511,255,0);
  analogWrite (verde, verdeval);
  analogWrite (rosso, 255);
  bluval = map (potenzval,0,511,0,255);
  analogWrite (blu, bluval);
}
}
