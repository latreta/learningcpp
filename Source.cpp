#include <iostream>
#include "ModuloDois.h"


void moduloDois() {
	system("color 01");
	ImprimirFrase("Vou aprender a programar na Linguagem C++");
	ImprimirFraseComQuebra("Vou aprender a programar na Linguagem C++");
	ImprimirFrase("Vou\naprender\na\nprogramar\nna\nLinguagem\nC++");
}

int main()
{
	moduloDois();
	system("PAUSE");
	return 0;
}


