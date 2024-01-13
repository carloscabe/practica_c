#include <iostream>
using namespace std;
//#define PI 3.1416; //definimos una constante llamada PI

int main(int argc, char *argv[]) {
	const float PI= 3.1416; //Definimos una constante llamada PI
	double diametro, circunferencia;
	circunferencia=40;
	diametro=circunferencia/PI;
	cout <<"El diametro de la circunferencia=40:" <<diametro; //<<endl;
	//PI=0; //error por asignacion a una variable de solo lectura
	
	return 0;
}

