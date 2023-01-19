#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int nums[100], num_usr, cont;
	cont=0;
	num_usr=0;

	printf("Ingrese el numero que quiere buscar entre 100 numeros aleatorios del 1 al 1000\n");
	scanf("%d",&num_usr);

	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		//srand(time(NULL));
		nums[i] = rand() % 1001;
		if (nums[i] == num_usr)
		{
			cont = cont + 1;
		}
	}

	if (cont == 0)
	{
		printf("No se ha encontrado ninguna coincidencia\n");
	}else{
		printf("El numero se repite %d veces\n", cont);
	}	

	return 0;
}