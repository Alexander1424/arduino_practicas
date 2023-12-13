// Definición de pines
const int PIN_ZUMBADOR = 10;

// Array de frecuencias correspondientes a las notas musicales
int notas[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014, 956};

// Definición de tiempos
int tnota = 100; // Tiempo de duración de cada nota
int pausa = 100; // Tiempo de pausa entre notas

void setup() {
  pinMode(PIN_ZUMBADOR, OUTPUT); // Establecer el pin del zumbador como salida
}

void loop() {
  for (int n = 0; n < 8; n++) {
    int frecuencia = notas[n]; // Obtener la frecuencia de la nota actual
    
    // Generar la nota musical
    tone(PIN_ZUMBADOR, frecuencia); // Activar el zumbador con la frecuencia
    delay(tnota); // Mantener la nota durante el tiempo definido
    
    noTone(PIN_ZUMBADOR); // Apagar el zumbador
    delay(pausa); // Pausa entre notas
  }

  delay(pausa * 5); // Pausa al final de la secuencia de notas
}
