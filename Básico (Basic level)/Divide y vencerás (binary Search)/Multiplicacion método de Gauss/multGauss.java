import java.lang.Integer;
import java.lang.Math;

public class multGauss{
	public static void main(String[] args) {
		int x, y, n, base, res;

		base = Integer.parseInt(args[3]);

		if (base == 2 || base == 10) {
			x = Integer.parseInt(args[0]);
			y = Integer.parseInt(args[1]);
			n = Integer.parseInt(args[2]);
		}else{
			x = Integer.parseInt(args[0], 16);
			y = Integer.parseInt(args[1], 16);
			
			if (Integer.toString(x).length()>Integer.toString(y).length()) {
				n = Integer.toString(x).length();
			}else{
				n = Integer.toString(y).length();
			}
			base = 10;
		}

		n = (int)Math.pow(2,Math.ceil(Math.log10(n)/Math.log10(2)));

		Multiplicandos nums = new Multiplicandos(x,y,n,base);
		Utilidades utilidades = new Utilidades();

		//nums = baseNums(nums);
		/*validarNums verifica si los números tienen la 
		misma longitud y si su longitud potencia de dos, de 
		lo contrario los corrige agregando ceros a la 
		izquierda para que se cumpla la condición, recibe 
		un objeto tipo Multiplicandos y regresa un objeto 
		tipo Multiplicandos*/
		//nums = validarNums(nums);
		res = utilidades.Multiplicar(x,y,n,base);
		System.out.println("La multiplicacion es: " + res);

		
	}

	/*public Multiplicandos validaNums(Multiplicandos nums){
		int x, y, n, base;

		x = nums.getX();
		y = nums.getY();
		n = nums.getN();
		base = nums.getBase();

		if () {
			xd
		}
	}*/

	
}