//3 serie fibonacci 1 1 2 3 5 8 13

#include<iostream>
using namespace std;


int main(){
	
int i,n,y=1,x=0,z=1;
  
cout<<"ingrese numero de digito que quiere que llegue la sucesion:"; cin>>n;

cout<<"1 ";
   for(i=1;i<n;i++){
	z=x+y;
	x=y;
	y=z;
		cout<<z<<endl;
}

	return 0;
}
