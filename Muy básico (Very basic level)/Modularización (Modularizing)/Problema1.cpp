#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>


using namespace std;

void crearArregloAleatorio(int Ar[10][10]);
void operarArreglos(int Ar[10][10], int Ar2[10][10], int sum[10][10]);
void mostrarArreglito(int Ar[10][10]);
void mostrarArreglote(int Ar[10][10]);

int main(){
	
	int Arr[10][10];
	int Brr[10][10];
	int Crr[10][10];
	
	crearArregloAleatorio(Brr);
	crearArregloAleatorio(Arr);
	operarArreglos(Brr, Arr, Crr);
   	
	cout<<"ARREGLO A"<<endl;
	mostrarArreglito(Arr);
	
	cout<<"ARREGLO B"<<endl;
	mostrarArreglito(Brr);
	
	cout<<"ARREGLO Crr(Arr+Brr)"<<endl;
	mostrarArreglote(Crr);
	
	return 0;
}

void crearArregloAleatorio(int Ar[10][10]){
	int fbb,cbb,numEE;
	
	srand(time(0));
	for(fbb=0;fbb<10;fbb++){
		for(cbb=0;cbb<10;cbb++){
			numEE=1+rand()%100;
			Ar[fbb][cbb]=numEE;
		}	
	}
}

void operarArreglos(int Ar[10][10], int Ar2[10][10], int sum[10][10]){
	int fc,cb,cc,K;

	for(fc=0;fc<10;fc++){
		for(cc=0;cc<10;cc++){
    		sum[fc][cc]=0;
			for(K=0;K<10;K++){
				sum[fc][cc]+=Ar[fc][K]+Ar2[K][cc];
	    	}
		}
	}
}

void mostrarArreglito(int Ar[10][10]){
	int fa,ca;

	for(fa=0;fa<10;fa++){
		for(ca=0;ca<10;ca++){
	    	cout<<setw(3)<<Ar[fa][ca]<<" ";
		}
		cout<<endl;	
	}
}

void mostrarArreglote(int Ar[10][10]){
	int fc,cc;

	for(fc=0;fc<10;fc++){
		for(cc=0;cc<10;cc++){
			cout<<setw(10)<<Ar[fc][cc]<<" ";
		}
		cout<<endl;	
	}
}