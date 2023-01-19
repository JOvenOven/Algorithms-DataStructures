#include <stdio.h>
#include <stdlib.h>

int strlon(char cadena[]);

int main(int argc, char *argv[]) 
{
	int	j,k,tamano;
	int y=0,z=0,cont=0,x=0,i=1000;
	char cadena[i];
	
	printf("Ingrese la cadena a evaluar:\n");
	setbuf(stdin,NULL);
	gets(cadena);
	tamano=strlon(cadena);
	tamano=tamano-1;
	
	do
	{
		if(cont==0)
		{
			y=65;
			z=90;
		}
		else if(cont<=1)
		{
			y=97;
			z=122;
		}
		for(x=y;x<=z;x++)
		{
			for(i=0;i<=tamano;i++)
			{
				k=cadena[i];
				if(k==x)
				{
					printf("\n%c",k);
				}
			}
		}
		cont++;
	}while(cont<=1);
	
	return 0;
}


int strlon(char cadena[])
{
	int cont=0;

	while(cadena[cont]!=0)
	{
		cont++;
	}

	return cont;
}
