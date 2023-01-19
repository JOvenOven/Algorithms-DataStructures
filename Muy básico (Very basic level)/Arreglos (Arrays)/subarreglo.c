#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int a[100],sub[100],j,k,num;

int ASIGazar()
{
	printf("La matriz original es:\n");
	srand(time(NULL));
		for(j=0	;j<100;j++)
		{
			num=rand()%10+1;
			a[j]=num;
			printf("%d, ", a[j]);
		}
	printf("\n");
	return 0;
	}

int main()
{
	int inicial, final;
	ASIGazar();
	printf("Ingrese el valor inicial del subconjunto:\n");
	scanf("%d", & inicial);
	printf("ingrese el valor final del subconjunto:\n");
	scanf("%d", & final);
	printf("Los numeros del subconjunto son:\n");
	for(j=inicial;j<=final;j++)
	{
		sub[j]=a[j];
		printf("%d, ",sub[j]);
	}
}
