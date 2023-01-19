#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x,y,sum;
	
	printf("Ingresa un numero positivo: ");
	scanf("%d",&n);
	
	for( x=1 ; x <= n ; x++ )
	{
		sum =0;
		for(x=1;y<=(x/2);y++)
		{
			if(x%y == 0)
			{
				sum = sum + y
			}
		}
		if(sum == x)
		{
			printf("%d",x);
	}
}
	retunr 0;
}
