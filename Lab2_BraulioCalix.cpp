#include <iostream>
#include <string>
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
		int acumulaPerfe = 0;
		int cuentaperfe = 0;
		bool boolperf = false;
		cin >> opcion;
		switch (opcion){
			case 1:
				cout<< "ingrese que opcion desea ejecutar" << endl;
				string cadena="";
				cout "ingrese la cadena "<<endl;
				cin >> cadena;
				int arreglo[cadena.length];
				for(int i=0; i < cadena.length; i++){
					if(cade){
					
					}else{
					
					}
				}
				break;
			case 2:
				cout << "ingrese un numero positivo " << endl;	
				cin >> perfecto;
				if (perfecto < 0){
				cout << "metio un numero no valido, regresara al menu" <<endl;
				
				}else{
					acumulaPerfe = 0;
					cuentaperfe = 0;
					for (int i=1;i < perfecto;i++){
						acumulaPerfe += i;
						cuentaperfe ++;				
						if (acumulaPerfe == perfecto){
							boolperf= true;
							break;
						}
					}

					if(boolperf == true){
						cout << "el numero si es perfecto" << endl;
						cout << "EL NUMERO ES: " << perfecto <<endl;
	
						for (int i=1;i <= cuentaperfe;i++){
                	                        	if(i == 1){
								cout << i;
							}else{
								cout << " ," << i ;
							}
					 	                       
                                       		 }//fin for cuenta
					cout << " " << endl;
					}else{
						cout << " el numero no es perfecto "<< endl;
						
					}// fin if de perfecto
				}
				break;
			case 3: {
				string permuta= "";
				cout << "ingrese la cadena que desea permutar"<< endl;
				cin >> permuta;
				cout << permuta << endl;
				int tama= permuta.length();
				cout << tama << endl;	
				bool repite=false;
				for(int i = 0; i < tama ; i++){
					for(int j= 0; j < tama ; j++){
						if(i==j){
					
						}else{
							if ( permuta[i]==permuta[j]){
								repite=true;
							}
						//fin else if 
						}
					}//fin for anidado
				}// fin for 		
				if(repite == true){
					cout << "la cadena no es apta para permutar" << endl;
				}else {
					cout << "la cadena si es apta para la permutacion " << endl;
					for(int i = 0; i < tama; i++){
						cout << permuta[i];

						for(int j =0 ;j < tama; j++){
//							cout << "i" << i << "j"<< j << endl;
							
							if(i==j){
							
							}else{
								cout << permuta[j];
							}
						}//fin for anidado
						cout <<" " <<endl;
					}//fin for 
				}			
				}//ciera llave case
				break;
			default :
				break;
			}//fin switch menu
		cout << "desea regresar? 1)si 2)no" << endl; 
		cin >> salir;	
	}//fin while respuesta usuario
return 0;
}//fin del main
