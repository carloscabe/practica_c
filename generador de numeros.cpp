#include <iostream>
#include <cstdlib> // se necesita para la función rand()
#include <ctime>   // se necesita para la función time()

// Utilizamos el espacio de nombres std para evitar la repetición de std::
using namespace std;

int main() {
	int cantidad;
	
	// se solicita al usuario ingresar que cantidad de numeros quiere generar.
	cout << "Ejercicio 2: Generación de NUmeros Aleatorios\n";
	cout << "¿Cuántos números quiere generar? ";
	cin >> cantidad;
	
	// Iniciar la semilla para obtener números realmente aleatorios
	srand(time(0));
	
	// imprimir los numeros aleatorios que se generaron
	cout << "Números aleatorios generados: ";
	for (int i = 0; i < cantidad; ++i) {
		// generar numeros aleatorios y mostrarlos
		cout << rand() % 100;
		// espaciado entre numeros.
		if (i < cantidad - 1) {
			cout << ", ";
		}
	}
	cout << endl;
	
	return 0;
}
