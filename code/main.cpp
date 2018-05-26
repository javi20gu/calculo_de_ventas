#include <iostream>
#include <conio.h>

using namespace std;

void obtenerBeneficio(float cantFija, float cantVariable, float precioventa, float cantproductos){
		
	int resultado = 0;
		
	resultado = (precioventa - cantVariable) * cantproductos - cantFija;
	cout<<"\nTu Beneficio va a ser de: " << resultado <<" $. Por vender "<<cantproductos<<" uds."<<endl;
}

void obtenerUnidades(float cantFija, float cantVariable, float precioventa){
	
	int resultado = 0;
	
	resultado = cantFija / (precioventa - cantVariable);
	cout<<"Tienes que vender " << resultado << "uds. Para tener un beneficio 0";
	
}

int main(){
	
	float cantidadFijaUnitaria, cantidadVariableUnitaria, precioVentaOrdenador, cantidaddeproductos;
	
	cout<<"Indique la cantidad de productos si quiere obtener el beneficio sino ponga 0: ";
	cin>>cantidaddeproductos;
	
	cout<<"Indique la cantidad fija unitaria: ";
	cin>>cantidadFijaUnitaria;
	
	cout<<"Indique la cantidad variable unitaria: ";
	cin>>cantidadVariableUnitaria;
	
	cout<<"Indique el precio al público del producto: ";
	cin>>precioVentaOrdenador;
	
	if (cantidaddeproductos == 0 ){
		obtenerUnidades(cantidadFijaUnitaria, cantidadVariableUnitaria, precioVentaOrdenador);
	} 
	else {
		obtenerBeneficio(cantidadFijaUnitaria, cantidadVariableUnitaria, precioVentaOrdenador, cantidaddeproductos);
	}
	getch();
	return 0;
}
