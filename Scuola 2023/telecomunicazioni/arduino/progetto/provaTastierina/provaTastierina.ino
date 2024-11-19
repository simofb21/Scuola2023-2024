#include <Keypad.h>
#include <Wire.h> 

// Define the symbols on the buttons of the keypad
char keys[1][4] = {
  {'1', '2', '3', 'A'}
};

byte rowPins[1] = {6}; // Connect to the row pinouts of the keypad (only one row)
byte colPins[4] = {5, 4, 3, 2}; // Connect to the column pinouts of the keypad (including column 4)

// Initialize an instance of class Keypad
Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, 1, 4);

// Initialize the LCD library with the address of your LCD
LiquidCrystal_I2C lcd(0x3F, 16, 2);  // Set the LCD I2C address (change according to your module)

void setup() {
  // Initialize the LCD display
  lcd.init();      
  lcd.backlight(); // Turn on the backlight
}

void loop() {
  // Get the character input
  char keyPressed = myKeypad.getKey();
  
  // If there is a character input, print it on the LCD display
  if (keyPressed) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(keyPressed);
    delay(500); // Delay to avoid printing multiple times for a single key press
  }
}
