#include <iostream>
using namespace std;

	//Declaracion de variables globales.
	int n1,n2;
	
	bool esPar(int numero) 
	{
		return numero % 2 == 0;
	}
	
	int sumar()
	{
		return n1+n2;
	}
	
int multiplicar()
{
	return n1*n2;
}
void ingresar()
{
	cout <<"ingresar el primer numero:";
	cin >>n1;
	cout <<"ingresar el segundo numero:";
	cin >>n2;
	
}	

int main(int argc, char *argv[])  {
	ingresar ();
	cout <<"suma de los numeros es:" <<sumar() <<endl;
	cout <<"Multiplicacion de los numeros es:" <<multiplicar()<<endl;
	if (esPar(n1))
		cout <<"numero "<<n1<<" es PAR"<<endl;
	else
		cout<<"numero "<<n1<<" es IMPAR"<<endl;
	return 0;
}



