#include <iostream>
#include "ModuloDois.h"
#include "ModuloQuatro.h"
#include "ModuloCinco.h"
#include "ModuloOito.h"
#include "ModuloNove.h"
#include "ModuloOnze.h"
#include "ModuloDezesseis.h"
#include "ModuloDezessete.h"

void exibirMenu(int *opcao) {
	cout << "\n2 - Modulo 2 - Basico" << endl;
	cout << "4 - Modulo 4 - Variaveis" << endl;
	cout << "5 - Modulo 5 - Input" << endl;
	cout << "8 - Modulo 8 - Funcoes" << endl;
	cout << "9 - Modulo 9 - Ponteiros" << endl;
	cout << "11 - Modulo 11 - Vetores e Matrizes" << endl;
	cout << "16 - Modulo 16 - Structs" << endl;
	cout << "17 - Modulo 17 - OO" << endl;
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
		case 8:
			executaModuloOito();
			break;
		case 9:
			executaModuloNove();
			break;
		case 11:
			executaModuloOnze();
			break;
		case 16:
			executaModuloDezesseis();
			break;
		case 17:
			executaModuloDezessete();
			break;
		default:
			break;
	}
}

int main()
{
	int opcao;
	do {
		exibirMenu(&opcao);
		gerenciaModulos(opcao);
		system("PAUSE");
	} while (opcao < 2 || opcao > 17);
	return 0;
}






