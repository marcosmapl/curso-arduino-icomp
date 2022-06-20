/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#define POT_PIN A5
#define N_LEDS 5
#define LED_DELAY 100
const byte ledPins[] = {8, 9, 10, 11, 12};
unsigned int ledPos;
unsigned long changeTime;

void setup() {
  for (unsigned int x = 0; x < N_LEDS; x++) {
    pinMode(ledPins[x], OUTPUT);
  }
  changeTime = millis();
}

void loop() {
  ledPos = map(analogRead(POT_PIN), 0, 1023, 0, N_LEDS - 1);
  if ((millis() - changeTime) > LED_DELAY) {
    changeLED(ledPos);
    changeTime = millis();
  }
}

void changeLED(unsigned int ledPos) {
  for (unsigned int x = 0; x < N_LEDS; x++) {
    digitalWrite(ledPins[x], LOW);
  }
  digitalWrite(ledPins[ledPos], HIGH);
}
