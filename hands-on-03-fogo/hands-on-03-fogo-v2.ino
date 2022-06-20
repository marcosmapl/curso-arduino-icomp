/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
const byte pins[] = {9, 10, 11};

void setup() {
  for (unsigned int x = 0; x < 3; x++)
    pinMode(pins[x] , OUTPUT);
}

void loop() {
  for (unsigned int x = 0; x < 3; x++)
    analogWrite(pins[x], random(185) + 70);
  delay(random(100) + 20);
}
