/*Ejercicio 1 - Inciso 4 -> ((2xy + 5y)/(x-3)) - ((4x - xy)/(7 - (y)/(4 + x))^(1/3))*/

/*Incluir las directivas, a utilizar*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	printf("Expresion matematica = (2xy + 5y)/(x-3) - (4x - xy)/(7 - (y)/(4 + x))^(1/3)\n\n");
	
	/*Entrada*/
	/*Solicitarle al usuario, el valor de la variante x*/
	float x;
	printf("Valor de x: ");
	scanf("%f",&x);
	/*Validar que x <> 3, y tambien, que x <> -4*/
	if (x==3 || x==-4){
		while (x==3 || x==-4)
		{
			printf("*Valores para x <> 3 y <> -4*\n");
			printf("Valor de x: ");
			scanf("%f",&x);
		}
	}
	printf("\n");
	/*Solicitarle al usuario, el valor de la variante y*/
	float y;
	printf("Valor de y: ");
	scanf("%f",&y);
	/*Validar que y <> 7*/
	if (y==7)
	{
		while (y==7)
		{
			printf("*Valores para y <> 7*\n");
			printf("Valor de y: ");
			scanf("%f",&y);
		}
	}
	
	/*Procedimiento*/
	/*Calcular la raiz cubica de la expresion dada*/
	float constan, pot;
	constan = 7 - ((y)/(4 + x));
	pot = pow(constan,1.0/3.0);
	/*Sustituir la variable 'pot' en la siguiente expresion*/
	float result;
	result = ((2*x*y) + (5*y))/(x - 3) - ((4*x) - (x*y))/(pot);
	
	/*Salida*/
	printf("\n");
	printf("Resultado: %f",result);
	
	return 0;
}
