#include <iostream>
#include "ModuloDois.h"
#include "ModuloQuatro.h"

void exibirMenu(int *opcao) {
	// Imprimir menu
	cout << "2 - Modulo 2" << endl;
	cout << "4 - Modulo 4" << endl;
	cout << "5 - Modulo 5" << endl;
	cout << "6 - Modulo 6" << endl;
}

int main()
{
	int opcao = 4;
	exibirMenu(&opcao);
	switch (opcao) {
		case 2:
			executaModuloDois();
			break;
		case 4:
			executaModuloQuatro();
			break;
		default:
			break;
	}
	return 0;
}






