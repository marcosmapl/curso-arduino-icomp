/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
int brilho;
const int LED_PIN = 11;

void setup() {
  pinMode(LED_PIN, OUTPUT); // configura o pino 13 como pino de saída
}

void loop() {
  for (brilho = 0; brilho <= 255; brilho++) { // incrementa o valor de brilho
    analogWrite(LED_PIN, brilho); // sinal PWM de acordo com o valor de brilho
    delay(15);
  }
  for (brilho = 255; 0 <= brilho; brilho--) { // decrementa o valor de brilho
    analogWrite(LED_PIN, brilho); // sinal PWM de acordo com o valor de brilho
    delay(15);
  }
}
