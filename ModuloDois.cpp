#include <iostream>

#define CONSOLE_COLOR "color 01"
#define QUEBRA_LINHA "\n"

//Yves Gregório 22/06/2020
using namespace std;

void ImprimirFrase(string frase) {
	cout << frase << endl;
}

/*
	Imprime a frase com quebra de linha(Engloba o uso de \n pedido na observação.)
*/
void ImprimirFraseComQuebraCaracter(string frase) {
	for (int i = 0; i < frase.length(); i++) {
		if (frase[i] == ' ') {
			cout << QUEBRA_LINHA;
		}
		else {
			cout << frase[i];
		}
	}
	cout << QUEBRA_LINHA;
}


/*
	Imprime char por char até encontrar um espaço entre as palavras para quebrar a linha
*/
void ImprimirFraseComQuebra(string frase) {
	for (int i = 0; i < frase.length(); i++) {
		if (frase[i] == ' ') {
			cout << endl;
		}
		else {
			cout << frase[i];
		}
	}
	cout << endl;
}


void executaModuloDois() {
	// Questao 4 - Preto e Azul
	system(CONSOLE_COLOR);
	ImprimirFrase("===========  Modulo 2  ===========");
	ImprimirFrase("\nQuestao 1");
	ImprimirFrase("Vou aprender a programar na Linguagem C++");
	ImprimirFrase("\nQuestao 2");
	ImprimirFrase("Letra a");
	ImprimirFraseComQuebra("Vou aprender a programar na Linguagem C++");
	ImprimirFrase("Letra b");
	ImprimirFraseComQuebraCaracter("Vou aprender a programar na Linguagem C++");
}
