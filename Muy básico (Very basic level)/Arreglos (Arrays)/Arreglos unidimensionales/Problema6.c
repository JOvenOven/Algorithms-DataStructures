#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int nums[1000], nums_2[1000],i1,i2,j;

	do
	{
		printf("Ingrese el primer indice que sea menor a 12: \n");
		scanf("%d",&i1);
	} while (i1>=12);

	do
	{
		printf("Ingrese el segundo indice que sea menor a 1000: \n");
		scanf("%d",&i2);
	} while (i2>1000);

	printf("El arreglo original es: \n");
	srand(time(NULL));
	for (int i = 0; i < 1000; i++)
	{
		nums[i] = rand() % 1001;
		printf("%d ", nums[i]);
	}

	for (int i = i1; i <= i2; i++)
	{
		j = i-i1;
		nums_2[j] = nums[i];
	}

	printf("\nEl arreglo que va desde  la posicion %d hasta la posicion %d es: \n", i1, i2);
	for (int i = 0; i < i2-i1+1; i++)
	{
		printf("%d ", nums_2[i]);
	}

	return 0;
}