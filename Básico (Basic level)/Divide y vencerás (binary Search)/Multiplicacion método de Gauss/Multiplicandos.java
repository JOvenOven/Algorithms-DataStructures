public class Multiplicandos{
	private int x;
	private int y;
	private int n;
	private int base;

	public Multiplicandos(int x, int y, int n, int base){
		this.x = x;
		this.y = y;
		this.n = n;
		this.base = base;
	}

	public int getX(){
		return x;
	}

	public void setX(int x){
		this.x = x;
	}

	public int getY(){
		return y;
	}

	public void setY(int y){
		this.y = y;
	}

	public int getN(){
		return n;
	}

	public void setN(int n){
		this.n = n;
	}

	public int getBase(){
		return base;
	}

	public void setBase(int base){
		this.base = base;
	}
}