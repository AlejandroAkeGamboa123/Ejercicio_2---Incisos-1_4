/*Ejercicio 1 - Inciso 3 -> (2 + 5y)/(x - 3) + 4x - (7 - y)^(1/3)*/

/*Incluir las directivas de procesamiento, pertinentes*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	printf("Expresion matematica = (2+5y)/(x-3) + 4x - (7-y)^(1/3)\n\n");
	
	/*Entrada*/
	/*Solicitarle al usuario, el valor de x*/
	float x;
	printf("Valor de x: ");
	scanf("%f",&x);
	/*Validar que x <> 3*/
	while (x==3)
	{
		printf("*Valor de x <> 3*\n");
		printf("Valor de x: ");
		scanf("%f",&x);	
	}
	printf("\n");
	/*Solicitarle al usuario, el valor de y*/
	float y;
	printf("Valor de y: ");
	scanf("%f",&y);
	
	/*Procedimiento*/
	/*Elevar la expresion 7-y a (1/3)*/
	double pot;
	pot = pow(7-y,1.0/3.0);
	printf("%f",pot);
	/*Una vez hallada la raiz cubica de esa expresion, pasar al siguiente paso*/
	float result;
	result = ((2+(5*y))/(x-3)) + 4*x - pot;
	
	/*Salida*/
	printf("\n");
	printf("Resultado: %f",result);
	
	return 0;
}
