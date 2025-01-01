// leds.ino
const int pinLED = 8;

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // Ligar LEDs
  digitalWrite(pinLED, HIGH);
  delay(500);
  digitalWrite(pinLED, LOW);
  delay(500);
}
