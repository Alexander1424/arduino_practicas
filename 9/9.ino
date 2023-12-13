int ledPin = 9; // El pin al que está conectado el LED
int minValue = 50; // Valor mínimo de la intensidad de la llama
int maxValue = 255; // Valor máximo de la intensidad de la llama
int flickerSpeed = 100; // Velocidad de parpadeo de la llama en milisegundos

void setup() {
  pinMode(ledPin, OUTPUT);
  randomSeed(analogRead(0)); // Inicializa la generación de números aleatorios
}

void loop() {
  int randomValue = random(minValue, maxValue); // Genera un valor aleatorio entre minValue y maxValue
  analogWrite(ledPin, randomValue); // Establece la intensidad de la llama

  // Agrega un efecto de flicker al cambiar aleatoriamente la intensidad de la llama
  delay(random(flickerSpeed / 2, flickerSpeed));
}