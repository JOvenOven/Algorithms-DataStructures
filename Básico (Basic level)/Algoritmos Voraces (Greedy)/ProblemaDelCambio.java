import java.lang.Integer;
import java.lang.Long;
import java.lang.Math;
import java.util.ArrayList;
import java.lang.StringBuilder;

public class ProblemaDelCambio{
	public static void main(String[] args) {
		/*En consola se debe ingresar separado por espacios;
		  la cantidad de billetes de quinientos disponibles
		  en caja, de doscientos, cien, cincuenta, veinte, 
		  de monedas de diez, cinco, dos, un peso y 
		  la cantidad que debe ser devuelta, en ese órden*/

		/*caja[0] y cambio[0] es para billetes de quinientos
		  caja[1] y cambio[1] es para billetes de doscientos
		  caja[2] y cambio[2] es para billetes de cien
		  caja[3] y cambio[3] es para billetes de cincuenta
		  caja[4] y cambio[4] es para billetes de veinte
		  caja[5] y cambio[5] es para monedas de diez
		  caja[6] y cambio[6] es para monedas de cinco
		  caja[7] y cambio[7] es para monedas de dos
		  caja[8] y cambio[8] es para monedas de 1*/
		int [] caja=new int[9];
		int [] cambio=new int[9];
		int cantidad = Integer.parseInt(args[9]);
		int valor;
		boolean todaviaCabe;

		for (int i=0; i<9; i++) {
			caja[i] = Integer.parseInt(args[i]);
			cambio[i] = 0;
			
			valor=0;
			todaviaCabe=true;
			switch(i){
				case 0:
					valor=500;
					break;
				case 1:
					valor=200;
					break;
				case 2:
					valor=100;
					break;
				case 3:
					valor=50;
					break;
				case 4:
					valor=20;
					break;
				case 5:
					valor=10;
					break;
				case 6:
					valor=5;
					break;
				case 7:
					valor=2;
					break;
				case 8:
					valor=1;
					break;
			}
			
			while(todaviaCabe){
				/*selección del óptimo local osea, el billete o moneda más grande 
				que pueda ser devuelto en el instante al que se evalúa*/
				if(caja[i]>0 && valor<=cantidad){
					caja[i]--; //sacamos el billete de la caja
					cambio[i]++; //entregamos el billete como cambio
					cantidad=cantidad-valor; /*reducimos la cantidad de cambio a 
											   devolver*/
				}else{
					todaviaCabe=false;
				}
			}
		}

		/*****************Mostrar resultados*****************/
		if (cantidad>0) {
			System.out.println("No hay cambio :c, faltan " + cantidad + " pesos");
		}else{ 
			System.out.println("El cajero devuelve:");
			for (int i=0; i<9; i++) {
				switch(i){
					case 0:
						System.out.println(cambio[i] + " billetes de 500 pesos");
						break;
					case 1:
						System.out.println(cambio[i] + " billetes de 200 pesos");
						break;
					case 2:
						System.out.println(cambio[i] + " billetes de 100 pesos");
						break;
					case 3:
						System.out.println(cambio[i] + " billetes de 50 pesos");
						break;
					case 4:
						System.out.println(cambio[i] + " billetes de 20 pesos");
						break;
					case 5:
						System.out.println(cambio[i] + " monedas de 10 pesos");
						break;
					case 6:
						System.out.println(cambio[i] + " monedas de 5 pesos");
						break;
					case 7:
						System.out.println(cambio[i] + " monedas de 2 pesos");
						break;
					case 8:
						System.out.println(cambio[i] + " monedas de 1 peso");
						break;
				}
			}
		}
	}
}
