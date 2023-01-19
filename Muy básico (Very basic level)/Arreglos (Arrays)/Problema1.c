#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int nums[100], sum;
	sum=0;

	srand(getpid());
	for (int i = 0; i < 100; i++)
	{
		//srand(time(NULL));
		//srand(getpid());
		nums[i] = rand() % 1001;
		if (nums[i]%2 == 0)
		{
			sum = sum + nums[i];
		}
	}

	printf("La suma de los numeros pares extraidos de 100 numeros aleatorios es: %d \n", sum);

	return 0;
}