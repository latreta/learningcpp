#include <iostream>

using namespace std;

void executaModuloCinco() {
	float nota1, nota2, nota3;
	float media = 0.0;
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	cout << "Digite a terceira nota: ";
	cin >> nota3;

	media = (nota1 + nota2 + nota3) / 3;
	printf("Media geral: %.2f", media);
	system("PAUSE");
}