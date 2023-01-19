#include<stdio.h>

float calcularX(float[3][3], float[3][3]);
float calcularY(float[3][3], float[3][3]);

int main() {
	
	float ecuacion1[3][3];
	float ecuacion2[3][3];
	float x,y;

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

	x = calcularX(ecuacion1, ecuacion2);
	y = calcularY(ecuacion1, ecuacion2);
	
	/*resultado final */
	printf("El valor de X es :%f\n",x);
	printf("El valor de Y es :%f\n",y);
	return 0;
}

float calcularX(float ecuacion1[3][3], float ecuacion2[3][3]){
	float primerapartex;
	float segundapartex;
	float tercerapartex;
	float cuartapartex;
	float partefinalx;

	/* operaciones para sacar X */
	primerapartex = (-1)*(ecuacion1[0][1]*ecuacion2[0][2]);
	segundapartex = ecuacion1[0][2]*ecuacion2[0][1];
	tercerapartex = (-1)*((ecuacion1[0][1])*(ecuacion2[0][0]));
	cuartapartex = (ecuacion1[0][0]*ecuacion2[0][1]);
	partefinalx = (primerapartex+segundapartex)/(tercerapartex+cuartapartex);

	return partefinalx;
}

float calcularY(float ecuacion1[3][3], float ecuacion2[3][3]){
	float primerapartey;
	float segundapartey;
	float tercerapartey;
	float cuartapartey;
	float partefinaly;
	
	/* operaciones para sacar Y */
	primerapartey = (-1)*(ecuacion1[0][2]*ecuacion2[0][0]);
	segundapartey = (ecuacion2[0][2]*ecuacion1[0][0]);
	tercerapartey = (-1)*(ecuacion1[0][1]*ecuacion2[0][0]);
	cuartapartey = (ecuacion1[0][0]*ecuacion2[0][1]);
	partefinaly = (primerapartey+segundapartey)/(tercerapartey+cuartapartey);

	return partefinaly;
}