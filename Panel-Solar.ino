
// Declaramos los pines a los que estan conectados los Mosfets al Arduino.

#define INAHI 3
#define INALO 2
#define INBHI 5
#define INBLO 4


void setup() {

// Habilitamos los pines como salida.

  pinMode(INAHI, OUTPUT);
  pinMode(INBHI, OUTPUT);
  pinMode(INALO, OUTPUT);
  pinMode(INBLO, OUTPUT);

}

void loop() {

// Hacemos la logica para que se activen esquinados y que cambien cada 2 segundos

  digitalWrite(INAHI, HIGH);
  digitalWrite(INALO, LOW);
  digitalWrite(INBHI, HIGH);
  digitalWrite(INBLO, LOW);

// Agregamos un delay de 2 segundos

  delay(2000);

  digitalWrite(INAHI, LOW);
  digitalWrite(INALO, HIGH);
  digitalWrite(INBHI, LOW);
  digitalWrite(INBLO, HIGH);

// Agregamos un delay de 2 segundos

  delay(2000);

}

