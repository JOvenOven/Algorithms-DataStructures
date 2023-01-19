//EJERCICIO 6   
#include<iostream>
#include<stdio.h>

int main() {
	
	float AAA[4][4];
	float BBB[4][4];
	float CCC[4][4];
	float delta, deltax, deltay, deltaz;
	float dx, dy, dz;
	float primeraparted, primerapartedx, primerapartedy, primerapartedz;
	float segundaparted, segundapartedx, segundapartedy, segundapartedz;
	
	printf("Ingrese el valor de X1 :\n");
	scanf("%f",&AAA[0][0]);
	printf("Ingrese el valor de Y1 :\n");
	scanf("%f",&AAA[0][1]);
	printf("Ingrese el valor de Z1 :\n");
	scanf("%f",&AAA[0][2]);
	printf("Ingrese el valor del termino independiente independiente :\n");
	scanf("%f",&AAA[0][3]);
	printf("Ingrese el valor de X2 :\n");
	scanf("%f",&BBB[0][0]);
	printf("Ingrese el valor de Y2 :\n");
	scanf("%f",&BBB[0][1]);
	printf("Ingrese el valor de Z2 :\n");
	scanf("%f",&BBB[0][2]);
	printf("Ingrese el valor del termino independiente independiente :\n");
	scanf("%f",&BBB[0][3]);
	printf("Ingrese el valor de X3 :\n");
	scanf("%f",&CCC[0][0]);
	printf("Ingrese el valor de Y3 :\n");
	scanf("%f",&CCC[0][1]);
	printf("Ingrese el valor de Z3 :\n");
	scanf("%f",&CCC[0][2]);
	printf("Ingrese el valor del termino independiente independiente :\n");
	scanf("%f",&CCC[0][3]);
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* Calculo de delta */
	primeraparted = (AAA[0][0]*BBB[0][1]*CCC[0][2])+(BBB[0][0]*CCC[0][1]*AAA[0][2])+(CCC[0][0]*AAA[0][1]*BBB[0][2]);
	segundaparted = (AAA[0][2]*BBB[0][1]*CCC[0][0])+(BBB[0][2]*CCC[0][1]*AAA[0][0])+(BBB[0][2]*AAA[0][1]*BBB[0][0]);
	delta = primeraparted-segundaparted;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* Calculo de delta X */
	primerapartedx = (AAA[0][3]*BBB[0][1]*CCC[0][2])+(BBB[0][3]*CCC[0][1]*AAA[0][2])+(CCC[0][3]*AAA[0][1]*BBB[0][2]);
	segundapartedx = (AAA[0][2]*BBB[0][1]*CCC[0][3])+(BBB[0][2]*CCC[0][1]*AAA[0][3])+(CCC[0][2]*AAA[0][1]*BBB[0][3]);
	deltax = primerapartedx-segundapartedx;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* Calculo de delta Y */
	primerapartedy = (AAA[0][0]*BBB[0][3]*CCC[0][2])+(BBB[0][0]*CCC[0][3]*AAA[0][2])+(CCC[0][0]*AAA[0][3]*BBB[0][2]);
	segundapartedy = (AAA[0][2]*BBB[0][3]*CCC[0][0])+(BBB[0][2]*CCC[0][3]*AAA[0][0])+(CCC[0][2]*AAA[0][3]*BBB[0][0]);
	deltay = primerapartedy-segundapartedy;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* Calculo de delta Z */
	primerapartedz = (AAA[0][0]*BBB[0][1]*CCC[0][3])+(BBB[0][0]*CCC[0][1]*AAA[0][3])+(CCC[0][0]*AAA[0][1]*BBB[0][3]);
	segundapartedz = (AAA[0][3]*BBB[0][1]*CCC[0][0])+(BBB[0][3]*CCC[0][1]*AAA[0][0])+(CCC[0][3]*AAA[0][1]*BBB[0][0]);
	deltaz = primerapartedz-segundapartedz;
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* Calculo de deltaX / delta deltaY / delta deltaZ / delta */
	dx = deltax/delta;
	dy = deltay/delta;
	dz = deltaz/delta;
	
	printf("valor de X es:%f\n",dx);
	printf(" valor de Y es:%f\n",dy);
	printf(" valor de Z es:%f\n",dz);
	return 0;
}

