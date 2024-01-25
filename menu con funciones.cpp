#include <iostream>

const int MAX_NUMEROS = 100; // Tamaño máximo del arreglo de números

// Función para ingresar números
int ingresarNumeros(int numeros[MAX_NUMEROS]) {
	int cantidad;
	std::cout << "Ingrese la cantidad de números a ingresar: ";
	std::cin >> cantidad;
	
	for (int i = 0; i < cantidad; ++i) {
		std::cout << "Ingrese el número " << i + 1 << ": ";
		std::cin >> numeros[i];
	}
	
	return cantidad; // Devolvemos la cantidad de números ingresados
}

// Función para sumar los números
int sumarNumeros(const int numeros[MAX_NUMEROS], int cantidad) {
	int suma = 0;
	for (int i = 0; i < cantidad; ++i) {
		suma += numeros[i];
	}
	return suma;
}

// Función para verificar si un número es primo
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

// Función para verificar si todos los números en el arreglo son primos
bool sonTodosPrimos(const int numeros[MAX_NUMEROS], int cantidad) {
	for (int i = 0; i < cantidad; ++i) {
		if (!esPrimo(numeros[i])) {
			return false;
		}
	}
	return true;
}

// Función principal que implementa el menú
void menuPrincipal() {
	int numeros[MAX_NUMEROS];
	int cantidad = 0;
	int opcion;
	
	do {
		// Mostramos el menú
		std::cout << "\nMenu:\n";
		std::cout << "1. Ingresar números\n";
		std::cout << "2. Sumar los números\n";
		std::cout << "3. Verificar si todos los números ingresados son primos\n";
		std::cout << "0. Salir\n";
		std::cout << "Seleccione una opción: ";
		std::cin >> opcion;
		
		switch (opcion) {
		case 1:
			cantidad = ingresarNumeros(numeros);
			break;
		case 2:
			std::cout << "La suma de los números es: " << sumarNumeros(numeros, cantidad) << std::endl;
			break;
		case 3:
			if (sonTodosPrimos(numeros, cantidad)) {
				std::cout << "Todos los números ingresados son primos.\n";
			} else {
				std::cout << "No todos los números ingresados son primos.\n";
			}
			break;
		case 0:
			std::cout << "Saliendo del programa.\n";
			break;
		default:
			std::cout << "Opción no válida. Intente de nuevo.\n";
		}
	} while (opcion != 0);
}

int main() {
	menuPrincipal();
	return 0;
}
