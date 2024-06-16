/*
Desarrolle un programa en C++ que permita calcular el área de distintas figuras geométricas a través
de un menú de opciones. Las opciones son:
1.Calcular el área de un rombo.
2.Calcular el área de un cuadrado.
3.Salir.
El programa deberá ejecutarse de la siguiente manera:
Mostrar el menú y solicitar al usuario que elija una opción.
Dependiendo de la opción seleccionada:
Para el área del rombo, pedir las medidas de las diagonales mayor y menor, calcular el área con
la función calcularAreaRombo(diagonalMayor, diagonalMenor) y mostrar el resultado.
Para el área del cuadrado, pedir la medida de un lado, calcular el área con la función
calcularAreaCuadrado(lado) y mostrar el resultado.
Si se selecciona "Salir", terminar la ejecución del programa.
Después de cada cálculo, el menú debe volver a mostrarse hasta que el usuario decida salir.
*/

#include <iostream>
using namespace std; 

int areacuadrado(int x){
	int area;
	
	area=x*x; 
	 
	 return area; 
}

int arearombo(int x, int y){
	int arear; 
	
	arear=(x*y)/2; 
	
	return arear;
}

int main(){
	int lado, diagmayor, diagmenor, opc; 
	
	do{
	   cout<<"1. Calcular el area de un rombo. "<<endl; 
	   cout<<"2. Calcular el area de un cuadrado ."<<endl; 
	   cout<<"3. Salir."<<endl; 
	   cout<<endl<<"Opcion: ";
	   cin>>opc; 
	   
	   if(opc==1){
	   	cout<<"Digite la diagonal mayor: "; 
	   	cin>>diagmayor; 
	   	
	   	cout<<endl<<"Digite la diagonal menor: "; 
	   	cin>>diagmenor; 
	   	
	   	cout<<"El area del rombo es: "<< arearombo(diagmayor, diagmenor)<<endl; 
	   }
	   else if(opc==2){
	   	
	   	cout<<"Digite el lado del cuadrado: "; 
	   	cin>>lado; 
	   	
	   	cout<<endl<<"El area del cuadrado es: "<< areacuadrado(lado) <<endl; 
	   }
	   
	   
	}while(opc<3); 
	
}



