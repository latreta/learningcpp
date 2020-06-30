#include "Pessoa.h"

void Pessoa::AcessarSistema() {
	std::cout << "=========== Acesso concedido ===========" << std::endl;
}

int Pessoa::GetCPF()
{
	return CPF;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}

string Pessoa::GetNome()
{
	return Nome;
}

void Pessoa::SetNome(string nome) {
	Nome = nome;
}

void Pessoa::SetCPF(int cpf) {
	CPF = cpf;
}

void Pessoa::SetMatricula(int matricula) {
	Matricula = matricula;
}
