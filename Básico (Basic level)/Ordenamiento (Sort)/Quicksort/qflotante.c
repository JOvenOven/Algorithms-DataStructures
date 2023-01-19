#include "qflotante.h"

int swap_float(void* a,void* b){
  float* f_a, *f_b;
  float aux;
  f_a = (float*)a;
  f_b = (float*)b;
  aux = *f_a;
  *f_a = *f_b;
  *f_b = aux;
  return OK;
}
int comp_float(void* a,void* b){
  float* f_a, *f_b;
  f_a = (float*)a;
  f_b = (float*)b;
  return *f_a>*f_b?1:*f_a<*f_b?-1:0;
}