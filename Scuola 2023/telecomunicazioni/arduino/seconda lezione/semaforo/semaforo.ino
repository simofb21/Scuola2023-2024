int verde = 5; //verde, giallo, rosso
int giallo = 6;
int rosso = 7;

void setup() {
  pinMode(verde,OUTPUT);
  pinMode(giallo,OUTPUT);
  pinMode(rosso,OUTPUT);
  digitalWrite(verde,LOW);
  digitalWrite(giallo,LOW);
  digitalWrite(rosso,LOW);
}

void loop() {
  delay(1000); //attendo prima 
  digitalWrite(verde,HIGH);
  delay(5000);
  digitalWrite(verde,HIGH);
  digitalWrite(giallo,HIGH);
  delay(5000);
  digitalWrite(verde,LOW);
  digitalWrite(giallo,LOW);
  digitalWrite(rosso,HIGH);
  delay(5000);
  digitalWrite(rosso,LOW);

}
