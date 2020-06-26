#include <iostream>

#include "Aluno.h"
#include "Professor.h"

using namespace std;

void executaModuloDezessete() {
	Professor professorTeste("Professor teste", 213, 2131241, "Testes");

	professorTeste.AcessarSistema();
	professorTeste.EfetuarChamada();
	professorTeste.EntregarPauta();

	Aluno alunoTeste("Aluno", 2, 3, "Computacao");

	cout << "Curso antigo: " << alunoTeste.GetCurso() << endl;
	alunoTeste.SetCurso("Filosofia");
	cout << "Curso novo: " << alunoTeste.GetCurso() << endl;
	alunoTeste.RealizarProva();

}