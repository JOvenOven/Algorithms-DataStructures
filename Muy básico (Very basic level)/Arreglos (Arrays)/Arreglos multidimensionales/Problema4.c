#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	int n,i,j,m;
	n= 5;
	float A[n][n];
	srand(time(NULL));
	
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			A[i][j] = rand()%100;	
		}	
	}
	
	printf("La matriz original es = \n");
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			printf("%0.1f ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Ingresa el valor de m = ");
	scanf("%d",&m);
	
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			A[i][j] = pow(A[i][j],m);	
		}
	}
	printf("\n");
	printf("La matriz elevada a %d es = \n",m);
	for( i = 0 ; i < n ; i++ )
	{
		for( j = 0 ; j < n ; j++ )
		{
			printf("%0.3f ",A[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
