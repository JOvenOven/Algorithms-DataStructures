#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo{
	int placa;
	struct nodo* siguiente;
}nodo;

typedef nodo* coche;
void insertar (coche *lista, int num);

int main()
{
	int num,res;
	char let;
	printf ("\n lista de modelos y placas de coches\n");
	coche lista;
	lista=NULL;

	do
	{
		printf ("Ingrese la placa\n");
		scanf ("%d",&num);
		insertar (&lista,num);
		printf ("desea meter otro coche? si=1 o no=0\n");
		scanf("%d",&res);
	}

	while (res!=0);
	printf ("la lista es:\n");
	
	while(lista != NULL)
	{ 
    	printf("%d\n",lista->placa); 
        lista = lista->siguiente;
    }

	return 0;
}



void insertar (coche *lista, int num)
{
    coche nuevo; 
    nuevo = (nodo*)malloc(sizeof(nodo)); 
    nuevo->placa = num; 
    nuevo->siguiente = *lista; 
    *lista = nuevo; 
}