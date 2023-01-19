#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include<stdio.h>
#include "err.h"

typedef int (*f_swap)(void*,void*);
typedef int (*f_comp)(void*,void*);

int quicksort(int* arreglo,int primero, int ultimo, f_swap fs, f_comp fc, int tam_dat, int* cont_i, int* cont_c);


#endif