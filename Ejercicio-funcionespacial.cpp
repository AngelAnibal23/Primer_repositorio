/*
Desarrolle un programa en C++ que permita calcular el �rea de distintas figuras geom�tricas a trav�s
de un men� de opciones. Las opciones son:
1.Calcular el �rea de un rombo.
2.Calcular el �rea de un cuadrado.
3.Salir.
El programa deber� ejecutarse de la siguiente manera:
Mostrar el men� y solicitar al usuario que elija una opci�n.
Dependiendo de la opci�n seleccionada:
Para el �rea del rombo, pedir las medidas de las diagonales mayor y menor, calcular el �rea con
la funci�n calcularAreaRombo(diagonalMayor, diagonalMenor) y mostrar el resultado.
Para el �rea del cuadrado, pedir la medida de un lado, calcular el �rea con la funci�n
calcularAreaCuadrado(lado) y mostrar el resultado.
Si se selecciona "Salir", terminar la ejecuci�n del programa.
Despu�s de cada c�lculo, el men� debe volver a mostrarse hasta que el usuario decida salir.
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



