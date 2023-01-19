#include<stdio.h>
#include<stdlib.h>

int main() {

	int MIL[1000];
	int N1, N2, i;

	for(i = 0; i < 1000; ++i){
	MIL[i] = (rand()%1000);
		printf("%u ", MIL[i]);
	}
	printf("\n\n");

	printf("QUE NUMERO DESEAS CAMBIAR :\t");
	scanf("%d", &N1);

	printf("NUMERO PARA EL CAMBIO:\t");
	scanf("%d", &N2);


    printf("\n\n");  


	for(i = 0; i < 1000; ++i)
	{
	if(N1 == MIL[i])
	{
	MIL[i] = N2;
	}
	}
	for(i = 0; i < 1000; i++)
	{
	printf("%d ", MIL[i]);
	}

return 0;
}

