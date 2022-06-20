/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#include <Servo.h>
#define SERVO_PIN 5
Servo servo; // Create a servo object
int x = 0;
void setup() {
  servo.attach(SERVO_PIN); // Attaches the servo on pin 5 to the servo1 object
  servo.write(x); // Put servo1 at home position
  Serial.begin(9600);
  delay(25);
}

void loop() {
  for (; x < 180; x++) {
    servo.write(x);
    Serial.println(x);
    delay(20);
  }
  for (; x > 0; x--) {
    servo.write(x);
    Serial.println(x);
    delay(20);
  }
}
