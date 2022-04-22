
// Arduino boardet er monteret med Relay shield
// se evt. nærmere på https://store.arduino.cc/products/arduino-4-relays-shield
// Relæ 1 sidder på pin 4
// Relæ 2 sidder på pin 7
// Relæ 3 sidder på pin 8
// Relæ 4 sidder på pin 12

// Import libraries
#include <Utilities.h>

const int buttonPin1 = 3;
const int buttonPin2 = 2;
int buttonState1 = 0;
int buttonState2 = 0;
const int relayPin4 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // Rød led
  pinMode(11, OUTPUT); // Gul led
  pinMode(10, OUTPUT); // Grøn led

  pinMode(4, OUTPUT);  // Relæ 1
  pinMode(7, OUTPUT);  // Relæ 2
  pinMode(8, OUTPUT);  // Relæ 3
  pinMode(12, OUTPUT); // Relæ 4

  // Sæt knap pin til input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

}

void loop() {
  // Læs tilstanden på knappen (0 (intet tryk) eller 1 (tryk)):
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // Tjek om knappen er trykket ned.
  // Hvis den er, er buttonState HIGH (høj):
  (buttonState1 == LOW) ? digitalWrite(relayPin4, LOW) : digitalWrite(relayPin4, HIGH);
  (buttonState2 == LOW) ? digitalWrite(relayPin4, LOW) : digitalWrite(relayPin4, HIGH);

  
  //  digitalWrite(10, HIGH); //Tænder for dioden
  //  digitalWrite(11, HIGH); //Tænder for dioden
  //  digitalWrite(13, HIGH); //Tænder for dioden
  //  delay(1000); //1 sekund pause
  //
  //  digitalWrite(10, LOW); //Slukker for dioden
  //  digitalWrite(11, LOW); //Slukker for dioden
  //  digitalWrite(13, LOW); //Slukker for dioden
  //  delay(1000);

  delay(250);

}
