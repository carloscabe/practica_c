#include <iostream>

const int MAX_NUMEROS = 100; // Tama�o m�ximo del arreglo de n�meros

// Funci�n para ingresar n�meros
int ingresarNumeros(int numeros[MAX_NUMEROS]) {
	int cantidad;
	std::cout << "Ingrese la cantidad de n�meros a ingresar: ";
	std::cin >> cantidad;
	
	for (int i = 0; i < cantidad; ++i) {
		std::cout << "Ingrese el n�mero " << i + 1 << ": ";
		std::cin >> numeros[i];
	}
	
	return cantidad; // Devolvemos la cantidad de n�meros ingresados
}

// Funci�n para sumar los n�meros
int sumarNumeros(const int numeros[MAX_NUMEROS], int cantidad) {
	int suma = 0;
	for (int i = 0; i < cantidad; ++i) {
		suma += numeros[i];
	}
	return suma;
}

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int numero) {
	if (numero <= 1) {
		return false;
	}
	for (int i = 2; i * i <= numero; ++i) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

// Funci�n para verificar si todos los n�meros en el arreglo son primos
bool sonTodosPrimos(const int numeros[MAX_NUMEROS], int cantidad) {
	for (int i = 0; i < cantidad; ++i) {
		if (!esPrimo(numeros[i])) {
			return false;
		}
	}
	return true;
}

// Funci�n principal que implementa el men�
void menuPrincipal() {
	int numeros[MAX_NUMEROS];
	int cantidad = 0;
	int opcion;
	
	do {
		// Mostramos el men�
		std::cout << "\nMenu:\n";
		std::cout << "1. Ingresar n�meros\n";
		std::cout << "2. Sumar los n�meros\n";
		std::cout << "3. Verificar si todos los n�meros ingresados son primos\n";
		std::cout << "0. Salir\n";
		std::cout << "Seleccione una opci�n: ";
		std::cin >> opcion;
		
		switch (opcion) {
		case 1:
			cantidad = ingresarNumeros(numeros);
			break;
		case 2:
			std::cout << "La suma de los n�meros es: " << sumarNumeros(numeros, cantidad) << std::endl;
			break;
		case 3:
			if (sonTodosPrimos(numeros, cantidad)) {
				std::cout << "Todos los n�meros ingresados son primos.\n";
			} else {
				std::cout << "No todos los n�meros ingresados son primos.\n";
			}
			break;
		case 0:
			std::cout << "Saliendo del programa.\n";
			break;
		default:
			std::cout << "Opci�n no v�lida. Intente de nuevo.\n";
		}
	} while (opcion != 0);
}

int main() {
	menuPrincipal();
	return 0;
}
