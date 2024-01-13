#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

		int numero = 0;
		
		// Solicitar al usuario un número
		cout << "Ingresa un número: ";
		cin >> numero;
		
		// Verificar si el número es par o impar
		if (numero % 2 == 0) {
			std::cout << "El número ingresado es par. ¡Correcto!\n";
		} else {
			std::cout << "El número ingresado es impar. Respuesta incorrecta.\n";
		}
		
		return 0;
	return 0;
}

