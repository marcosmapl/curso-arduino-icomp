/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#define ECHO_PIN 3
#define TRIGGER_PIN 2

unsigned long duracao;
float distancia;

void setup() {
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIGGER_PIN, LOW);    // desativa o sensor
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);   // ativa o sensor por 10ms
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);    // desativa o sensor
  duracao = pulseIn(ECHO_PIN, HIGH); // lê a duracao da onda em ms
  distancia = duracao * 0.034 / 2;   // calcula a distancia em cm
  Serial.println(distancia);
}
