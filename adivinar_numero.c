#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int secreto, intento;
	
	// Inicializa la semilla para números aleatorios
	srand(time(NULL));
	secreto = rand() % 10 + 1; // Número aleatorio entre 1 y 10
	
	printf("¡Adivina el número secreto entre 1 y 10!\n");
	
	do {
		printf("Tu intento: ");
		scanf("%d", &intento);
		
		if (intento < secreto) {
			printf("Muy bajo. Intenta de nuevo.\n");
		} else if (intento > secreto) {
			printf("Muy alto. Intenta de nuevo.\n");
		} else {
			printf("¡Correcto! Adivinaste el número.\n");
		}
	} while (intento != secreto);
	
	return 0;
}
