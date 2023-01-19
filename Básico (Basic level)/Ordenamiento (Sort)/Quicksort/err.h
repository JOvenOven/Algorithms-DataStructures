#ifndef _ERR_H
#define _ERR_H

#include <stdlib.h>

/**********************************************************
*               Constantes de error                       *
**********************************************************/

#define OK         0  /*No hay error*/
#define APU_INV    1  /*Apuntador nulo recibido*/
#define TAM_INV    2  /*TamaÃ±o de arreglo no valido*/

/**********************************************************
*               Constantes de error                       *
**********************************************************/

#define APU_VAL(p)  (p)!=NULL  /*Apuntador no nulo*/
#define TAM_VAL(n)  (n)>0      /*TamaÃ±o de arreglo 
                                 alemnos 1*/


#endif