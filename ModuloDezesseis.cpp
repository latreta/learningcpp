#include <iostream>


using namespace std;

struct Ponto3D {
	int x, y, z;

	void DesenharPonto3D() {
		printf("X:%d \nY:%d \nZ:%d\n\n", x, y, z);
	}
};

struct Livro {
	int id;
	string Titulo, Autor, Editora, Ano;

	void ExibirLivro() {
		cout << "Livro ID: " << id << "\n" << "Titulo: " << Titulo << "\n" << "Autor: " << Autor << "\n" << "Editora: " << Editora << "\n" << "Ano: " << Ano << "\n";
	}
};

void DesenharPonto3D(Ponto3D ponto) {
	printf("X:%d \nY:%d \nZ:%d\n\n", ponto.x, ponto.y, ponto.z);
}


Livro adicionar(int id) {
	Livro livro;
	cout << "************Cadastro de livro************" << "\n";
	livro.id = id;
	cout << "Digite o Titulo: " << "\n";
	cin.ignore();
	cin >> livro.Titulo;
	cout << "Digite o nome do autor: " << "\n";
	cin.ignore();
	cin >> livro.Autor;
	cout << "Digite o nome da editora: " << "\n";
	cin.ignore();
	cin >> livro.Editora;
	cout << "Digite o ano do livro: " << "\n";
	cin.ignore();
	cin >> livro.Ano;
	return livro;
}

void executaModuloDezesseis() {
	Ponto3D ponto;
	ponto.x = 5;
	ponto.y = 3;
	ponto.z = 7;
	ponto.DesenharPonto3D();

	struct Livro livros[5];

	for (int i = 0; i < 5; i++) {
		livros[i] = adicionar(i);
		livros[i].ExibirLivro();
	}

	
}