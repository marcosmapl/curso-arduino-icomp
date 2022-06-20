/*
 * UNIVERSIDADE FEDERAL DO AMAZONAS - UFAM
 * INSTITUTO DE COMPUTAÇÃO - ICOMP
 * CURSO INTRODUÇÃO AO ARDUINO
 * MARCOS A. P. DE LIMA
 * MARCOS.LIMA@ICOMP.UFAM.EDU.BR
 * JUN, 2022
 */
#define RLED_PIN 11
#define GLED_PIN 9
#define BLED_PIN 10

String str = ",";
const byte ledPins[] = {RLED_PIN, GLED_PIN, BLED_PIN};
                      
void setup() {
  for (byte x = 0; x < 3; x++)
    pinMode(ledPins[x], OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (unsigned int r = 0; r < 256; r += 5)
    for (unsigned int g = 0; g < 256; g += 5)
      for (unsigned int b = 0; b < 256; b += 5) {
        rgb_color(r, g, b);
        delay(25);
      }
}               

void rgb_color(unsigned int r, unsigned int g, unsigned int b) {
  analogWrite(RLED_PIN, r);
  analogWrite(GLED_PIN, g);
  analogWrite(BLED_PIN, b);
  Serial.print("RGB = ");
  Serial.println(r + str + g + str + b);
}
