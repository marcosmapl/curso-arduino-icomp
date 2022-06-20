/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#define CAR_VERM 12
#define CAR_AMAR 11
#define CAR_VERD 10
#define PED_VERM 3
#define PED_VERD 2
#define BUTTON_PIN 8
#define CROSS_TIME 5000 // tempo cruzamento
unsigned long changeTime = 0;

void setup()
{
  pinMode(CAR_VERM, OUTPUT);
  pinMode(CAR_AMAR, OUTPUT);
  pinMode(CAR_VERD, OUTPUT);
  pinMode(PED_VERM, OUTPUT);
  pinMode(PED_VERD, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(CAR_VERD, HIGH);
  digitalWrite(PED_VERM, HIGH);
}

void loop()
{
  if (digitalRead(BUTTON_PIN) && (millis() - changeTime) > 5000) {
    abrirPedestre();
  }
}

void abrirPedestre() {
  trocarLEDS(CAR_VERD, CAR_AMAR);
  delay(2000);
  trocarLEDS(CAR_AMAR, CAR_VERM);
  delay(1000);
  
  trocarLEDS(PED_VERM, PED_VERD);
  delay(CROSS_TIME);
  
  blinkLED(PED_VERD, 250, 10);

  trocarLEDS(PED_VERD, PED_VERM);
  delay(500);
  
  trocarLEDS(CAR_VERM, CAR_VERD);
  changeTime = millis();
}

void blinkLED(unsigned int ledPin, unsigned int blinkInterval, unsigned int reps) {
  for (unsigned int x = 0; x < reps; x++) {
    digitalWrite(ledPin, HIGH);
    delay(blinkInterval);
    digitalWrite(ledPin, LOW);
    delay(blinkInterval);
  }
}

void trocarLEDS(unsigned int desativarLed, unsigned int ativarLed) {
  digitalWrite(desativarLed, LOW);
  digitalWrite(ativarLed, HIGH);
}
