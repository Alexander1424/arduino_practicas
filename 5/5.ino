void setup() {
  for (int i = 5; i <= 11; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 5; i <= 11; i++) {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }

  for (int i = 11; i >= 5; i--) {
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
}