#include "Solidos.h"
#include <iostream>
#include <string>
#include "../Residuos/Residuos.h"

Solidos::Solidos(std::string nome,std::string descricao):
Residuos(nome,descricao){};
//set_residuos(nome);

Solidos::~Solidos()
{
}

/* void Solidos::descricao_residuo(){

std::cout << "\nO metodo de descarte deste Solido é: \n";
std::cout << _descricao << std::endl;
} */