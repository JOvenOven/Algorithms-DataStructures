#include <stdio.h>
#include <stdlib.h>

void modificarPalabra(char *palabra);

int main(int argc, char const *argv[])
{
	char *dirpalabra; //Apuntador que dará con la palabra ingresada por el usuario y la modificada
	char palabra[20];

	dirpalabra=palabra; //Asignamos al apuntador la dirección de memoria del vector palabra

	printf("Ingrese una palabra:\n");
	scanf("%s", dirpalabra); //La dirección de memoria de palabra se da a la funcion scanf a través del apuntador

	modificarPalabra(dirpalabra);//se hace paso por referencia a la funcion, del arreglo que contiene la palabra

	printf("La palabra modificada es: %s\n", dirpalabra); //Se hace referencia a la palabra ya modificada a traves del apuntador
	return 0;
}

void modificarPalabra(char *palabra){
	int cont=0, indicador=0, j=-1, ban=1;
	char provisional[20];

	for (int i = 0; *(palabra+i)!='\0'; ++i)
	{
		provisional[i]=*(palabra+i); //Hacemos copia de la palabra en otro arreglo utilizando un poco de aritmetica de apuntadores
		cont++;
	}
	
	for (int i = 0; ban!=0; ++i)
	{
		if (indicador)
		{
			j=j+3;
			if (j>=cont)
			{
				ban=0;
			}else{
				*(palabra+j)=provisional[i]; //aritmetica de apuntadores
				indicador=0;
			}
			
		}else{
			j++;
			if (j>=cont){
				ban=0;
			}else{
				*(palabra+j)=provisional[i]; //aritmetica de apuntadores
				indicador=1;
			} 
		}
	}

	j=-2;
	indicador=1;
	ban=1;
	for (int i = 0; ban!=0; ++i)
	{
		if (indicador)
		{
			j=j+3;
			if (j>=cont)
			{
				ban=0;
			}else{
				*(palabra+j)=provisional[cont-i-1]; //aritmetica de apuntadores
				indicador=0;
			}
			
		}else{
			j++;
			if (j>=cont){
				ban=0;
			}else{
				*(palabra+j)=provisional[cont-i-1]; //aritmetica de apuntadores
				indicador=1;
			} 
		}
	}
}