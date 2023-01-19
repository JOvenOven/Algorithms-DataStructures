public class Celda{
	private int num;
	private String direc;
	private String color;

	public Celda(){

	}

	public Celda(int num, String direc){
		this.num = num;
		this.direc = direc;
	}

	public int getNum(){
		return num;
	}

	public void setNum(int num){
		this.num = num;
	}

	public String getDirec(){
		return direc;
	}

	public void setDirec(String direc){
		this.direc = direc;
	}

	public String getColor(){
		return color;
	}

	public void setColor(String color){
		this.color = color;
	}
}
