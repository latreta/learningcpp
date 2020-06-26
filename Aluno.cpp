#include "Aluno.h"

void Aluno::RealizarProva()
{
	std::cout << "Realizando prova" << std::endl;
}

string Aluno::GetCurso()
{
	return Curso;
}

void Aluno::SetCurso(string curso)
{
	Curso = curso;
}
