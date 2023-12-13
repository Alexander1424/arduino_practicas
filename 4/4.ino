void setup() {
  for (int i = 3; i <= 8; i++) {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  digitalWrite(3, HIGH);
  digitalWrite(8, HIGH);
  delay(3000);

  digitalWrite(3, HIGH);
  for (int i = 6; i <= 7; i++) {
    digitalWrite(i, HIGH);
  }
  delay(500);
  for (int i = 6; i <= 7; i++) {
    digitalWrite(i, LOW);
  }
  delay(500);

  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(3000);

  for (int i = 3; i <= 4; i++) {
    digitalWrite(i, HIGH);
  }
  digitalWrite(6, HIGH);
  delay(500);
  for (int i = 3; i <= 4; i++) {
    digitalWrite(i, LOW);
  }
  digitalWrite(6, LOW);
  delay(500);
}