#pragma once
#include "Pessoa.h"

using namespace std;

class Aluno : public Pessoa
{
	string Curso;
public:
	Aluno(string nome, int cpf, int matricula, string curso) : Pessoa(nome, cpf, matricula) {
		Curso = curso;
	}
	void RealizarProva();
	string GetCurso();
	void SetCurso(string curso);
};

