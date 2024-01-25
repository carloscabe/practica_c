#include <iostream>
#include <cstdlib>
#include <ctime> // Incluimos la librería ctime para utilizar la función time
using namespace std;

// Función para generar un número aleatorio entre 0 y 99
int aleatorio() {
	return rand() % 100;
}

// Función para verificar si un número es impar
bool esImpar(int numero) {
	return numero % 2 != 0;
}

int main(int argc, char *argv[]) {
	int n, c = 0, num;
	
	cout << "Generar N números impares. Ingrese N: ";
	cin >> n;
	
	// Inicializar la semilla del generador de números aleatorios con el tiempo actual
	srand(static_cast<unsigned int>(time(nullptr)));
	
	// Mientras no se hayan generado suficientes números impares
	while (c < n) {
		num = aleatorio();
		
		// Si el número es impar, imprimirlo
		if (esImpar(num)) {
			c++;
			cout << "Número impar [" << c << "]: " << num << endl;
		}
	}
	
	return 0;
}

