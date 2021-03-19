/*Ejercicio 1 - Inciso 1 -> (x + y)/(x - 3) + 2x*/

/*Inclusion de las directivas necesarias*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("Expresion matematica = (x+y)/(x-3) + 2x\n\n");
	
	/*Entrada*/
	/*Solicitar la variable x, al usuario*/
	float x;
	printf("Valor de x: ");
	scanf("%f",&x);
	/*Comprobar que x sea diferente a +3*/
	while (x==3)
	{
		printf("*Variable x <> 3*\n");
		printf("Valor de x: ");
		scanf("%f",&x);
	}
	/*Solicitar la variable y, al usuario*/
	printf("\n");
	float y;
	printf("Valor de y: ");
	scanf("%f",&y);
	
	/*Procedimiento*/
	float result;
	result = (x+y)/(x-3) + 2*x;
	printf("\n");
	
	/*Salida*/
	printf("Resultado: %f",result);
	
	return 0;
}
