#include <Arduino.h>

void duplicar(int *punteroNumero);
int numero = 10;

void setup() {
  Serial.begin(115200);
}


void loop(){
	Serial.print("En loop(): numero =,"); //En loop():numero = 10
	Serial.println(numero);
	duplicar( &numero ); //Pasamos la direccion de numero a ala funcion

}

void duplicar(int *punteroNumero) {
	*punteroNumero = *punteroNumero * 2;
	Serial.print("En duplicar(): punteroNumero = ");
	Serial.println(*punteroNumero);
}

