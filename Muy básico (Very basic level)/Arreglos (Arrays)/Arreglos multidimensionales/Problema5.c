#include<stdio.h>

int main() {
	
	float ecuacion1[3][3];
	float ecuacion2[3][3];
	float primerapartex, primerapartey;
	float segundapartex, segundapartey;
	float tercerapartex, tercerapartey;
	float cuartapartex, cuartapartey;
	float partefinalx,partefinaly;

	printf("Ingrese el valor de X1 :\t");
	scanf("%f",&ecuacion1[0][0]);
	printf("Ingrese el valor de Y1 :\t");
	scanf("%f",&ecuacion1[0][1]);
	printf("Ingrese el valor del termino independiente independiente :\t");
	scanf("%f",&ecuacion1[0][2]);
	printf("Ingrese el valor de X2 :\t");
	scanf("%f",&ecuacion2[0][0]);
	printf("Ingrese el valor de Y2 :\t");
	scanf("%f",&ecuacion2[0][1]);
	printf("Ingrese el valor del termino independiente independiente :\t");
	scanf("%f",&ecuacion2[0][2]);
	
	/* operaciones para sacar X */
	primerapartex = (-1)*(ecuacion1[0][1]*ecuacion2[0][2]);
	segundapartex = ecuacion1[0][2]*ecuacion2[0][1];
	tercerapartex = (-1)*((ecuacion1[0][1])*(ecuacion2[0][0]));
	cuartapartex = (ecuacion1[0][0]*ecuacion2[0][1]);
	partefinalx = (primerapartex+segundapartex)/(tercerapartex+cuartapartex);
	
	/* operaciones para sacar Y */
	primerapartey = (-1)*(ecuacion1[0][2]*ecuacion2[0][0]);
	segundapartey = (ecuacion2[0][2]*ecuacion1[0][0]);
	tercerapartey = (-1)*(ecuacion1[0][1]*ecuacion2[0][0]);
	cuartapartey = (ecuacion1[0][0]*ecuacion2[0][1]);
	partefinaly = (primerapartey+segundapartey)/(tercerapartey+cuartapartey);
	
	/*resultado final */
	printf("El valor de X es :%f\n",partefinalx);
	printf("El valor de Y es :%f\n",partefinaly);
	return 0;
}

