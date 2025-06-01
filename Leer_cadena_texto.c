#include <stdio.h>

int main() {
	//Declaramos Variables
	const int tamanio_cadena = 40; //Toco declararla como constante para que el compilador deje funcionar
	char nombre[tamanio_cadena]; //Aqui reservamos el espacio de memoria para la cadena de texto, con la cantidad de valores que determinamos en tamanio_cadena
	
	//Pedimos datos
	printf("Proporciona tu nombre: ");
	scanf("%[^'\n']s ", nombre); // [^'\n'] esto hace que lea toda la linea completa, sino se corta apenas vea un espacio en blanco
	
	printf("Hola %s ", nombre);
	return 0;
}
