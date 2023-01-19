#include <stdio.h>
#include <stdlib.h>


int main() {
	int	num, par=0, co=0, des=0, ban=1;
	float i=0;
	
	do 
	{
		des=0;
		printf ("Introduzca un numero\n");
		scanf  ("%d", &num);
		if(num%2==0)
		{
			printf("\nEl numero es par\n");
			par=num+par;
		}else
		{
			printf("\nEl numero es impar\n");
			i=num+i;
			co=co+1;
		}
		printf ("\n¿Desea introducir otro valor?\n");
		printf ("1.si\n");
		printf ("2.no\n");
		scanf  ("%d", &des);
	} while (des==ban);
		i=i/co;
		printf ("La suma de los pares es: %d\n",par);
		printf ("El promedio de los impares es: %0.3f\n",i);
	return 0;
}