/*
Titulo: Tabla de Multiplicacion. 
Autor: Carlos eduardo cabello cabello
Descripcion: Escribir un programa que imprima la tabla de multiplicar de un numero ingresado por el usuario. 
Fecha: 17/01/2024

*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	// Variable para almacenar el número ingresado por el usuario
	int numero;
	
	// Solicitar al usuario que ingrese un número
	std::cout << "Ingrese el numero para realizar la tabla: ";
	std::cin >> numero;
	
	// Mostrar el número ingresado por el usuario
	std::cout << "\nTabla de multiplicar del " << numero << ":\n";
	
	// Bucle FOR para imprimir la tabla de multiplicar
	for (int i = 1; i <= 10; ++i) {
		std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
	}
	return 0;
}

