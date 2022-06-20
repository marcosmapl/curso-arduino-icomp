/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#include <NewPing.h>
#define ECHO_PIN 3
#define TRIGGER_PIN 2
#define MAX_DISTANCE 400 // distancia maxima a ser mensurada (em cm)

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing object

void setup() {
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(50); // aguarda 50ms entre as leituras (20 pings/sec).
  unsigned long distancia = sonar.ping_cm();// retorna a distancia em cm
  Serial.println(distancia);
}
