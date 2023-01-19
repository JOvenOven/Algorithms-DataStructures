#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	
	int C,n,respuesta=0,res=0;
	cout<<"numero de veces que quiere que se siga la secuencia:";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	C=pow (i,i);
    
	if(i%2==0)
	{
	respuesta=pow(i,i);
	res=res-respuesta;
    }
	else
	{
	respuesta=pow(i,i);
	res=res+respuesta;
	}	
	}
	
	
	cout<<"el resultado de la suma es:"<<res<<endl;
	return 0;
}
