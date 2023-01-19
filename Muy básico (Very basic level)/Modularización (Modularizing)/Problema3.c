#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void crearArrRandomEIdentidad(float[5][5], float[5][5]);
void mostrarArr(float[5][5]);
void matrizInversa(float[5][5], float[5][5]);
void mostrarArr3(float[5][5]);

int main()
{
	int n = 5;
	
	float mo[n][n];
	float mi[n][n];

	crearArrRandomEIdentidad(mo,mi);
	
	printf("La matriz original es :\n");
	mostrarArr(mo);

	matrizInversa(mo,mi);

	printf("\n");
	printf("La matriz modificada es :\n");
	mostrarArr(mo);

	printf("\n\n");
	printf("La matriz inversa es :\n");
	mostrarArr3(mi);

	return 0;
}


void crearArrRandomEIdentidad(float mo[5][5], float mi[5][5]){
	int i,j,k,n;
	n = 5;

	srand(time(NULL));
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			mo[i][j] = rand()%100;
			mi[i][j] = 0;
			if(i==j)
			{
				mi[i][j]=1;
			}
		}
	}
}

void mostrarArr(float mo[5][5]){
	int i,j,k,n;
	n = 5;

	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			printf("%0.1f ",mo[i][j]);
		}
		printf("\n");
	}
}

void matrizInversa(float mo[5][5], float mi[5][5] ){
	int i,j,k,n;
	float piv,aux;
	n = 5;

	for( i = 0 ; i < n ; i++ )
	{
		piv = mo[i][i];
		
		for( k = 0 ; k < n ; k++ )
		{
			mo[i][k]=mo[i][k]/piv;
			mi[i][k]=mi[i][k]/piv;
		}
		for( j = 0 ; j < n ; j++ )
		{
			if(i!=j)
			{
				aux = mo[j][i];
				for( k = 0 ; k < n ; k++ )
				{
					mo[j][k] = mo[j][k]-aux*mo[i][k];
					mi[j][k] = mi[j][k]-aux*mi[i][k];
				}
			}
		}
	}
}

void mostrarArr3(float mi[5][5]){
	int i,j,k,n;
	n = 5;

	for( i = 0 ; i < n ; i++ ){
		for( j = 0 ; j < n ; j++ ){
			printf("%0.3f ",mi[i][j]);
		}
		printf("\n");
	}
}
