#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define TAM_ENT    4

/*Objetivo:
  Comenzando de una cadena, simular el ejercicio de las 
  vias del tren y obtener otra utilizando una pila.
*/

int main(){
  char salida[10000];
  
  int entrada[TAM_ENT] = {1,2,3,4};
  pila p;
  int err,tope,i;
  
  inic_pil(&p);
  
  /*Ciclo para todas las pruebas*/
  crea_pil(&p);
  
  for(i=0;i<TAM_ENT;i++){
    push_pil(&p,entrada[i]);
    tope_pil(&tope,&p);
    printf(" %d ",tope);
    pop_pil(&p);
  }
  printf("\n");
  elim_pil(&p);
  return 0;
}
