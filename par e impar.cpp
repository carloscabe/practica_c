#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

		int numero = 0;
		
		// Solicitar al usuario un n�mero
		cout << "Ingresa un n�mero: ";
		cin >> numero;
		
		// Verificar si el n�mero es par o impar
		if (numero % 2 == 0) {
			std::cout << "El n�mero ingresado es par. �Correcto!\n";
		} else {
			std::cout << "El n�mero ingresado es impar. Respuesta incorrecta.\n";
		}
		
		return 0;
	return 0;
}

