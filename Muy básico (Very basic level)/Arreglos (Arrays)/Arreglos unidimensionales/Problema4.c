#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroAleatorio[1000];
    int numero1[1000];
    int numero2[1000];
    int i, j, f;

    /*cargar numeros aleatoreos*/
    srand(time(NULL));
    for(i = 0; i < 1000; i++){
    numeroAleatorio[i] = rand()%1000;
    }

    i = 0;
    j = 0;
    f = 0;

  
    while(f < 1000){
    if(numeroAleatorio[f] % 2 == 0){
    numero1[i] = numeroAleatorio[f]; 
    i++; 
    }else
	{
    numero2[j] = numeroAleatorio[f]; 
    j++; 
    }
    f++; 
    }

  

    printf("\tListado de Numeros Pares\n\n");
    for(f = 0; f < i; f++){
    printf("numero1[%d] = %d\n",f+1,numero1[f]);
    }

    printf("\n");

    printf("\tListado de Numeros Impares\n\n");
    for(f = 0; f < j; f++){
    printf("numero2[%d] = %d\n",f+1,numero2[f]);
    }

    return 0;
}


