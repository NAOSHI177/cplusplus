#include <iostream>
#include <windows.h>
using namespace std;
main(){
	int n, r;
	/*	FORMA 1
	cout<<"Ingrese un numero: ";
	cin>>n;	
	while((n%2 != 0)||(n>=20)){
		cout<<"ERROR"<<endl;
		cout<<"Intente de nuevo: ";
		cin>>n;	
	}	
	*/	
	do{
		cout<<"Ingrese un numero: ";
		cin>>n;	
		if((n%2 != 0)||(n>=20)){
			system("cls");
			cout<<"ERROR:"<<endl;
		}
	}while((n%2 != 0)||(n>=20));
	cout<<"EL NUMERO ES "<<n<<" SU TABLA ES"<<endl;
	for(int c=1; c<=10; c++){
		r = c*n;
		cout<<c<<" x "<<n<<" = "<<r<<endl;
	}
	system("pause");	
}
