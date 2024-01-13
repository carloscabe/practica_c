#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string cadena1,cadena2, universidad;
	cadena1="Bienvenido a: ";
	cadena2="universidad";
	cout<<cadena1<<"Ingrese el nombre de la universidad:";
	cin>>universidad;
	
	cout<<cadena1<<" la " <<cadena2<<" "<<universidad<<endl;
	
	return 0;
}

