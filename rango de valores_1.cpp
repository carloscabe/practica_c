#include <iostream>
using namespace std;

int main (int argc, char *arg[]){
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero;
	unsigned int numero_entero_s;
	float numero_decimal;
	double numero_decimal_g;
	
	//Asignando valores limite de los tipos de datos
	numero_entero_p=32767; //valor limite del tipo de dato
	cout <<"Numero entero pequeño:" <<numero_entero_p<<endl;
	numero_entero_p1=-6; //valor limite del tipo de dato 65535 65530
	cout <<"Numero entero pequeño positivo:" <<numero_entero_p1<<endl;
	
	//Asignando valores maximos para unsigned int y int
	numero_entero=2147483647; //valor limite del tipo de dato
	cout <<"Numero entero:" <<numero_entero<<endl;
	numero_entero_s=4294967295; //valor limite del tipo de dato
	cout <<"Numero entero positivo:" <<numero_entero_s<<endl;
	
	//Aignacion entre variables 
	numero_entero_p1=numero_entero_p; //los valores son correctos al asignar??. no es correcta!.
	cout <<"Numero entero pequeño 1ra asignacion :" <<numero_entero_p1<<endl;
	//rango de datos short int -32768 al 32767
	numero_entero_p=32769//el valor esta fuera del rango de valores permitidos
	numero_entero_p1=numero_entero_p;//
	cout <<"Numero entero pequeño 2da asignacion:" <<numero_entero_p1<<endl;
	
	
	return 0;
}
