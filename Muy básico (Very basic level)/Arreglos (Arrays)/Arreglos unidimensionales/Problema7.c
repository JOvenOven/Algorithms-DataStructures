#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

int main()
{
	int n,i,op,p,q,l;
	n = 1000;
	l=0;
	int arr[n];
	int arr2[n];
	srand(time(NULL));
	
	printf("La sucecion de numeros es =\n");
	for( i = 0 ; i<n ; i++ )
	{
		arr[i] = rand()%1000;
		printf("%d ",arr[i]);
		fflush(stdin);
		arr2[i] = arr[i];
	}
	
	printf("\n");
	printf("¿Que opcion desea?\n");
	fflush(stdin);
	printf("1.- Mostrar los numeros que son mayores al numero que elijas\n");
	fflush(stdin);
	printf("2.- Mostrar los numeros que son menores al numero que elijas\n");
	fflush(stdin);
	printf("3.- Mostrar los numeros que se encuentran entre los numeros que elijas\n");
	fflush(stdin);
	scanf("%d", &op);
	fflush(stdin);
	
	
	
	switch (op)
	{
		case 1:
			printf("Ingresa tu numero: \n");
			scanf("%d",&p);
			for( i = 0 ; i < n ; i++ )
			{
				if(p <= arr2[i])
				{
					l++;
					printf("El numero %d es mayor o igual el numero %d y se encuentra en la posicion %d\n",arr2[i],p,i);
				}
			}
			printf("La cantidad de numeros mayores o iguales al tuyo es = %d\n",l);
			
		break;
		
		case 2:
			printf("Ingresa tu numero: \n");
			scanf("%d",&p);
			for( i = 0 ; i < n ; i++ )
			{
				if(p >= arr2[i])
				{
					l++;
					printf("El numero %d es menor o igual el numero %d y se encuentra en la posicion %d\n",arr2[i],p,i);
				}
			}
			printf("La cantidad de numeros menores o iguales al tuyo es = %d\n",l);
		break;
		
		case 3:
			printf("Ingresa tus numeros: \n");
			printf("Ingresa el numero menor: \n");
			scanf("%d",&p);
			printf("Ingresa el numero mayor: \n");
			scanf("%d",&q);
			for( i = 0 ; i < n ; i++ )
			{
				if(p<=arr2[i] && arr2[i]<=q)
				{
					l++;
					printf("El numero %d esta entre los numeros %d y %d y esta en la posicion %d\n",arr2[i],p,q,i);
				}
			}
			printf("La cantidad de numeros que estan entre %d y %d es = %d\n",p,q,l);
		break;
		
	}
	
	
	return 0; 
}
