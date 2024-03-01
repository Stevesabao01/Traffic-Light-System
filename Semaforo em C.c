#include <stdio.h>
#define VERMELHO_SEMAFORO_1 8
#define AMARELO_SEMAFORO_1 9
#define VERDE_SEMAFORO_1 10
#define VERMELHO_SEMAFORO_2 11
#define VERDE_SEMAFORO_2 12

void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}


void semaforo(int pin10, int pin9, int pin8, int pin12, int pin11) {
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  delay(3000);
  digitalWrite(9, HIGH);
  delay(3000);
  digitalWrite(9, LOW);
  delay(3000);
  digitalWrite(8, HIGH);
  delay(3000);
  digitalWrite(8, LOW);
  delay(3000);
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  delay(3000);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11, LOW);
}

void loop() {
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(5000);
  
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  delay(5000);
  
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(5000);
}

  SA