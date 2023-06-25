#import <iostream>
#import <windows.h>

using namespace std;

main(){
	int v,a,b,c;
	a = 0;
	do{
		cout<<"\n1- Escribir valor del lado\n";
		cout<<"2- Calcular el perimetro y area\n";
		cout<<"3- Salir del programa\n\n";
		cout<<"Por favor, introduzca su opcion: ";
		cin>>v;
		if(v != 1 && v != 2 && v != 3){
			cout<<"\nIngrese valores correctos\n";
		}
				
	switch(v){
		case 1:
			cout<< "\nIngrese el valor del lado: \n";
			cin>> a;
			break;
		case 2:
			if(a != 0){
			b = a*4;
			c = a*a;
			cout<<"\nEl perimetro es: "<<b<< "\n";
			cout<<"El area es: "<<c<< "\n";
			}else{
					cout<<"\nIngrese un valor distinto a 0\n";
			}
			break;
		case 3:
			int m;
			cout<<"\nSeguro que quieres salir?\n1-SI\n2-NO\nPor favor, introduzca su opcion: ";
			cin >>m;
			if(m == 1){
				return 0;
				
			}else{
				return main();
			}
			break;		
		}	
	}
	while(v != 3);
	system("pause");
}
	
		







