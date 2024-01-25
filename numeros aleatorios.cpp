#include <iostream>
#include <cstdlib>
#include <ctime> // Incluimos la librer�a ctime para utilizar la funci�n time
using namespace std;

// Funci�n para generar un n�mero aleatorio entre 0 y 99
int aleatorio() {
	return rand() % 100;
}

// Funci�n para verificar si un n�mero es impar
bool esImpar(int numero) {
	return numero % 2 != 0;
}

int main(int argc, char *argv[]) {
	int n, c = 0, num;
	
	cout << "Generar N n�meros impares. Ingrese N: ";
	cin >> n;
	
	// Inicializar la semilla del generador de n�meros aleatorios con el tiempo actual
	srand(static_cast<unsigned int>(time(nullptr)));
	
	// Mientras no se hayan generado suficientes n�meros impares
	while (c < n) {
		num = aleatorio();
		
		// Si el n�mero es impar, imprimirlo
		if (esImpar(num)) {
			c++;
			cout << "N�mero impar [" << c << "]: " << num << endl;
		}
	}
	
	return 0;
}

