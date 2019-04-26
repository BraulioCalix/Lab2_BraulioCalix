#include <iostream>
//miercoles semana 2
using namespace std;
int main (){
	int salir = 1;// si se hace 2 se va a salir
	while(salir == 1 ){
		cout << "BIENVENIDO " << endl;
		cout << "1) captcha " << endl;
		cout << "2) numeros perfectos" <<endl;
		cout << "3) permutaciones " << endl;
		int opcion=0;
		int perfecto = 0;

		cin >> opcion;
		switch (opcion){
			case 1:
				cout << "op1" <<endl;
				break;
			case 2:
				cout << "ingrese un numero positivo " << endl;	
				cin >> perfecto;
				if (perfecto < 0){
				cout << "metio un numero no valido, regresara al menu" <<endl;
				
				}else{
					
					for (int i=1;i < num;i++){
					
					}
				}
				break;
			case 3: 
				cout << "op3" << endl;
				break;
			default :
				break;
			}//fin switch menu
		cout << "desea regresar? 1)si 2)no" << endl; 
		cin >>salir;	
	}//fin while respuesta usuario
return 0;
}//fin del main
