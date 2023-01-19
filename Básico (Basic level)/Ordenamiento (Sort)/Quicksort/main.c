#include <stdio.h>
#include <time.h>
#include "quicksort.h"
#include "qentero.h"

int main(){

  int i, TAM, cont_i, cont_c;
  
  printf("¿De cuantos elementos va a ser el arreglo a ordenar?: ");
  scanf("%d",&TAM);

  int ar_int[TAM];
  
  for(i=0;i<TAM;i++){
    srand(time(NULL));
    ar_int[i] = 10*i + rand() % ((10)*(i+1)-10*i);
  }

  /*Código aquí*/
  quicksort(ar_int, 0, TAM, swap_int, comp_int, sizeof(int*), &cont_i, &cont_c);
  
  printf("El arreglo ordenado es: \n");
  for(i=0;i<TAM;i++)
    printf(" %d ",ar_int[i]);
  printf("\n\n");
  
  printf("Intercambios realizados: %d ",cont_i);
  printf("Comparaciones realizadas: %d ",cont_c);
  return 0;
}

/*
int main(){
   int i, count, number[25];

   printf("¿Cuantos elementos va a ingresar?: ");
   scanf("%d",&count);

   printf("Ingrese %d elementos: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

  srand(time(NULL));
  int test = rand() % 5;

   quicksort(number,0,count-1);

   printf("Elemntos ordenados: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
*/