#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	// Variable para almacenar el n�mero ingresado por el usuario
	int numero;
	
	// Solicitar al usuario que ingrese un n�mero
	std::cout << "Ingrese el numero para realizar la tabla: ";
	std::cin >> numero;
	
	// Mostrar el n�mero ingresado por el usuario
	std::cout << "\nTabla de multiplicar del " << numero << ":\n";
	
	// Bucle FOR para imprimir la tabla de multiplicar
	for (int i = 1; i <= 10; ++i) {
		std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
	}
	return 0;
}

