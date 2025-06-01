#include <stdio.h>
#include <stdbool.h>

int main() {
	//Vamos a dar el tamaño de cada tipo de dato, para ello vamos a usar la función sizeof
	
	//Como siempre el primer paso es declarar variables
	int entero;
	float flotante;
	double doble;
	char caracter;
	char cadena[] ="Hola Mundo";
	bool booleano = true;
	
	//Imprimimos cada variable (size)
	//Para mostrar el tamaño se usa %lu que dice (Long unsigned)
	
	//1 Byte es 8 Bits
	
	printf("\nEl tamaño de un int en bytes es: %lu", sizeof(entero));
	printf("\nEl tamaño de un float en bytes es: %lu", sizeof(flotante));
	printf("\nEl tamaño de un double en bytes es: %lu", sizeof(doble));
	printf("\nEl tamaño de un char en bytes es: %lu", sizeof(caracter));
	printf("\nEl tamaño de una cadena de texto  en bytes es: %lu", sizeof(cadena));
	printf("\nEl tamaño de un booleano en bytes es: %lu", sizeof(booleano));
	
	return 0;
}
