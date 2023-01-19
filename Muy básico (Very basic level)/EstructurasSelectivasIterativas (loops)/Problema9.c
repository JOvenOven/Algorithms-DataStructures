#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num1, num2, res, macodiv;
	
	printf( "Ingrese un numero entero\n" );
	scanf( "%d", &num1 );
	
	printf( "Ingrese otro numero entero\n" );
	scanf( "%d", &num2 );
	
	do{
		res = num1 % num2;
		
		if( res != 0 )
		{
		 num1 = num2;
		 num2 = res;
		}
		else
		{
			macodiv = num2;
		}
	} while( res != 0 );
	
	printf( "El maximo comun divisor es: %d\n", macodiv ); 
	
	return 0;
}