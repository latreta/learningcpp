#pragma once
#include <iostream>

using namespace std;

class Pessoa {
	string Nome;
	int CPF;
	int Matricula;
public:
	Pessoa() {
		Nome = "";
		CPF = 0;
		Matricula = 0;
	}

	Pessoa(string nome, int cpf, int matricula) {
		Nome = nome;
		CPF = cpf;
		Matricula = matricula;
	}

	void AcessarSistema();
	int GetCPF();
	int GetMatricula();
	string GetNome();
	void SetNome(string nome);
	void SetCPF(int cpf);
	void SetMatricula(int matricula);
};