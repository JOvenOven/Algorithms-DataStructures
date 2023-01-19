//2 Calcule el factorial de n
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero,factorial=1;
	
	cout<<"digite un numero";
	cin>>numero;
	
	for(int i=1;i<=numero;i++){
		
		
	factorial=factorial*i;
	}
	
	cout<<"el factorial es del numero es:"<<factorial<<endl;
	
	
	system("pause");
	return 0;
}

