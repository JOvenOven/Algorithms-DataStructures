#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float x,y,z;
	//** x=compra, y=descuento, z=total a pagar**//
	printf ("Ingresa el valor de tu compra\n");
	scanf("%f",&x);
	
	if( x<800 )
	{
		printf("Tu compra no tiene descuento\n");
		z=x;
	}
	else
	{
		if(x == 800)
		{
			y = (x*(0.1));
			printf("Tu descuento es del 10 porciento = %f\n",y);
			z= x-y;
		}
		else
		{
			if(800<x<1500)
			{
				y = (x*(0.1));
				printf("Tu descuento es del 10% =\t %f\n",y);
				z= x-y;
			}
			else
			{
				if(x==1500)
				{
					y = (x*(0.2));
					printf("Tu descuento es del 20% = %f\n",y);
					z= x-y;
				}
				else
				{
					if(1500<x<5000)
					{
						y = (x*(0.2));
						printf("Tu descuento es del 20% = %f\n",y);
						z= x-y;
					}
					else
					{
						if(x>=5000)
						{
							y = (x*(0.3));
							printf("Tu descuento es del 20% = %f\n",y);
							z= x-y;	
						}
						else
						{
							printf("Tampoco te vamos a regalar las cosas\n");	
						}
					}
				}
			}
		}
	}
	printf("Tu total a pagar es de = %f \n",z);
	printf("Gracias por comprar, vuelva pronto :)");
	return 0;
}
