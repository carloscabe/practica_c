#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definicion y asignacion de valores char
	char letra;
	char vocal_may;
	char vocal_min;
	letra='L';
	cout<<"Imprimiendo letra 'L':"<<letra<<endl;
	//letra="ll"; //Error por asignar mas de un caracter.
	//Asignando valores numericos 
	letra=65; //ASCII es la A.
	cout<<"imprimiendo ASCII '65':"<<letra<<endl;
	
	//IMPRIMIR EN CODIGO ASCII LAS VOCALES MAY Y MIN CON ACENTOS
	
	letra=64; 
	cout<<"imprimiendo ASCII '@':"<<letra<<endl;
	letra=92; 
	cout<<"imprimiendo ASCII '\':"<<letra<<endl;
	vocal_may=181;
	cout<<"imprimiendo la vocal mayuscula A:"<<vocal_may<<endl;
	vocal_may=144;
	cout<<"imprimiendo la vocal mayuscula E:"<<vocal_may<<endl;
	vocal_may=214;
	cout<<"imprimiendo la vocal mayuscula I:"<<vocal_may<<endl;
	vocal_may=224;
	cout<<"imprimiendo la vocal mayuscula O:"<<vocal_may<<endl;
	vocal_may=233;
	cout<<"imprimiendo la vocal mayuscula U:"<<vocal_may<<endl;
	
	vocal_min=160;
	cout<<"imprimiendo la vocal minuscula a:"<<vocal_min<<endl;
	vocal_min=130;
	cout<<"imprimiendo la vocal minuscula e:"<<vocal_min<<endl;
	vocal_min=161;
	cout<<"imprimiendo la vocal minuscula i:"<<vocal_min<<endl;
	vocal_min=162;
	cout<<"imprimiendo la vocal minuscula o:"<<vocal_min<<endl;
	vocal_min=163;
	cout<<"imprimiendo la vocal minuscula u:"<<vocal_min<<endl;
	return 0;
}
 
