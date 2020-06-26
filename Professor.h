#pragma once
#include "Pessoa.h"

using namespace std;

class Professor : public Pessoa
{
	string Departamento;

public:
	Professor(string nome, int cpf, int matricula, string departamento): Pessoa(nome, cpf, matricula) {
		Departamento = departamento;
	}

	void EfetuarChamada();
	void EntregarPauta();
	string GetDepartamento();
	void SetDepartamento(string departamento);
};

