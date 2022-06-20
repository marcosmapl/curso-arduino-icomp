/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#define LED_PIN1 9
#define LED_PIN2 10
#define LED_PIN3 11

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
}

void loop() {
  analogWrite(LED_PIN1, random(185) + 70);
  analogWrite(LED_PIN2, random(185) + 70);
  analogWrite(LED_PIN3, random(185) + 70);
  delay(random(100) + 20);
}
