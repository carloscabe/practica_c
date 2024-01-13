#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//DECLARACION DE UNA CADENA DE CARACTERES
	char nombre[]="CARLOS";
	
	cout<<"imprimiendo la NOMBRE '\':"<<nombre<<endl;
	cout<<"imprimiendo nombre [0] '\':"<<nombre[0]<<endl;
	cout<<"imprimiendo nombre [1] '\':"<<nombre[1]<<endl;
	cout<<"imprimiendo nombre [2] '\':"<<nombre[2]<<endl;
	cout<<"imprimiendo nombre [3] '\':"<<nombre[3]<<endl;
	cout<<"imprimiendo nombre [4] '\':"<<nombre[4]<<endl;
	cout<<"imprimiendo nombre [5] '\':"<<nombre[5]<<endl;
	nombre[0]='c';
	nombre[1]='a';
	nombre[2]='r';
	nombre[3]='l';
	nombre[4]='o';
	nombre[5]='s';
	cout<<"imprimiendo la NOMBRE '\':"<<nombre<<endl;
	
	return 0;
}

