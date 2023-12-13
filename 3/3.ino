const int potPin = A0;  // Pin al que está conectado el potenciómetro
const int ledPin1 = 5;  // Pin para el primer LED
const int ledPin2 = 4;  // Pin para el segundo LED
const int ledPin3 = 3;  // Pin para el tercer LED

void setup() {
  pinMode(potPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  int valorPot = analogRead(potPin);  // Leer el valor del potenciómetro

  // Secuencia #1
  if (valorPot >= 0 && valorPot <= 500) {
    secuenciaUno();
  }
  // Secuencia #2
  else if (valorPot > 500 && valorPot <= 1000) {
    secuenciaDos();
  }
}

void secuenciaUno() {
  for (int i = 2; i <= 4; i++) {
    digitalWrite(i, HIGH);  // Encender LED actual
    delay(1000);  // Esperar 1 segundo
  }
}

void secuenciaDos() {
  for (int i = 4; i >= 2; i--) {
    digitalWrite(i, HIGH);  // Encender LED actual
    delay(1000);  // Esperar 1 segundo
    digitalWrite(i, LOW);  // Apagar LED actual
  }
}
