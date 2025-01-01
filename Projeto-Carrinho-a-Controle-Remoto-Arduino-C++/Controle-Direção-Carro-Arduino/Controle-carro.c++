// direcao.ino
const int pinFrente = 2;
const int pinTras = 3;
const int pinEsquerda = 4;
const int pinDireita = 5;

void setup() {
  pinMode(pinFrente, OUTPUT);
  pinMode(pinTras, OUTPUT);
  pinMode(pinEsquerda, OUTPUT);
  pinMode(pinDireita, OUTPUT);
}

void loop() {
  // Exemplo de controle do carro
  // Mover para frente
  digitalWrite(pinFrente, HIGH);
  delay(1000);
  digitalWrite(pinFrente, LOW);

  // Mover para trás
  digitalWrite(pinTras, HIGH);
  delay(1000);
  digitalWrite(pinTras, LOW);

  // Virar para a esquerda
  digitalWrite(pinEsquerda, HIGH);
  delay(1000);
  digitalWrite(pinEsquerda, LOW);

  // Virar para a direita
  digitalWrite(pinDireita, HIGH);
  delay(1000);
  digitalWrite(pinDireita, LOW);
}
