/*
* Progetto
* Rilevare la distanza con un sensore a ultrasuoni */
// pin collegato al trigger del sensore
// un impulso di almeno 10 microsecondi fa partire l'onda a ultrasuoni
int trigPin = 9;
// pin collegato al pin echo del sensore
// l'impulso inviato dal sensore ha una durata proporzionale alla distanza
int echoPin = 8;
// durata dell'impuslo sul pin echo (in microsecondi)
unsigned long durata = 0;
// distanza rilevata dal sensore (in centimetri)
int distanzaCm = 0;
void setup(){
pinMode(echoPin, INPUT);
pinMode(trigPin, OUTPUT);
Serial.begin(9600);
}
void loop(){

// invio un impulso di 10 microsecondi dalla scheda al pin trigger
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// calcolo la durata dell'impulso di ritorno inviato dal sensore
durata = pulseIn(echoPin, HIGH);
// converto la durata dell'impulso in una distanza in centimetri
distanzaCm = durata / 58;
// invio il dato alla seriale
Serial.print("distanza rilevata dal sensore: ");
Serial.print(distanzaCm);
Serial.println(" centimetri");
delay(500);
}
