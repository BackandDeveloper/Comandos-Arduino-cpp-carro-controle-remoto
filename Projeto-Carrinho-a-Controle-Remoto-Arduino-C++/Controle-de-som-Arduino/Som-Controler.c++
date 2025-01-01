// som.ino
const int pinSom = 7;

void setup() {
  pinMode(pinSom, OUTPUT);
}

void loop() {
  // Ligar som
  digitalWrite(pinSom, HIGH);
  delay(500);
  digitalWrite(pinSom, LOW);
  delay(500);
}
