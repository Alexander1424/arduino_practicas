const int PIN_POTENCIOMETRO = A0; // Pin analógico para el potenciómetro
const int PIN_LED = 9; // Pin digital para el LED

void setup() {
  pinMode(PIN_LED, OUTPUT); // Configurar el pin del LED como salida
  Serial.begin(9600); // Iniciar comunicación serial a 9600 baudios
}

void loop() {
  int valorPotenciometro = analogRead(PIN_POTENCIOMETRO); // Leer el valor del potenciómetro
  int nivelLuminosidad;

  // Mostrar el valor del potenciómetro en el monitor serial
  Serial.print("Valor del potenciómetro: ");
  Serial.println(valorPotenciometro);

  // Determinar el nivel de luminosidad del LED según el valor del potenciómetro
  if (valorPotenciometro >= 0 && valorPotenciometro <= 512) {
    nivelLuminosidad = 255; // Nivel de potencia máxima
  } else if (valorPotenciometro > 512 && valorPotenciometro <= 1024) {
    nivelLuminosidad = 64; // Nivel de potencia 64
  }

  analogWrite(PIN_LED, nivelLuminosidad); // Establecer la luminosidad del LED
  delay(100); // Pequeña pausa para evitar lecturas muy rápidas y fluctuaciones
}
