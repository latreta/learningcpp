#include <iostream>

#define MATRIZ_SIZE 5

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

void geraMatriz() {
	int matriz[MATRIZ_SIZE][MATRIZ_SIZE];

	for (int i = 0; i < MATRIZ_SIZE; i++) {
		for (int j = 0; j < MATRIZ_SIZE; j++) {
			if (i < j) {
				//matriz[i][j] = 1;
				cout << " 1 ";
			}
			else if (i > j) {
				//matriz[i][j] = -1;
				cout << "-1 ";
			}
			else {
				//matriz[i][j] = 0;
				cout << " 0 ";
			}
		}
		cout << "\n";
	}
}

void calculaMediaVelocidades() {
	cout << "\n\n\nCalculando media\n";
	float soma = 0.0;
	int qtd = 0;
	float Velocidades[] = { 55, 80, 100, 120, 220 };

	for (auto velocidade : Velocidades) {
		soma += velocidade;
		qtd++;
	}

	printf("Media das velocidades: %.2f\n\n", soma / qtd);
}

void calculaMediaAlunos() {
	double notas[] = { 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0 };
	double total = 0.0;
	int qtd = sizeof(notas) / sizeof(double); // = 0;
	
	for (auto nota : notas) {
		total += nota;
		//qtd++;
	}

	//if (qtd == 0) return;

	printf("Media %.2f\n\n", total / qtd);
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


	printf("\n\nGerando matriz\n\n");
	geraMatriz();

	calculaMediaVelocidades();

	calculaMediaAlunos();

}