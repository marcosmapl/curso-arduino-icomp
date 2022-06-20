/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#include <Servo.h>
#define SERVO1_PIN 5
#define SERVO2_PIN 6
#define POT1_PIN A5
#define POT2_PIN A4

Servo servo1, servo2; // Create a servo object

int pot1, pot2;

void setup() {
  servo1.attach(SERVO1_PIN); // Attaches the servo on pin 5 to the servo1 object
  servo2.attach(SERVO2_PIN); // Attaches the servo on pin 6 to the servo2 object
  servo1.write(90); // Put servo1 at home position
  servo2.write(90); // Put servo2 at home postion
}

void loop() {
  pot1 = analogRead(POT1_PIN); // Read the X-Axis
  pot2 = analogRead(POT2_PIN); // Read the Y-Axis
  
  pot1 = map(pot1,0,1023,0,180);
  pot2 = map(pot2,0,1023,0,180);
  
  servo1.write(pot1);
  servo2.write(pot2);
  
  delay(25);
}
