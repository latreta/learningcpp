#include <iostream>
#include "ModuloDois.h"
#include "ModuloQuatro.h"
#include "ModuloCinco.h"

void exibirMenu(int *opcao) {
	// Imprimir menu
	cout << "2 - Modulo 2" << endl;
	cout << "4 - Modulo 4" << endl;
	cout << "5 - Modulo 5" << endl;
	cout << "6 - Modulo 6" << endl;
	cout << "Digite sua opcao: ";
	cin >> (*opcao);
}

void gerenciaModulos(int opcao) {
	switch (opcao) {
		case 2:
			executaModuloDois();
			break;
		case 4:
			executaModuloQuatro();
			break;
		case 5:
			executaModuloCinco();
			break;
		default:
			break;
	}
}

int main()
{
	int opcao = 5;
	do {
		exibirMenu(&opcao);
		gerenciaModulos(opcao);		
	} while (opcao < 2 || opcao > 17);
	return 0;
}






