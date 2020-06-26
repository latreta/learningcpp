#include "Professor.h"

void Professor::EfetuarChamada()
{
	std::cout << "Professor efetuando chamada" << endl;
}

void Professor::EntregarPauta()
{
	std::cout << "Professor entregando pauta" << std::endl;
}

string Professor::GetDepartamento()
{
	return Departamento;
}

void Professor::SetDepartamento(string departamento) {
	Departamento = departamento;
}
