#include <iostream>
#include <windows.h>
using namespace std;

main(){
	int v, a, r;
	a = 0;
	
	do{
		cout<<"\n1- Ingresar monto\n";
		cout<<"2- Calcular monto para cada nino\n";
		cout<<"3- Salir \n";
		cout<<"\nPor favor, introduzca su opcion: ";
		cin>>v;
			if(v!=1 && v!=2 && v!=3)
				cout<<"\nIngrese un valor correcto\n";
		
		switch(v){
			case 1: 
				cout<<"\nIngrese un valor: ";
				cin>>a;
				break;
			case 2:
				if( a != 0){
				r = a/3	;
				cout<<"\nEl monto para cada niño es: "<<r<<"\n";
				}else{
				cout<<"\nIngrese un valor distinto a 0\n";
				}
				break;
			case 3:
				int j;
				cout<<"\nEstas seguro que quieres salir?\n1-SI\n2-NO\n";
				cout<<"\nPor favor, introduzca su opcion: ";
				cin>>j;
				if(j == 1){
					return 0;
				}else{
					return main();
				}
				break;
			}		
		}
		while(v !=3);
		system("pause");
	
}
