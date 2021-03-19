/*Ejercicio 1 - Inciso 2 -> (x + y)/((x/5) - (3/y)) + 2x*/

/*Inclusion de las directivas pertinentes*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	printf("Expresion matematica = (x + y)/[(x/5) - (3/y)] + 2x\n\n");
	
	/*Entrada*/
	/*Solicitar la variable x, al usuario*/
	float x;
	printf("Valor de x: ");
	scanf("%f",&x);
	printf("\n");
	/*Solicitar la variable y, al usuario*/
	float y;
	printf("Valor de y: ");
	scanf("%f",&y);
	
	/*Procedimiento*/
	float result;
	result = (x+y)/((x/5)-(3/y)) + 2*x;
	
	/*Salida*/
	printf("\n");
	printf("Resultado: %f",result);
	
	return 0;
}
