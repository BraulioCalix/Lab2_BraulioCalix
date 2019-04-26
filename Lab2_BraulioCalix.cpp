#include <iostream>
#include <stdlib.h>
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
			case 1:{
				cout<< "ingrese que opcion desea ejecutar" << endl;
				string cadena="";
				cout<< "ingrese la cadena "<<endl;
				cin >> cadena;
				int tamano = cadena.length();
				int arreglo [tamano];
				int tamanocade = 0;
				tamanocade = cadena.length();
				int suma = 0;
				bool valido = false;
				for (int i = 0;i< tamanocade; i++){
					if(isdigit(cadena[i])){
        	        		                
	                                }else{
					valido =true;
					}
				}
				if(valido==true){//encontro un caracter que no es un numero
					cout<<"la cadena contiene caracteres distintos a numeros" << endl; 
				}else{
					char caracter = ' ';
					int numero = 0;
					suma = 0;
					for(int i=0; i < tamanocade; i++){
						caracter=' ';
                                                numero=0;
						if(i==tamanocade-1){
							cout << "ultimo" << endl;
							if(cadena[i]==cadena[0]){
							caracter = cadena[i];
					       		numero = caracter - 48;		
							suma+=numero;
							}	
						}else{						
							if(cadena[i]==cadena[i+1]){		
							caracter = cadena[i];
                                                        numero = caracter - 48;	
                                                        suma+=numero;
							}else{
							}
						}
					}
				}
				cout << "la suma es: " << suma << endl; 
			       }//fin case
				break;
			case 2:{
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
			       }//fin case
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
