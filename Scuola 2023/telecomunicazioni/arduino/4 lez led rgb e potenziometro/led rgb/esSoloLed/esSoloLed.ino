const int ROSSO=11;
const int VERDE=10;
const int BLU=9;
//inizializzazione
void setup()
{
pinMode(ROSSO,OUTPUT);
pinMode(VERDE,OUTPUT);
pinMode(BLU,OUTPUT);
//spengo tutto
digitalWrite(ROSSO, LOW);
digitalWrite(VERDE, LOW);

digitalWrite(BLU, LOW);}
void loop()
{
//accendo rosso
digitalWrite(ROSSO,HIGH);
delay(1000);
//spengo rosso
digitalWrite(ROSSO,LOW);
delay(100);
//accendo verde
digitalWrite(VERDE,HIGH);
delay(1000);
//spengo verde
digitalWrite(VERDE,LOW);
delay(100);
//accendo blu
digitalWrite(BLU,HIGH);
delay(1000);
//spengo blu
digitalWrite(BLU,LOW);
delay(100);
}
