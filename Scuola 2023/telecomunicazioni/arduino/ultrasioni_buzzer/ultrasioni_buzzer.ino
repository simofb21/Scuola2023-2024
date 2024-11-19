// Pin collegato al trigger del sensore
int trigPin = 9;
// Pin collegato al pin echo del sensore
int echoPin = 8;
// Pin collegato al buzzer (usando un pin PWM)
int buzzerPin = 7;

unsigned long durata = 0;
int distanzaCm = 0;

void setup() {
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  // Aspetta 10 secondi all'avvio
  delay(5000);
}

void loop() {
  // Invio un impulso di 10 microsecondi dalla scheda al pin trigger
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Calcolo la durata dell'impulso di ritorno inviato dal sensore
  durata = pulseIn(echoPin, HIGH);

  // Converto la durata dell'impulso in una distanza in centimetri
  distanzaCm = durata / 58;

  // Invio il dato alla seriale
  Serial.print("Distanza rilevata dal sensore: ");
  Serial.print(distanzaCm);
  Serial.println(" centimetri");

  // Attiva il buzzer con un suono carino se la distanza è minore di 10 cm
  if (distanzaCm < 10) {
    tone(buzzerPin, 1000, 200); // Frequenza: 1000 Hz, Durata: 200 ms
  }

  delay(500);

  // Disattiva il buzzer dopo un breve periodo di tempo
  noTone(buzzerPin);
}
