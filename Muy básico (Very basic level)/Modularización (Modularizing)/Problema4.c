#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void crearArrAleatorio(float[5][5]);
void mostrarArr(float[5][5]);
void potenciaArr(float[5][5], int);


int main()
{
	int n, m;
	n= 5;
	float A[n][n];
	
	crearArrAleatorio(A);
	
	printf("La matriz original es = \n");
	mostrarArr(A);

	printf("\n");
	printf("Ingresa el valor de m = ");
	scanf("%d",&m);
	
	potenciaArr(A,m);

	printf("\n");
	printf("La matriz elevada a %d es = \n",m);

	mostrarArr(A);

	return 0;
}


void crearArrAleatorio(float A[5][5]){
	int n,i,j;
	n= 5;

	srand(time(NULL));
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			A[i][j] = rand()%100;	
		}	
	}
}

void mostrarArr(float A[5][5]){
	int n,i,j;
	n= 5;

	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			printf("%0.1f ",A[i][j]);
		}
		printf("\n");
	}
}

void potenciaArr(float A[5][5], int m){
	int n,i,j;
	n= 5;

	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			A[i][j] = pow(A[i][j],m);	
		}
	}
}
