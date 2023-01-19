#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int c, i, n;
	printf ("Ingresa un número: ");
	scanf ("%d",&i);
	n = 2;
	c = 0;
	
	while ( c <  i )
	{
		printf( "%d\n", n );
		if ( n % 2 == 0 )
		{
			n = n+5;
		}
		else
		{
			n = n+3;	
		}
		c++;	
	}
	return 0;
}
