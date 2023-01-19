#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int datos[100], datosSinRepetir[100], i, j, cont, k, temp;
	k=0;

	//asignar datos aleatorios
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		//srand(time(NULL));
		datos[i] = rand() % 101;
	}

	//Mostrar arreglo original
	printf("La matriz original es :\n");
	for( i = 0 ; i < 100 ; i++ )
	{
		printf("%d ",datos[i]);
	}
	printf("\n");

	//buscar datos sin repetir
	for (i = 0; i < 100; i++){
		cont=0;
		for (j = 0; j < 100; j++){

			if (datos[i]==datos[j]){
				cont++;
			}
		}
		if (cont>=2){
			cont=cont;
		}else{
			datosSinRepetir[k] = datos[i];
			k++;
		}
	}

	printf("La matriz datosSinRepetir desordenada es:\n");
	for( i = 0 ; i < k ; i++ )
	{
		printf("%d ",datosSinRepetir[i]);
	}
	printf("\n");

	//ordenar arreglo
	for (i = 0; i < (k - 1); i++) 
  	{ 
    	for (j = i + 1; j < k; j++) 
    	{ 
	      	if (datosSinRepetir[j] < datosSinRepetir[i]) 
	      	{ 
	        	temp = datosSinRepetir[j]; 
	        	datosSinRepetir[j] = datosSinRepetir[i]; 
	        	datosSinRepetir[i] = temp; 
	      	} 
	    } 
	} 

	//Mostrar arreglo
	printf("La matriz datosSinRepetir ordenada es:\n");
	for( i = 0 ; i < k ; i++ )
	{
		printf("%d ",datosSinRepetir[i]);
	}
	printf("\n");

	return 0;
}