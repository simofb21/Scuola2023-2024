//fusarBassini Simone

int switchstate = 0;
void setup() {
// declare the LED pins as outputs
pinMode(11, OUTPUT); pinMode(10,
OUTPUT); pinMode(9, OUTPUT);
// declare the switch pin as an input
pinMode(5, INPUT);
} 
void loop(){
// read the value of the switch
// digitalRead() checks to see if there is voltage
// on the pin or not
switchstate = digitalRead(5);
// if the button is not pressed
// turn on the green LED and off the red LEDs 
  if(switchstate == LOW) 
  { 
    digitalWrite(11, HIGH); // turn
digitalWrite(10, LOW); // turn
digitalWrite(9, LOW); // turn

// this else is part of the above if() statement.
// if the switch is not LOW (the button is pressed)
// turn off the green LED and blink alternatively the red LEDs
else { 
  digitalWrite(11, LOW); // turn the green LED on pin 11
digitalWrite(10, LOW); // turn the red LED on pin 10 off
digitalWrite(9, HIGH); // turn the red LED on pin 5 on //
delay(250);
digitalWrite(10, HIGH); // turn the red LED on pin 4 on
digitalWrite(9, LOW); // turn the red LED on pin 5 off
// wait for a quarter second before changing the light
delay(250);
}
}
