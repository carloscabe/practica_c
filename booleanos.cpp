#include <iostream>
using namespace std;

int main(int argc, char*argv[]) {
	// Declaracion y uso del bool
	bool b0;
	b0=true;
	cout<<"variable con valor VERDADERO:"<<b0<<endl;
	b0=false;
	cout<<"variable con valor FALSO:"<<b0<<endl;
	//Asignacion de valores numericos
	//si es cero es FALSO, si es diferente de cero es verdadero.
	b0=0; //El valor se vera con false 
	cout<<"variable con valor 0:" <<b0<<endl;
	b0=1;//El valor se vera como true .
	cout<<"variable con valor 1:"<<b0<<endl;
	b0=-100;//E el valor se vera como true
	cout<<"variable con valor -100:"<<b0<<endl;
	return 0;
	
}
