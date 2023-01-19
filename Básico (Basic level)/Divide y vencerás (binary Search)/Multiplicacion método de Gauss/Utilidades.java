import java.lang.Math;

public class Utilidades{
	public int Multiplicar(int x, int y, int n, int base){
		int xi,xd,yi,yd,p1,p2,p3,resultado;
		if (n==1) {
			return x*y;
		}else{
			xi = Dividir(x, 'i', n);
			xd = Dividir (x, 'd', n);
			yi = Dividir (y, 'i', n);
			yd = Dividir (y, 'd', n);
			p1 = Multiplicar (xi, yi, n/2, base);
			p2 = Multiplicar (xi + xd, yi + yd, n/2, base);
			p3 = Multiplicar (xd, yd, n/2, base);

			resultado = ((int)Math.pow(base,n) * p1) + ((int)Math.pow(base,n/2) * (p2-p1-p3)) + p3;
		}
		return resultado;
	}

	public int Dividir(int x, char lado, int n){
		int res=0;
		res = x/(int)Math.pow(10,n/2);
		if (lado=='i') {
			//System.out.println("Izquierda: " + res);
			return res;
		}else{
			//System.out.print("Derecha: ");
			//System.out.println(x-res*((int)Math.pow(10,n/2)));
			return x-res*((int)Math.pow(10,n/2));
		}
	}
}