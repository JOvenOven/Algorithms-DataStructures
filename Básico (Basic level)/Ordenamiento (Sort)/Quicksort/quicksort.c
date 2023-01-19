#include<stdio.h>
#include "quicksort.h"
#include "qentero.h"

int quicksort(int* arreglo,int primero, int ultimo, f_swap fs, f_comp fc, int tam_dat, int* cont_i, int* cont_c){
   int i, j, pivote, temp;
   /*Verificar parámetros*/
   if (!(APU_VAL(arreglo)&&APU_VAL(fc)))
      return APU_INV;
   if(!TAM_VAL(ultimo))
      return TAM_INV;
   /*ordena usando ordenamiento rápido*/
   if(primero<ultimo){
      pivote=primero;
      i=primero;
      j=ultimo;

      while(i<j){
         while(arreglo[i]<=arreglo[pivote]&&i<ultimo){
            i++;
            *(cont_c)++;
         }
         while(arreglo[j]>arreglo[pivote]){
            j--;
            *(cont_c)++;
         }
         if(i<j){
            temp=arreglo[i];
            arreglo[i]=arreglo[j];
            arreglo[j]=temp;
            *(cont_i)++;
         }
      }

      temp=arreglo[pivote];
      arreglo[pivote]=arreglo[j];
      arreglo[j]=temp;
      quicksort(arreglo,primero,j-1,swap_int, comp_int, sizeof(int*), cont_i, cont_c);
      quicksort(arreglo,j+1,ultimo,swap_int, comp_int, sizeof(int*), cont_i, cont_c);

   }
   
   return OK;
}
