const int ledPins[] = {5, 6, 7, 8, 9};
const int numLeds = 5;
const int buzzerPin = 10;
const int buttonPin = 11;

int currentLed = 0;
int delayTime = 200;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  digitalWrite(ledPins[currentLed], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[currentLed], LOW);
  delay(delayTime);

  if (digitalRead(buttonPin) == LOW) {
    // Botón pulsado cuando el LED intermedio se enciende
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);

    // Aumentar la velocidad de la secuencia
    delayTime -= 20;
    if (delayTime < 10) {
      delayTime = 200;
    }
  }

  currentLed = (currentLed + 1) % numLeds;
}