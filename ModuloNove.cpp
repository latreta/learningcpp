#include <iostream>

using namespace std;

void executaModuloNove() {
	int Numero = 234;
	int* ponteiro = &Numero;
	int* OutroPrt;
	OutroPrt = ponteiro;
	*ponteiro = 1456;
	cout << "\n\nValor de Numero atraves do ponteiro: " << *ponteiro << "\n\n";
	cout << "Endereco do ponteiro: " << &ponteiro << "\n\n";
	cout << "Endereco de numero: " << &Numero << "\n\n";
	cout << "Valor do ponteiro: " << ponteiro << "\n\n";

	*ponteiro += 200;
	cout << "Valor de OutroPrt: " << *OutroPrt << "\n\n";
}