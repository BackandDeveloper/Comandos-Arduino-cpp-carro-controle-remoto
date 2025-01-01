// farois.ino
const int pinFarol = 6;

void setup() {
  pinMode(pinFarol, OUTPUT);
}

void loop() {
  // Ligar e desligar faróis
  digitalWrite(pinFarol, HIGH);
  delay(500);
  digitalWrite(pinFarol, LOW);
  delay(500);
}
