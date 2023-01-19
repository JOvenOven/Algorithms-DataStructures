#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int nums[100], numsrotados[100], j;
	j=0;

	printf("El arreglo original es: \n");
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		nums[i] = rand() % 1001;
		printf("%d ", nums[i]);
	}

	for (int i = 50; i < 100; i++)
	{
		j = i - 50;
		numsrotados[j] = nums[i];
	}

	for (int i = 0; i < 50; i++)
	{
		j = i + 50;
		numsrotados[j] = nums[i];
	}

	printf("\nEl arreglo intercambiado es: \n");
	for (int i = 0; i < 100; i++)
	{
		printf("%d ", numsrotados[i]);
	}

	return 0;
}