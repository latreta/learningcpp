#include<iostream>
#include "Matematica.h"


using namespace std;

void executaModuloOito() {
	int num1, num2;

	cout << "\n\nDigite o numero 1:" << endl;
	cin >> num1;
	cout << "\n\nDigite o numero 1:" << endl;
	cin >> num2;

	printf("A soma dos numeros %d e %d: %d\n", num1, num2, somar(num1, num2));
	printf("A subtracao dos numeros %d e %d: %d\n", num1, num2, subtrair(num1, num2));
	printf("A multiplicacao dos numeros %d e %d: %d\n", num1, num2, multiplicar(num1, num2));
	printf("A Divisao dos numeros %d e %d: %d\n", num1, num2, dividir(num1, num2));
}