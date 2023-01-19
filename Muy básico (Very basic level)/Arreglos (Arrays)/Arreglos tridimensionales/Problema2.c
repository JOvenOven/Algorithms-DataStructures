#include<stdio.h>
#include<stdlib.h>

int strlon(char cadena[]);
int strcom(char cadena[], char cadena2[]);

int main(int argc, char const *argv[])
{
	char cad_usu[100] = "";
	char cad_rev[100] = "";
	int lon;

	printf("Ingrese una palabra o frase (sin espacios) corta para verificar si es un palindromo\n");
	scanf("%s", &cad_usu);
	lon = strlon(cad_usu);

	for (int i = 0; i < lon; i++)
	{
		cad_rev[i] = cad_usu[lon-i-1];
	}

	if (strcom(cad_rev, cad_usu) == 1)
	{
		printf("El texto ingresado '%s' es un palindromo\n", cad_usu);
	}else{
		printf("El texto ingresado '%s' no es un palindromo\n", cad_usu);
	}
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

int strcom(char cadena[], char cadena2[])
{
	int cont=0, igual=1;

	while(cadena[cont]!=0 && cadena2[cont]!=0)
	{
		if (cadena[cont] == cadena2[cont])
		{
			igual=1;
		}else{
			igual=0;
			cadena[cont++]=0;
		}
		cont++;
	}

	return igual;
}