#include "qentero.h"

int swap_int(void* a,void* b){
  int* i_a, *i_b;
  int aux;
  i_a = (int*)a;
  i_b = (int*)b;
  aux = *i_a;
  *i_a = *i_b;
  *i_b = aux;
  return OK;
}
int comp_int(void* a,void* b){
  int* i_a, *i_b;
  i_a = (int*)a;
  i_b = (int*)b;
  return *i_a>*i_b?1:*i_a<*i_b?-1:0;
}

int p_swap_int(void* a,void* b){
  int** i_a, **i_b;
  int* aux;
  i_a = (int**)a;
  i_b = (int**)b;
  aux = *i_a;
  *i_a = *i_b;
  *i_b = aux;
  return OK;
}
int p_comp_int(void* a,void* b){
  int** i_a, **i_b;
  i_a = (int**)a;
  i_b = (int**)b;
  return **i_a>**i_b?1:**i_a<**i_b?-1:0;
}