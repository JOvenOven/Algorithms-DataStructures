#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,k,n;
	float piv,aux;
	
	n = 5;
	srand(time(NULL));
	
	float mo[n][n];
	float mi[n][n];
	
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
	
	printf("La matriz original es :\n");
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			printf("%0.1f ",mo[i][j]);
		}
		printf("\n");
	}
	
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
	printf("\n");
	printf("La matriz modificada es :\n");
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			printf("%0.1f ",mo[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("La matriz inversa es :\n");

	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			printf("%0.3f ",mi[i][j]);
		}
		printf("\n");
	}

	return 0;
}
