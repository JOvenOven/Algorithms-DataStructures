#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	typedef struct tel{
		int numero;
		struct tel* liga;
	}tel;

	int nums,num_tel;
	typedef tel* tel_list;
	tel_list lista=NULL;

	printf("Cuantos numeros de telefono va a anadir al directorio?\n");
	scanf("%d", &nums);

	for (int i = 0; i < nums; ++i)
	{
		tel_list nuevo; 
	    nuevo = (tel*)malloc(sizeof(tel)); 
	    printf("Escriba el numero de telefono\n");
		scanf("%d", &num_tel);
	    nuevo->numero = num_tel; 
	    nuevo->liga = lista; 
	    lista = nuevo; 
	}

	printf("La lista de los numeros de telefono con su respectiva direccion de memoria es:\n");
	while(lista != NULL)
	{ 
    	printf("%d\n",lista->numero);
    	printf("%p\n\n",lista);
        lista = lista->liga;
    }

	return 0;
}