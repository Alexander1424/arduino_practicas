const int pulsadorPin = 4; 

void setup() {
  for (int i = 5; i < 9; i++) {
    pinMode(i, OUTPUT); 
  }
  pinMode(pulsadorPin, INPUT_PULLUP); 
}

void encenderSecuencialmente() {
  for (int i = 5; i < 9; i++) {
    digitalWrite(i, HIGH); 
    delay(200); 
    digitalWrite(i, LOW); 
  }
}

void loop() {
  if (digitalRead(pulsadorPin) == LOW) { 
    encenderSecuencialmente(); 
    delay(200); 
}
}