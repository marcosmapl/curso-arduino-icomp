/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#define PIEZO_PIN 3
float sinVal;
int toneVal;

void setup() {
  pinMode(PIEZO_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (byte x = 0; x < 180; x++) {
    // converte o angulo para radiano e calcula o valor do seno
    sinVal = sin(x * (3.1412 / 180));
    // gera um valor de frequência para o valor do seno
    toneVal = 2000 + int(sinVal * 1000);
    tone(PIEZO_PIN, toneVal);
    delay(2);
  }
}
