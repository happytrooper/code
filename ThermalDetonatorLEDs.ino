/*
  Thermal Detonator Blink Sketch

  This code is for an Arduino Nano.  The Nano will control the light functions for a
  3D printed Thermal Detonator, as seen in Star Wars Episode VI - Return of the Jedi.

  1 x 5mm red LED, and 3 x 3mm yellow LEDs will be used.  Pin 12 will take the
  red LED and will remain on.  The other 3 yellow LEDs, assigned to pins 6, 8, and 10
  will blink.  Please feel free to customize this code.

  created by HappyTrooper
  https://www.happytrooper.com

*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 6 as an output - 3mm yellow.
  pinMode(6, OUTPUT);
  // initialize digital pin 8 as an output - 3mm yellow.
  pinMode(8, OUTPUT);
  // initialize digital pin 10 as an output - 3mm yellow.
  pinMode(10, OUTPUT);
  // initialize digital pin 12 as an output - 5mm red.
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn red LED on (HIGH is the voltage level)
  digitalWrite(6, HIGH);   // turn yellow LED #1 on (HIGH is the voltage level)
  delay(200);                       // pause
  digitalWrite(6, LOW);    // turn yellow LED #1 off by making the voltage LOW
  delay(200);                       // pause
  digitalWrite(8, HIGH);   // turn yellow LED #2 on (HIGH is the voltage level)
  delay(200);                       // pause
  digitalWrite(8, LOW);    // turn yellow LED #2 off by making the voltage LOW
  delay(200);                       // pause
  digitalWrite(10, HIGH);   // turn yellow LED #3 on (HIGH is the voltage level)
  delay(200);                       // pause
  digitalWrite(10, LOW);    // turn yellow LED #3 off by making the voltage LOW
  delay(200);                       // pause
  

}
