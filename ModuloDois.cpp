#include <iostream>

//Yves Greg�rio 22/06/2020

using namespace std;

/*
	Imprime a frase com quebra de linha(Engloba o uso de \n pedido na observa��o.)
*/
void ImprimirFrase(string frase) {
	cout << frase << endl;
}


/*
	Imprime char por char at� encontrar um espa�o entre as palavras para quebrar a linha
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

