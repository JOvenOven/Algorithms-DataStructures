#include <stdio.h>
#include <stdlib.h>

int main() {

	int	ent=0;
	
	printf("Introduzca un valor\n");
	scanf("%d",&ent);

	do
	{
		if(ent%2==0)
		{
			ent=ent/2;
			printf("%d\n",ent);
		}
		else
		{
			ent=ent*3;
			ent=ent+1;
			printf("%d\n",ent);
		}
	}while(ent!=1);
	return 0;
}