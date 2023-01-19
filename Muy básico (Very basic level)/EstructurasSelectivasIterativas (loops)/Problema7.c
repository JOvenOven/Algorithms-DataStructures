#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Ingresa un nunero:\t");
	scanf("%d",&n);
	
	if(n % 2==0)
	{
		printf("Tu numero %d\t",n);
		printf("es par\n",n);
	}
	else
	{
		printf("Tu numero %d\t",n);
		printf("es impar\n",n);
	}
	return 0;
}

