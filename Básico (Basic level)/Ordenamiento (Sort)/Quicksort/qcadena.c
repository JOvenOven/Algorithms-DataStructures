#include "qcadena.h"

int swap_str(void* a,void* b){
  char* aux;
  char** s_a,**s_b;
  s_a = (char**)a;
  s_b = (char**)b;
  aux = *s_a;
  *s_a=*s_b;
  *s_b = aux;
  return OK;
}
int comp_str(void* a,void* b){
  char** s_a,**s_b;
  s_a = (char**)a;
  s_b = (char**)b;
  return strcmp(*s_a,*s_b);
}
