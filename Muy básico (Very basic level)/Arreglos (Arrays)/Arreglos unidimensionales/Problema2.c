//EJERCICIO 2
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	
	int MIL[1000];
	int i;
	double M, div, V1,V2, DESV, prom, numMayor=0, numMenor=0;
	
	for(i = 0; i <=999; i++)
	{	
	MIL[i] =(rand()%1000);
	printf("%u ", MIL[i]);	
	M = M + MIL[i];
	div = div + 1;
	V1 = pow(MIL[i], 2);
	V2 = V1 + V1;
		
	if(MIL[i] > numMayor)
	{
	numMayor = MIL[i];
	}
	if(MIL[i] < numMenor)
	{
	numMenor = MIL[i];
	}
	}
	
	printf("\n\n");
	
	prom = (numMayor + numMenor) / 2;
	M = M / (div - 1);
	V2 = V2 / (div - 1);
	DESV = sqrt(V1);
	
	printf("NUMERO MAYOR : %f, NUMERO MENOR : %f, PROMEDIO : %f\n", numMayor, numMenor, prom);
	
	for(i = 0; i <= 999; i++){
	if(prom == MIL[i])
	{
	printf("verdadero SE UBICA EN : %d\n", (i + 1));
	}
	else
	{
	printf("falso SE UBICA EN  : %d\n", (i + 1));
	}
	}
	
	printf("LA MEDIA ES : %lf\n", M);
	printf("LA VARIANZA ES: %lf\n", V2);
	printf("LA DESVIACION ES: %lf\n", DESV);
	
	return 0;
}

