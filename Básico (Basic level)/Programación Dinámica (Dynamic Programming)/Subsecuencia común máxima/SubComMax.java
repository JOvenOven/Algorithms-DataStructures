import java.lang.Integer;
import java.lang.Long;
import java.lang.Math;
import java.util.ArrayList;
import java.lang.StringBuilder;

public class SubComMax{
	public static void main(String[] args) {
		char [] x,y; 
		ArrayList<String> res = new ArrayList<String>();
		String color = "";
		boolean fin;
		int ren, col, cont = 0;
		x = args[0].toCharArray();
		y = args[1].toCharArray();
		Celda celda;

		/*****************Solución con programación dinámica********************/
		ArrayList<ArrayList<Celda>> tabla = new ArrayList<ArrayList<Celda>>();
		for (int i=0; i<x.length+1; i++) {
			tabla.add(new ArrayList<Celda>());
			for (int j=0; j<y.length+1; j++) {
				celda=new Celda();
				/*
				Regla
				"Si i=0 o j=0" entonces 0
				*/
				if (i==0 || j==0) {
					celda.setNum(0); 
					celda.setDirec("");
				}else{
					/*
					Regla
					"Si i<>0, j<>0 y Xj=Yi", entonces L(i-1,j-1)+1,diag
					*/
					if (x[i-1]==y[j-1]) {
						celda.setNum(tabla.get(i-1).get(j-1).getNum() + 1);
						celda.setDirec("diag");
					}else{
						/*
						Regla
						"Si i<>0, j<>0 y Xj=Yi y L(i,j-1)<>L(i-1,j)", 
						entonces tomamos el óptimo MAX(L(i,j-1)-izq,L(i-1,j)-sup)
						*/
						if (tabla.get(i).get(j-1).getNum() != tabla.get(i-1).get(j).getNum()) {
							if (tabla.get(i).get(j-1).getNum() > tabla.get(i-1).get(j).getNum()) {
								celda.setNum(tabla.get(i).get(j-1).getNum());
								celda.setDirec("izq");
							}else{
								celda.setNum(tabla.get(i-1).get(j).getNum());
								celda.setDirec("sup");
							}
						}else{
							/*
							Regla
							"Si i<>0, j<>0 y Xj=Yi y L(i,j-1)=L(i-1,j)", 
							entonces L(i-1,j),sup
							*/
							celda.setNum(tabla.get(i-1).get(j).getNum());
							celda.setDirec("sup");
						}
					}
				}
				tabla.get(i).add(celda);
			}
		}

		/*************Obtención de los resultados******************/
		//recorrer la tabla para encontrar las subcadenas comunes máximas
		for (int i=tabla.size()-1; i>=0; i--) { 
			for (int j=tabla.get(i).size()-1; j>=0; j--) {
				//la celda es inicio de una subsecuencia máxima?
				if (tabla.get(i).get(j).getNum() == tabla.get(x.length).get(y.length).getNum()) {
					//la celda ya ha sido utilizada para una subsecuencia máxima?
					if (tabla.get(i).get(j).getColor() == null) { 
						color = color + "*";
						fin = true;
						ren = i;
						col = j;
						//seguir el hilo del resultado en la tabla
						while(fin){
							if (ren == 0 || col == 0) {
								fin = false;
							}else{
								tabla.get(ren).get(col).setColor(color);
								if (tabla.get(ren).get(col).getDirec()=="diag") {
									res.add("");
									res.set(cont, res.get(cont) + x[ren - 1]);
									ren = ren - 1;
									col = col - 1;
								}else{
									if (tabla.get(ren).get(col).getDirec()=="sup") {
										ren = ren - 1;
									}else{
										col = col - 1;
									}
								}
							}
						}
						cont++;
					}
				}
			}
		}

		/**************Mostrar los resultados uwu******************/
		for (int i=0; i<res.size(); i++) {
			if (res.get(i)!="") {
				StringBuilder ser = new StringBuilder(res.get(i));
				res.set(i, ser.reverse().toString());
				System.out.println(res.get(i));
			}
		}

		/***************Mostrar la tabla**********************/
		System.out.print("                           ");
		for (int i=0; i<y.length; i++) {
			System.out.print("       " + y[i] + "       ");
		}
		System.out.println("");
		for (int i=0; i<tabla.size(); i++) {
			for (int j=0; j<tabla.get(i).size(); j++) {
				if (i==0 && j==0) {
					System.out.print("             ");
					System.out.print("      0      ");
				}else{
					if (i==0) {
						System.out.print("       0       ");
					}else{
						if (j==0) {
							System.out.println("");
							System.out.print("      " + x[i-1] + "      ");
							System.out.print("      0      ");
						}else{
							System.out.print("    " + tabla.get(i).get(j).getNum() + ",");
							System.out.print(tabla.get(i).get(j).getDirec());
							if (tabla.get(i).get(j).getColor()==null) {
								System.out.print("      ");
							}else{
								System.out.print("," + tabla.get(i).get(j).getColor() + "    ");
							}
							
							
						}
					}
				}
			}
		}
	}
}