/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#define RLED_PIN 11
#define GLED_PIN 9
#define BLED_PIN 10

const byte ledPins[] = {RLED_PIN, GLED_PIN, BLED_PIN};
                      
void setup() {
  for (byte x = 0; x < 3; x++)
    pinMode(ledPins[x], OUTPUT);
}
                      
void loop() {
  for (byte x = 0; x < 3; x++) {
    analogWrite(ledPins[x], random(255));
  }
  delay(750);
}
