#include <stdio.h>

int main (){
	
	int numero1, numero2, suma, resta; //Declaramos variables

	printf("Ingresa el primer número entero "); //Pedimos el primer número
	scanf("%d", &numero1);
	
	printf("Ingresa el segundo número entero "); //Pedimos el segundo número
	scanf("%d", &numero2);
	
	suma = numero1 + numero2; //Sumamos
	resta = numero1 - numero2; //Restamos

  //imprimimos
  
	printf("sumar %d con %d da como resultado: %d ", numero1, numero2, suma);
	
	printf("\n");
		   
	printf("Pero si restamos ambos números nos da: %d ", resta);
	
	return 0;
	
}
