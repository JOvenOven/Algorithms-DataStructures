#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ordenarArrBidi( int[30][15], int, int );
void crearArrRandom(int[30][15]);
void mostrarArr(int[30][15]);

int main(int argc, char *argv[]) 
{
  int bidi[30][15];
  
  //Crear arreglo aleatorio
  crearArrRandom(bidi);
  
  //Mostrar arreglo original
  mostrarArr(bidi);

  ordenarArrBidi( bidi, 15, 30 );  
  printf("\n\n");
  
  //Mostrar arreglo ordenado
  mostrarArr(bidi);
  
	return 0;
}

void ordenarArrBidi( int dosD[30][15], int n, int m )
{
  int k, aux, j, i;  

  for( j = 0; j < m; j++ )
  {
    for( i = 0; i < n; i++ )
    {
      for( k = i+1; k < n; k++ )
      {
        if( dosD[j][i] > dosD[j][k] )
        {
          aux = dosD[j][i];
          dosD[j][i] = dosD[j][k];
          dosD[j][k] = aux;
        }
      }
    }
  }
}

void crearArrRandom(int bidi[30][15]){
  int m, n, j, i;
  m = 30;
  n = 15;

  srand( time(NULL) );
  for( j = 0; j < m; j++ )
  {
    for( i = 0; i < n; i++ )
    {
      bidi[j][i] = rand() % 50;
    }
  }
}

void mostrarArr(int bidi[30][15]){
  int m, n, j, i;
  m = 30;
  n = 15;

  for( j = 0; j < m; j++ )
  {
    for( i = 0; i < n; i++ )
    {
      printf("%d ", bidi[j][i]);
    }
    printf( "\n" );
  }
}
