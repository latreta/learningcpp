#include <iostream>

using namespace std;

double SomaDe10Numeros(int numeros[10]) {
	double soma = 0;
	for (int i = 0; i < 10; i++) {
		soma += numeros[i];
	}
	return soma;
}

int maiorDoVetor(int numeros[], int qtdElement) {
	int maior = numeros[0];
	for (int i = 0; i < qtdElement; i++) {
		maior = numeros[i] >= maior ? numeros[i] : maior;
	}
	return maior;
}

int menorDoVetor(int numeros[], int qtdElement) {
	int menor = numeros[0];
	for (int i = 0; i < qtdElement; i++) {
		menor = numeros[i] <= menor ? numeros[i] : menor;
	}
	return menor;
}

int* inverteVetor(int* array, int qtdElement) {
	int* invertido = (int*)malloc(sizeof(int) * qtdElement);
	for (int i = 0, j = qtdElement - 1; i < qtdElement; i++) {
		invertido[i] = array[j];
		j--;
	}
	return invertido;
}

void imprimeVetor(int* array, int qtdElement) {
	cout << "Imprimindo Vetor" << "\n\n";
	for (int i = 0; i < qtdElement; i++) {
		cout << array[i] << " - ";
	}
	cout << "\n\n";
}

void executaModuloOnze() {
	int numeros[10] = { 1, 2, 3, 4, 5, 6 , 7, 8 , 9, 10 };
	printf("\nSoma do vetor: %f\n", SomaDe10Numeros(numeros));
	printf("\nMaior do vetor: %d\n", maiorDoVetor(numeros, 10));
	printf("\nMenor do vetor: %d\n\n", menorDoVetor(numeros, 10));
	imprimeVetor(numeros, 10);
	int * numeros2 = inverteVetor(numeros, 10);
	imprimeVetor(numeros2, 10);
	free(numeros2);
}