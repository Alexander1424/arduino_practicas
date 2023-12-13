const int potPin = A1; // Pin del potenciómetro
const int rojoLedPin = 6; // Pin del LED rojo
const int amarilloLedPin = 7; // Pin del LED amarillo
const int verdeLedPin = 8; // Pin del LED verde

void setup() {
  pinMode(rojoLedPin, OUTPUT);
  pinMode(amarilloLedPin, OUTPUT);
  pinMode(verdeLedPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(potPin);
  int threshold1 = 300; // Establece el umbral para el LED rojo
  int threshold2 = 700; // Establece el umbral para el LED amarillo

  if (sensorValue < threshold1) {
    digitalWrite(rojoLedPin, HIGH);
    digitalWrite(amarilloLedPin, LOW);
    digitalWrite(verdeLedPin, LOW);
  } else if (sensorValue < threshold2) {
    digitalWrite(rojoLedPin, LOW);
    digitalWrite(amarilloLedPin, HIGH);
    digitalWrite(verdeLedPin, LOW);
  } else {
    digitalWrite(rojoLedPin, LOW);
    digitalWrite(amarilloLedPin, LOW);
    digitalWrite(verdeLedPin, HIGH);
  }
}