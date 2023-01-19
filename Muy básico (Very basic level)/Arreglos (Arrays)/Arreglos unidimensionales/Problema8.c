#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	int n,l,i,op;
	n = 1000;
	l =0;
	int arr[n];
	srand(time(NULL));
	
	
	for( i = 0 ; i < n ; i++ )
	{
		arr[i] = rand()%1000;
	}
	
	printf("¿Que opcion desea?\n1.- Mostrar el valor y posicion de los numeros primos\n2.- Mostrar los numeros perfectos y su posicion.\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1 :
			for( i = 0 ; i < n ; i++ )
			{
				if(arr[i] % 2 == 0)
				{
					i;
				}
				else
				{
					printf("El numero %d es primo y esta en la posicion %d\n",arr[i],i);
					l++;
				}
			}
			printf("Hat %d numeros primos\n",l);
		break;
		
		case 2 :
			for( i = 0 ; i < n ; i++ )
			{
				if(arr[i] == 6)
				{
					printf("El numero %d es perfecto y esta en la posicion %d\n", arr[i],i);
					l++;
				}
				else
				{
					if(arr[i] == 28)
					{
						printf("El numero %d es perfecto y esta en la posicion %d\n", arr[i],i);
						l++;
					}
					else
					{
						if(arr[i] == 6)
						{
							printf("El numero %d es perfecto y esta en la posicion %d\n", arr[i],i);
							l++;
						}	
					}	
				}
			}
			printf("Hay %d numeros perfectos\n",l);
		break;
	}
	
	return 0;
}

