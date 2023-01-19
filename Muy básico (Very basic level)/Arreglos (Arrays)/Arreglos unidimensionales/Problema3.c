//EJERCICIO 3

#include<stdio.h>
#include<stdlib.h>

    int main() 
    {
	int i;
	int Z;
	int MIL[1000];
	int temp;
	int x;
	
	printf("ARREGLO CON NUMEROS ALEATORIOS  :\n");
	printf(" \n");
	
	for (i=0;i<=999;i+=1) 
	{
	MIL[i] = (rand()%1000);	
	printf("%i ",MIL[i]);
	}
	for (i=0;i<=999;i+=1) 
	{
	for (Z=0;Z<=998;Z+=1) 
	{
	if (MIL[Z]>MIL[Z+1]) 
	{
	temp = MIL[Z];
	MIL[Z] = MIL[Z+1];
	MIL[Z+1] = temp;
	}
	}
	}
	
	printf("ARREGLO FORMADO ASCENDENTEMENTE \n");

	printf(" \n");
	for (x=0;x<=999;x+=1)
    {
	printf("%i\n",MIL[x]);
	}
	
	
	for (i=0;i<=999;i+=1)
    {
	for (Z=0;Z<=998;Z+=1) 
	{
	if (MIL[Z]<MIL[Z+1]) 
	{
	temp = MIL[Z];
	MIL[Z] = MIL[Z+1];
	MIL[Z+1] = temp;
	}
	}
	}
	
	printf(" \n");
	printf("ARREGLO FORMADO DESCENDENTE\n");
	printf(" \n");
	for (x=0;x<=999;x+=1)
    {
	printf("%i\n",MIL[x]);
	}
	return 0;
}

