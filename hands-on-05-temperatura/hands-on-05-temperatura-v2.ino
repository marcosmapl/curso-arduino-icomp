/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
const int SENSOR_PIN = A5;

void setup() {
  pinMode(SENSOR_PIN, INPUT); // configura o pino A5 como pino de saída
  Serial.begin(9600);
}

void loop() {
  int sensor_val = analogRead(SENSOR_PIN); // lê voltagem do sensor
  Serial.println(sensor_val * 0.48828125); // converte para celsius
  delay(1000);
}
