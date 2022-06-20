/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
void setup() {
  pinMode(13, OUTPUT);     // configura o pino 13 como pino de saída
}

void loop() {
  digitalWrite(13, HIGH); // liga o LED enviando sinal HIGH
  delay(2000);            // aguarda por 1000 ms ou 1 segundo
  digitalWrite(13, LOW);  // desligar o LED enviando sinal LOW
  delay(500);             // aguarda novamente 1 segundo
}
